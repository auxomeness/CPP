#include<iostream>
using namespace std;
int main() {
    
    int n;
    cin >> n;
    
    if (n < 2 || n > 9) {
        cout << "Not Possible" << endl;
        return 0;
    }
    
    int arr[10];
    bool counter[10] = {false};
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++){
        if(!counter[i]) {
            int frequency = 1;
            for(int j= i+1; j < n; j++){
                if(arr[i] == arr[j]){
                    frequency++;
                counter[j] = true;
                }
            }
            cout << arr[i] << ": " << frequency << endl;
        }
    }
    
    return 0;
}