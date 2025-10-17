#include<iostream>
#include<string>
using namespace std;
int main() {
    string word;
    cin >> word;

    bool found = false;
    string result = word;

    for(int i = 1; i < word.length() - 1; i++) {
        if(word[i-1] == word[i+1]) {
            result[i] = '~';
            found = true;
        }
    }

    if(found == true) {
        cout << result << endl;
    } else {
        cout << "No silent letters!" << endl;
    }

    return 0;
}