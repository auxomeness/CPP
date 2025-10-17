#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n; 
    cin >> n;

    if(n < 1 || n > 100) {
        cout << "Not Possbile";
        return 0;
    }

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int checker = INT_MIN;
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if(sum > checker) {
                checker = sum;
                max1 = arr[i];
                max2 = arr[j];
            }
        }
    }

    cout << max1 << " " << max2 << endl;

    return 0;
}
