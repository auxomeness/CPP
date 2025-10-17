#include<iostream> 
#include<algorithm>
using namespace std;

int main(){


    int F,S; 

    cin >> F;

    if(F <= 0){
        cout << "Unable to Process";
        return 1;
    }
    cin >> S;
    int n;
    for(int i=0; i <= F; i++){
        
        cin >> n;

        if(n%S == 0){
            continue;
        }else{
            cout << n << " ";
        }
    }


return 0;
}