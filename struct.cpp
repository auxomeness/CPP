#include<iostream>
using namespace std;

struct logEntry{
    int id;
    string name;
    char gender;
    int contactNum;
};

void inputData(logEntry& person) {
    cout << "ID: ";
    cin >> person.id;
    cin.ignore();
    cout << "Name: ";
    getline(cin, person.name);
    cout << "Gender: ";
    cin >> person.gender;
    cout << "Contact Number: ";
    cin >> person.contactNum;
}

void printRecords(log& person){
    cout << person.id << " "
         << person.name << " "
         << person.gender << " "
         << person.contactNum << endl;
}

int main(){
    logEntry person[2];

    for(int i = 0; i < 2; i++){
        inputData(person[i]);
    }

    for(int i = 0; i < 2; i++){
        printRecords(person[i]); 
    }

    return 0;
}