#include<iostream>
#include<string>
using namespace std;

int main() {

    string word;
    cin >> word;

    string vowels = "aeiou";

    char FChar = tolower(word[0]);
    char LChar = tolower(word[word.length() - 1]);

    for (char c : word) {
        c = tolower(c);
        if (c < 'a' || c > 'z') {
            cout << "not possible\n";
            return 0;
        }
    }


        if(vowels.find(FChar) != string::npos && vowels.find(LChar) != string::npos) {
            cout << word << " is a vowel word\n";
        } else if(vowels.find(FChar) == string::npos && vowels.find(LChar) == string::npos) {
            cout << word << " is NOT a vowel word\n";
        }

    return 0;
}