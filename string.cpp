#include<iostream>
#include<string>
using namespace std;

int main(){

    char s[] = "Geeks for Geeks";
    cout << s << endl;

    string str = "Geeks for Geeks";
    cout << str << endl;

    string a = ("Geeks for Geeks");
    cout << a << endl;

    string b; b = "Geeks for Geeks";
    cout << b << endl;

    string c(7, 'c');
    cout << c;

    return 0;
}