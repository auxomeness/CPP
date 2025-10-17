#include<iostream>
using namespace std;

struct logEntry{
    string id;
    string name;
    char gender;
    string contactNum;
    char category; 
};

void inputData(logEntry& person) {
    cout << "ID\n";
    cout << " C: Student\n";
    cout << " F: Faculty\n";
    cout << " S: Staff\n";
    cin >> person.id;
    cin.ignore();
    cout << "Name: ";
    getline(cin, person.name);
    cout << "Gender: ";
    cin >> person.gender;
    cin.ignore();
    cout << "Contact Number: ";
    cin >> person.contactNum;
    cin.ignore();

    if (person.id[0] == 'C') {
        person.category = 'C';
    } else if (person.id[0] == 'F') {
        person.category = 'F';
    } else if (person.id[0] == 'S') {
        person.category = 'S';
    } else {
        person.category = 'U'; 
    }
}

void printRecords(logEntry& person){
    cout << person.id << " "
         << person.name << " "
         << person.gender << " "
         << person.contactNum << endl;
}

int main(){
    logEntry person[100]; 
    int count = 0;

    while(true) {
        cout << " " << endl;
        cout << "----- MENU -----\n";
        cout << "1. Log\n";
        cout << "2. Display Information\n";
        cout << "3. Exit\n";

        int choice;
        cin >> choice;

        if(choice == 3) {
            break;
        }

        switch(choice) {
            case 1: 
                if(count < 100) {
                    inputData(person[count]);
                    count++;
                }
                break;

            case 2:
                cout << "\nDisplay which Category?\n";
                cout << "1. Students\n";
                cout << "2. Faculty\n";
                cout << "3. Staff\n";
                cout << "4. All\n";

                int display;
                cin >> display;

                cout << endl;
                for(int i = 0; i < count; i++){
                    char type = person[i].category;

                    if(display == 1 && type == 'C') {
                        printRecords(person[i]);
                    } else if(display == 2 && type == 'F') {
                        printRecords(person[i]);
                    } else if(display == 3 && type == 'S') {
                        printRecords(person[i]);
                    } else if(display == 4) {
                        printRecords(person[i]);
                    }
                }
                break;
        }
    }

    return 0;
}