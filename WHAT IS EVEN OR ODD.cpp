#include<iostream>
using namespace std;

int main() {
    int N, M;
    string n, m, sumT;

    cin >> N >> M;


    if (N % 2 == 0) {
        n = "Even";
    } else {
        n = "Odd";
    }


    if (M % 2 == 0) {
        m = "Even";
    } else {
        m = "Odd";
    }


    int sum = N + M;

    if (sum % 2 == 0) {
        sumT = "Even";
    } else {
        sumT = "Odd";
    }
    cout << n << " " << m << " " << sumT;

    return 0;
}
