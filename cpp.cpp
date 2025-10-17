#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;

struct Node {
    string data;
    Node* next;
};
typedef Node* NodePtr;

// Function to create a blank line of sky
string createBlankLine() {
    return string(40, ' ');
}

// Function to create a line with 2 random items ($ or .)
string createRandomLine() {
    string line(40, ' ');
    for (int i = 0; i < 2; i++) {
        int pos = rand() % 40;
        char item = (rand() % 2 == 0) ? '$' : '.';
        line[pos] = item;
    }
    return line;
}

// Insert new line at the top of linked list
void insertTop(NodePtr &head, string newLine) {
    NodePtr newNode = new Node;
    newNode->data = newLine;
    newNode->next = head;
    head = newNode;
}

// Remove bottom line of linked list
void removeBottom(NodePtr &head) {
    if (head == nullptr) return;
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    NodePtr temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

// Count number of lines in linked list
int countLines(NodePtr head) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
}

// Display the whole game screen
void display(NodePtr head, int basketPos, int score) {
    system("cls"); // clear console

    cout << "------------- Falling Money --------------" << endl;

    // Print 20 lines of sky
    int total = 20;
    int skip = countLines(head) - total;
    NodePtr temp = head;
    while (skip > 0) {
        temp = temp->next;
        skip--;
    }
    while (temp != nullptr) {
        cout << "|" << temp->data << "|" << endl;
        temp = temp->next;
    }

    // Print basket line
    string basketLine(40, ' ');
    basketLine[basketPos] = 'U';
    cout << "|" << basketLine << "|" << endl;

    // Print score
    cout << "Your Score: " << score << endl;
}

int main() {
    srand(time(0));

    NodePtr sky = nullptr;
    // Initialize sky with 20 blank lines
    for (int i = 0; i < 20; i++) {
        insertTop(sky, createBlankLine());
    }

    int basketPos = 20; // start in middle
    int score = 50;
    char input;

    while (true) {
        // Insert new random line at top
        insertTop(sky, createRandomLine());
        // Remove bottom line
        removeBottom(sky);

        // Check input
        if (kbhit()) {
            input = getch();
            const char CPPKEYLEFT = 75;
            const char CPPKEYRIGHT = 77;
            if (input == CPPKEYLEFT && basketPos > 0) {
                basketPos--;
            } else if (input == CPPKEYRIGHT && basketPos < 39) {
                basketPos++;
            }
        }

        // Check collision (items on bottom line + basket position)
        NodePtr temp = sky;
        while (temp->next != nullptr) temp = temp->next; // last line
        if (temp->data[basketPos] == '$') {
            score += 10;
        } else if (temp->data[basketPos] == '.') {
            score -= 15;
        }

        // Display game
        display(sky, basketPos, score);

        // Check win/lose condition
        if (score >= 100) {
            cout << "Yeah, you win!!" << endl;
            break;
        } else if (score <= 0) {
            cout << "Sorry, you lose..." << endl;
            break;
        }

        Sleep(300); // control game speed
    }

    // Clean up memory (delete all nodes)
    while (sky != nullptr) {
        removeBottom(sky);
    }

    return 0;
}