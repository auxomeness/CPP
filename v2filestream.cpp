#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main()
{

    int stud_id, age, grade;
    string name;
    int choice;

    while(true)
    {

        cout << "\nStudent Records Management\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();   
        
        switch(choice)
        {
            case 1: 
            {
                ofstream outf("stud.txt", ios::app);
                if(!outf)
                    {
                        cerr << "Error opening the file!";
                        return 1;
                    }
                cout << "Input ID: ";
                cin >> stud_id;
                cin.ignore();
                cout << "Input Name: ";
                getline(cin, name);
                cout << "Input Age: ";
                cin >> age;
                cout << "Input Grade: ";
                cin >> grade;

                outf << stud_id << " " << name << " " << age << " " << grade << endl;
                outf.close();

                cout << "Student Record Added Successfully!\n";
                break;
            }

            case 2: 
            {
                ifstream inf("stud.txt");
                if(!inf){
                    cerr << "Error opening the file!";
                    return 1;
                }

                string line;
                while(getline(inf))
                /*ifstream inf("stud.txt", ios::app);
                if(!inf)
                    {
                        cerr << "Error opening the file!";
                        return 1;
                    }

                cout << "Student Records\n";
                
                int stud_id, age, grade;
                string name;

                while(!inf.eof())
                {
                    if(inf >> stud_id >> age >>  grade >> name)
                    { 
                        cout << stud_id << " " << name << " " << age << " " << grade << endl;
                    }
                    else
                    {
                        inf.clear();
                        inf.ignore(1);
                    }
                    inf.close();
                    break;
                }
                break;
                */
            }

        }

    }
    return 0;
}