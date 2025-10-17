#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
    int stud_id, age, grade;
    string name;

    while (true) {

        cout << "Student Records Management\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";

        int choice;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();   

        if (choice == 4) {
            break;
        }

        switch (choice) {
            case 1: {
                ofstream outf("students.txt", ios::app);
                if (!outf) {
                    cerr << "Error opening the file\n";
                    return 1;
                }

                cout << "Enter Student ID: ";
                cin >> stud_id;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, name);
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Grade: ";
                cin >> grade;

                outf << stud_id << " " << name << " " << age << " " << grade << endl;
                outf.close();

                cout << "Student Record Added Successfully!\n\n";
                break;
            }

            case 2: {
                ifstream inf("students.txt", ios::app);
                if (!inf) {
                    cerr << "Error opening the file\n";
                    return 1;
                }

                cout << "\nStudent Records:\n";
               
                int stud_id, grade, age;
                string name;

                while (inf.eof()) {  
                    if(inf >> stud_id){
                        cout << "ID: " << stud_id << ", Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
                    }else{
                        inf.clear();
                        inf.ignore(1);
                    }
                }

                inf.close();
                cout << endl;
                break;
            }

            case 3: {
                ifstream inf("students.txt");
                if (!inf) {
                    cerr << "Error opening the file\n";
                    return 1;
                }

                int search_id;
                cout << "Enter Student ID to search: ";
                cin >> search_id;
                cin.ignore();

                bool found = false;

                while (inf >> stud_id) {
                    inf.ignore();
                    getline(inf, name);  
                    inf >> age >> grade;
                    inf.ignore();

                    if (stud_id == search_id) {
                        cout << "\nStudent Found:\n";
                        cout << "ID: " << stud_id << ", Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Student ID not found.\n";
                }

                inf.close();
                cout << endl;
                break;
            }

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}