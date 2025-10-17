#include<iostream>
#include<string>
using namespace std;

int main() {
    string word;
    cin >> word;

    bool Fa = false;
    bool Fe = false;
    bool Fi = false;
    bool Fo = false;
    bool Fu = false;

    bool foreign = false;

    for(char c : word) {
        c = tolower(c);
        if(c == 'a') Fa = true;
        if(c == 'e') Fe = true;
        if(c == 'i') Fi = true;
        if(c == 'o') Fo = true;
        if(c == 'u') Fu = true;{
        }
    }

    for (char c : word) {
        if (c < 'a' || c > 'z') {
            foreign = true;
            break;
        } 
    }

    if(foreign == true) {
        cout << "not possible\n";
        return 0;
    } else {
        if(Fa && Fe && Fi && Fo && Fu) {
            cout << word << " contains all vowels\n";
        } else {
            cout << word << " does NOT contain all vowels\n";
        }
    }

    return 0;
}