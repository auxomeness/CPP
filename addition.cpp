#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the limit of an Array: ";
    cin >> n;
    int* arr = new int[n];
    int sum = 0;
    float average;

    cout << "Enter the numbers: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++) {
        sum += arr[i];
    }

    average = static_cast<float>(sum) / n;

    cout << "The sum of the array of numbers is: " << sum << endl;
    cout << "The average of the array of numbers is: " << average << endl;

    delete[] arr;
    return 0;
}