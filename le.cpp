/*
1.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    
    cin >> n;
    
    if(2 >= n || n >= 100)
    {
        return 1;
    }
    
    int num[n];
    
    for(int i = 0; i < n; i++){
        
        cin >> num[i];
        
    }
    
    for(int i = n-1; i >= 0; i--){
        
        if(-1000 >= num[i] || num[i] >= 1000){
            
            return 1;
            
        }else if(num[i]%2 == 0){
            cout << num[i] << " ";
        }
    }
    
    return 0;
}

*/

/*
2. draft

#include<iostream>
using namespace std;

int main(){
    
    int n;
    
    cin >> n;
    
    int num[n];
    
    for(int i = 0; i < n; i++){
        
        cin >> num[i];
        
    }
    
    for(int i = n-1; i >= 0; i--){
   
        if(num[i] == num[i]){
            continue;
        }else{
            cout << num[i];
        }
    }
    return 0;
}

*/

/*
3.

#include <iostream>
#include <cctype> 
#include <string>
using namespace std;

int main()
{
    string character;
    getline(cin, character);

    character[0] = ::toupper(character[0]);

    cout << character << endl;

    return 0;
}



*/

/*

test 1

#include<iostream>
using namespace std;

int main(){


    int n;

    while(true){
        
        cin >> n;

        if(n == 1001){
            break;
        }else{
            if(n == 0){
                cout << "non zero";
            }else if(n < 0 && n != -1001){
                cout << "positive";
            }else if(n > 0 && n != 1001){
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

/*
test 2

#include<iostream>
using namespace std;

int main(){


    int n, counter = 0;
    int product = 1;
    int sum = 0;
    int num;

    cin >> n;

    while(counter < n){
        
        cin >> num;

        if (num%2 != 0)
        {
            sum += num;
        }else{
            product *= num;
        }
        counter++;
    }

    cout << "the sum of odd numbers is: " << sum << endl;
    cout << "the product of even numbers is: " << product << endl;

    return 0;
}

*/

/*
test 3

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    for(int i=1; i <= n; i++){
        for(int j=1; j<=n; j++){
            if(i == 1 || i == n || j == 1 || j == n){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

*/

/*
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];
    char b[n];

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    for(int i=0; i<n; i++){
        for(int j = 0; j < a[i]; j++)
        cout << b[i] << " ";
        cout << endl;
    }

    return 0;
}

*/