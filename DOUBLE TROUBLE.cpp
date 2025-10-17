#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N < 2 || N > 9) {
        cout << "Not Possible" << endl;
        return 0;
    }

    int arr[10];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    bool trouble = false;
    for (int i = 0; i < N; i++) {
        if (i > 0 && arr[i] == arr[i-1]) {
            cout << "X";
            trouble = true;
        } else {
            cout << arr[i];
        }
        if (i != N-1) cout << " ";
    }

    if (!trouble) {
        return 0;
    }

    return 0;
}