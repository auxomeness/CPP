#include<iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    if (n > m) {
        cout << "That's just lazy math!\n";
        return 1;
    }

    for(int i = n; i <= m; i++) {
        if (i % n == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}