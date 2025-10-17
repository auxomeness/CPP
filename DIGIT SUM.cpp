#include<iostream>
using namespace std;
int main() {

    string num;
    cin >> num;

    bool pass = true;
    for(char n: num){
        if(n < '0' || n > '9') {
            pass = false;
            break;
        }
    }

    int sum=0;

    if(pass == true) {
        for(int i=0; i < num.length(); i++){
            sum += num[i]-'0';
        } cout << sum;
    } else {
        cout << "Stay Positive!\n";
        return 1;
    }
    return 0;
}