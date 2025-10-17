#include<iostream>
using namespace std;
int main(){
    
    int n, m;
    cin >> n >> m;
    
    if(n < -1 || m < -1){
        cout << "not possible\n";
        return 0;
    }
    
    string N;
    string M;
    
    int sum = n + m;
    string Sumres;
    
    if(n%2 == 0) {
        N = "Even";
    } else {
        N = "Odd";
    }
    
    if(m%2 == 0) {
        M = "Even";
    } else {
        M = "Odd";
    }
    
    if(sum%2 == 0) {
        Sumres = "Even";
    } else {
        Sumres = "Odd";
    }
    
    cout << N << " " << M << " " << Sumres << endl;
    
    return 0;
}