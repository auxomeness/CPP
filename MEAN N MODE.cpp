#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    double mean;
    int n;
    cin >> n;

    int arr[n];
    double sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    int mode = arr[0];
    int count = 1;

    for(int i = 0; i < n; i++) {
        int frequency = 1;
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                frequency++;
            }
        }
        if(frequency > count) {
            count = frequency;
            mode = arr[i];
        }
    }

    mean = sum / n;

    if(mean == (int)mean) {
        cout << fixed << setprecision(0) << mean << " ";
    } else {
        cout << fixed << setprecision(2) << mean << " ";
    }

    if(count == 1) {
        cout << "undetermined" << endl;
    } else {
        cout << mode << endl;
    }

    return 0;
}