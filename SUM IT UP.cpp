#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    if(cin.fail()) {
        cout << "not possible\n";
        return 1;
    }

    int sumOdd=0;
    int sumEven=0;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    if(arr[i]%2==0){
            sumEven+=arr[i];
        }
        else{
            sumOdd+=arr[i];
        }
    }

    cout << sumOdd << " " << sumEven << endl;
    return 0;
}