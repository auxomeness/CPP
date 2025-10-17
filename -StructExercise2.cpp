#include<iostream>
#include<iomanip>
using namespace std;

struct logEntry{
    string id;
    string name;
    int age;
    string course;
    float grades[3];
    float average;
    string search_ID;
};

void inputData(logEntry person[], int count){

    string personalID;
    bool isUnique = false;

    while (isUnique == false){
        cout << "ID: ";
        cin >> personalID;
        isUnique = true; 

        for (int i = 0; i < count; i++){
            if (person[i].id == personalID) {
                cout << "ID Number is taken, please input your ID Number." << endl;
                isUnique = false;
                break;
            }
        }
    }


    person[count].id = personalID;
    cin.ignore();

    cout << "Name: ";
    getline(cin, person[count].name);

    cout << "Age: ";
    cin >> person[count].age;
    cin.ignore();

    cout << "Course: ";
    getline(cin, person[count].course);

    cout << "Enter 3 Grades: ";
    float sum = 0;
    for (int i = 0; i < 3; i++){
        cin >> person[count].grades[i];

        while (person[count].grades[i] < 0 || person[count].grades[i] > 100) {
            cout << "Grade must be between 0 and 100. Re-enter grade: ";
            cin >> person[count].grades[i];
        }
        sum += person[count].grades[i];
    }
    person[count].average = sum / 3;
}

void printRecords(logEntry& person){
    cout << "ID: " <<person.id << " \n"
         << "Name: "<< person.name << " \n"
         << "Age: " << person.age << " \n"
         << "Course: " <<person.course << " \n";
        cout << "Grades: " << person.grades[0] << " "
                           << person.grades[1] << " "
                           << person.grades[2] << endl;
    cout << "Average: " << person.average << endl;
}

void searchByID(logEntry person[], int count){
    string searchID;
    cout << "Enter ID to search: ";
    cin >> searchID;

    bool search = false;
    for (int i = 0; i < count; i++){
        if (person[i].id == searchID){
            printRecords(person[i]);
            search = true;
            break;
        }
    }

    if (!search){
        cout << "Student with ID " << searchID << " not found." << endl;
    }
}

int main(){
    logEntry person[100];
    int count = 0;

    while (true){
        cout << "\n----- MENU -----\n";
        cout << "1. Add Student Records\n";
        cout << "2. Display All Records\n";
        cout << "3. Display Passing Students\n";
        cout << "4. Sort Records by Average\n";
        cout << "5. Search Student [ID]\n";
        cout << "6. Exit\n";

        int choice;
        cin >> choice;

        if(choice == 6){
            break;
        }

        switch (choice) {
            case 1:
                if (count < 100){
                    inputData(person, count);
                    count++;
                } else {
                    cout << "Maximum student limit reached!" << endl;
                }
                break;

            case 2:
            cout << "\nAll Student Records:\n";

            cout << left << setw(15) << "ID"
                << setw(20) << "NAME"
                << setw(20)  << "AGE"
                << setw(30) << "COURSE"
                << setw(20) << "GRADES"
                << setw(20) << "AVERAGE" << endl;

            cout << "------------------------------------------------------------------------------------------------------------------" << endl;

            for (int i = 0; i < count; i++) {
                cout << left << setw(15) << person[i].id
                     << setw(20) << person[i].name
                     << setw(20)  << person[i].age
                     << setw(30) << person[i].course
                     << setw(5)  << person[i].grades[0] << " "
                     << setw(5)  << person[i].grades[1] << " "
                     << setw(5)  << person[i].grades[2]
                     << "   " << setw(20) << person[i].average
                     << endl;
            }
            break;

            case 3:
                cout << "\nPassing Students:\n";
                cout << left << setw(15) << "ID"
                    << setw(20) << "NAME"
                    << setw(20)  << "AGE"
                    << setw(30) << "COURSE"
                    << setw(20) << "GRADES"
                    << setw(20) << "AVERAGE" << endl;
                    cout << "------------------------------------------------------------------------------------------------------------------" << endl;           
                for (int i = 0; i < count; i++) {
                    if (person[i].average >= 75) {
                        cout << left << setw(15) << person[i].id
                            << setw(20) << person[i].name
                            << setw(20)  << person[i].age
                            << setw(30) << person[i].course
                            << setw(5)  << person[i].grades[0] << " "
                            << setw(5)  << person[i].grades[1] << " "
                            << setw(5)  << person[i].grades[2]
                            << "   " << setw(20) << person[i].average
                            << endl;
                    }
                }
                break;

            case 4:
            cout << "\nRecords Sorted by Average (Descending):\n";
            
            for (int i = 0; i < count - 1; i++){
                for (int j = i + 1; j < count; j++) {
                    if (person[i].average < person[j].average){
                        logEntry temp = person[i];
                        person[i] = person[j];
                        person[j] = temp;
                    }
                }
            }

            cout << left << setw(15) << "ID"
                 << setw(20) << "NAME"
                 << setw(20)  << "AGE"
                 << setw(30) << "COURSE"
                 << setw(20) << "GRADES"
                 << setw(20) << "AVERAGE" << endl;
                 cout << "------------------------------------------------------------------------------------------------------------------" << endl;
                

            for (int i = 0; i < count; i++) {
                cout << left << setw(15) << person[i].id
                     << setw(20) << person[i].name
                     << setw(20)  << person[i].age
                     << setw(30) << person[i].course
                     << setw(5)  << person[i].grades[0] << " "
                     << setw(5)  << person[i].grades[1] << " "
                     << setw(5)  << person[i].grades[2]
                     << "   " << setw(20) << person[i].average
                     << endl;
            }
            break;
        
            case 5:
                searchByID(person, count);
                break;

            default:
                cout << "Invalid choice. Please select from the menu.\n";
        }
    }

    return 0;
}