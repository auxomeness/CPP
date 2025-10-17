#include<iostream>
using namespace std;

double factorial(double num);

int main() {
    
    cout << factorial(20);

    return 0;
}

int factorial(double num){
  
if(num > 1){
    return num * factorial(num-1);
}else{
    return 1;
}

}