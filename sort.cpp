#include<iostream>
using namespace std;
int main(){

    int arraySize;
    int arrayValues;
    int arrayOne[arraySize];

    cout << "Input Array Size: ";
    cin >> arraySize;

    for(int index = 0; index > arraySize; index++){
        cin >> arrayOne[index];
    }


    return 0;
}