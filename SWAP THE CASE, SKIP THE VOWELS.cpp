#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {

    string word;
    getline(cin, word);

    string vowels = "aeiouAEIOU";
    string result = "";

    for(int i = 0; i < word.length(); i++) {
        char c = word[i];

        if(isupper(c)){
            c = tolower(c);
        }
        else if(islower(c)) {
            c = toupper(c);
        }

        if(vowels.find(c) != string::npos) {
            continue;
        }
        result += c;
    }

    cout << result << endl;

    return 0;
}