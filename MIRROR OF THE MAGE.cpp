#include<iostream>
#include<string>
using namespace std;
int main() {
    
    string word;
    getline(cin, word);

    for(int i = word.length() - 1; i >= 0; i--) {
        cout << word[i];
    }
    cout << endl;

    return 0;
}