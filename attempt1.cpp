// Falling Money Game - Smooth Arrow Key Input
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <termios.h>
#include <sys/select.h>

using namespace std;

constexpr int WIDTH = 30;
constexpr int HEIGHT = 15;
constexpr int INITIAL_SCORE = 50;
constexpr int WIN_SCORE = 100;
constexpr int LOSE_SCORE = 0;
constexpr int TICK_US = 200000; // faster refresh for smoother input

struct Node {
    string data;
    Node* next;
};
typedef Node* NodePtr;

// --- Terminal raw mode ---
class TermiosGuard {
    struct termios oldt;
public:
    TermiosGuard() {
        tcgetattr(STDIN_FILENO, &oldt);
        struct termios raw = oldt;
        raw.c_lflag &= ~(ECHO | ICANON);
        raw.c_cc[VMIN] = 0;
        raw.c_cc[VTIME] = 0;
        tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
    }
    ~TermiosGuard() {
        tcsetattr(STDIN_FILENO, TCSAFLUSH, &oldt);
    }
};

bool kbhit() {
    fd_set fds;
    FD_ZERO(&fds);
    FD_SET(STDIN_FILENO, &fds);
    timeval tv = {0, 0};
    return select(STDIN_FILENO + 1, &fds, NULL, NULL, &tv) > 0;
}

// Read a single key (handles arrow sequences reliably)
string readKey() {
    string result;
    if (!kbhit()) return result;
    char c;
    if (read(STDIN_FILENO, &c, 1) <= 0) return result;
    result.push_back(c);

    if (c == 27) { // ESC detected
        // small wait to grab the rest of the sequence
        usleep(2000);
        while (kbhit()) {
            if (read(STDIN_FILENO, &c, 1) > 0) result.push_back(c);
            else break;
        }
    }
    return result;
}

// --- Linked list functions ---
string makeLine() { return string(WIDTH, ' '); }

void pushTop(NodePtr &head, const string &line) {
    NodePtr n = new Node{line, head};
    head = n;
}

string popBottom(NodePtr &head) {
    if (!head) return "";
    if (!head->next) {
        string data = head->data;
        delete head;
        head = NULL;
        return data;
    }
    NodePtr cur = head;
    while (cur->next->next) cur = cur->next;
    string data = cur->next->data;
    delete cur->next;
    cur->next = NULL;
    return data;
}

NodePtr initSky() {
    NodePtr head = NULL;
    for (int i = 0; i < HEIGHT; i++) pushTop(head, makeLine());
    return head;
}

void cleanup(NodePtr &head) {
    while (head) {
        NodePtr tmp = head;
        head = head->next;
        delete tmp;
    }
}

// --- Game logic ---
string genLine() {
    string s = makeLine();
    int p1 = rand() % WIDTH;
    int p2;
    do { p2 = rand() % WIDTH; } while (p2 == p1);
    s[p1] = (rand() % 2 ? '$' : '.');
    s[p2] = (rand() % 2 ? '$' : '.');
    return s;
}

int checkCollision(const string &line, int basket) {
    if (basket < 0 || basket >= (int)line.size()) return 0;
    if (line[basket] == '$') return 10;
    if (line[basket] == '.') return -15;
    return 0;
}

void render(NodePtr head, int basket, int score) {
    cout << "\033[2J\033[H"; // clear screen
    cout << "------ Falling Money ------\n";
    string lines[HEIGHT];
    int i = 0;
    for (NodePtr cur = head; cur; cur = cur->next) lines[i++] = cur->data;
    for (int j = 0; j < HEIGHT; j++) {
        if (j == HEIGHT - 1 && basket >= 0 && basket < WIDTH)
            lines[j][basket] = 'U';
        cout << "|" << lines[j] << "|\n";
    }
    cout << "Score: " << score << "\n";
    cout << "Controls: ← = left, → = right, q = quit\n";
}

// --- Main ---
int main() {
    srand(time(NULL));
    TermiosGuard tg;

    NodePtr sky = initSky();
    int basket = WIDTH / 2;
    int score = INITIAL_SCORE;

    render(sky, basket, score);

    while (true) {
        // --- input handling ---
        string key = readKey();
        if (key == "\033[D") { // left arrow
            if (basket > 0) basket--;
        } else if (key == "\033[C") { // right arrow
            if (basket < WIDTH - 1) basket++;
        } else if (key == "q") {
            break;
        }

        // --- update sky ---
        pushTop(sky, genLine());
        NodePtr cur = sky;
        while (cur->next) cur = cur->next;
        score += checkCollision(cur->data, basket);
        popBottom(sky);

        // --- render ---
        render(sky, basket, score);

        // --- check win/lose ---
        if (score >= WIN_SCORE) {
            cout << "\nYou Win!! Final Score: " << score << "\n";
            break;
        }
        if (score <= LOSE_SCORE) {
            cout << "\nYou Lose... Final Score: " << score << "\n";
            break;
        }

        usleep(TICK_US);
    }

    cleanup(sky);
    return 0;
}