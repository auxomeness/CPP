#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){

    while (true){

        ofstream outf("students.txt", ios::app);

        if(!outf){
            cerr << "Error opening the file";
            return 1;
        }

        cout << "Student Records Management\n";
        cout << "1. Add Student\n";
        cout << "2. View Student\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";

        int choice;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 4){
            break; 
        }

        switch (choice){
            case 1: {
                int stud_id, age, grade;
                string name;

                cout << "Enter Student ID: ";
                cin >> stud_id;
                cin.ignore();  
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Grade: ";
                cin >> grade;

                cout << "Student Record Added Successfully!\n";
                cout << endl;
                break;
            }
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
