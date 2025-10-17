#include<iostream>
using namespace std;
int main() {

    int N;
    
    cin >> N;

    if(N < 0 || N > 51) {
        return 1;
    }

    int arr[N];

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    for (int i=0; i<N; i++){
        bool dupli = false;
        
        for (int j=0; j<i; j++){
            if(arr[i] == arr[j]){
                dupli = true;
                break;
            }
        }

        if(dupli == true){
            continue;
        }
            cout << arr[i] << " ";
    }
    return 0;
}