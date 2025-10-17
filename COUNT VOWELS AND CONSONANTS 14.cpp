#include<iostream>
#include<string>
using namespace std;
int main() {

    string word;
    cin >> word;

    for(char c: word) {
        if(c < 'a' || c > 'z') {
            cout << "The show is cancelled!\n";
            return 0;
        }
    }
    
    string vowels = {'a', 'e', 'i', 'o', 'u'};
    string consonants = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};

    int Countvowels = 0;
    int Countconsonants = 0;

    for(int i=0; i<word.length(); i++) {
        char c = tolower(word[i]);
        if(vowels.find(c) != string::npos) {
            Countvowels++;
        } else if(consonants.find(c) != string::npos) {
            Countconsonants++;
        }
    }

    cout << Countvowels << " " << Countconsonants << endl;


    return 0;
}