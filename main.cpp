#include<iostream>
#include<algorithm>
using namespace std;

int main(){


    int n;
    int num;
    int product = 1;
    int sum = 0;
    
    cin >> n;

    for(int count = 0; count < n; count++)
    {

        cin >> num;
        
        if(num%2==0){
            sum += num;
        }else{
            product *= num;
        }
    }

    cout << sum << endl;
    cout << product << endl;
    
    return 0;
}


/*

#include<iostream> 
#include<algorithm>
using namespace std;

int main(){

    int n, counter = 0;
    int num;
    int product = 1;
    int sum = 0;

    cin >> n;

    while(counter < n){

        cin >> num;
        
        if(num%2 == 0){
            sum += num;
        }else{
            product *= num;
        }
            counter++;
    }
        cout << sum << endl;
        cout << product << endl;
return 0;
}

*/

/*...................................................*/

/*

#include<iostream> 
#include<algorithm>
using namespace std;

int main(){

    int n;

    for(int i = 0; n != 1001; i++){
        cin >> n;

        if(n == 0){
            cout << "zero";
        }else{
            if(n > 0 && n != 1001){
                cout << "positive";
            }else if(n < 0 && n != -1001){
                cout << "negative";
            }else if(n == -1001){
                cout << "out of bounds";
            }
        }
        cout << endl;
    }

return 0;
}

*/

/*.....................................................*/


/*

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
            cout << n << " "
        }
    }


return 0;
}

*/