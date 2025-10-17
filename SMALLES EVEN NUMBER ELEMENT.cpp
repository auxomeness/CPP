#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n];
    int smallestEven = 0;

    //bool isEven = false;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) {
            if(smallestEven == 0 || arr[i] < smallestEven) {
                smallestEven = arr[i];
                //isEven = true;
            }
        }
    }

    if(smallestEven == 0) { //isEven == false 
        cout << "No even number" << endl;
    } else {
        cout << smallestEven << endl;
    }
    return 0;
}