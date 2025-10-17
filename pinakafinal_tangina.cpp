#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
    int stud_id, age, grade;
    string name;
    
    string id = to_string(stud_id);
    string age1 = to_string(age);
    string grade1 = to_string(grade);
    
    
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
                
                int stud_id, age, grade;
                string name;
                
                    string id = to_string(stud_id);
                    string age1 = to_string(age);
                    string grade1 = to_string(grade);
                    
                while (inf >> id >> name >> age1 >> grade1) { 
                        cout << "ID: " << id << ", Name: " << name << ", Age: " << age1 << ", Grade: " << grade1 << endl;
                }

                inf.close();
                cout << endl;
                break;
            }

            case 3: {
                ifstream inf("students.txt", ios::app);
                if (!inf) {
                    cerr << "Error opening the file\n";
                    return 1;
                }

                    int stud_id, age, grade;
                    string name;
                    
                    string id = to_string(stud_id);
                    string age1 = to_string(age);
                    string grade1 = to_string(grade);
                    bool found = false;
                    
                    string search_id;
                    cout << "Enter Student ID: ";
                    cin >> search_id;
                    
                while (inf >> id >> name >> age1 >> grade1) { 
                        
                    if (search_id == id) {
                        cout << "\nStudent Found:\n";
                        cout << "ID: " << id << ", Name: " << name << ", Age: " << age1 << ", Grade: " << grade1 << endl;
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