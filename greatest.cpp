#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n <= 0 || n >= 101) {
        cout << "not possible\n";
        return 0;
    }

    int arr[n];
    int greatest = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        
        if(arr[i] > greatest) {
            greatest = arr[i];
        }
    }

    cout << greatest;

    return 0;
}