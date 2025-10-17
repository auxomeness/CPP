#include<iostream>
using namespace std;
int main() {


    char c;

    cout << "Select your meal type:\n";
    cout << "1. Priority \n";
    cout << "2. Regular \n";

    cin >> c;

   switch(c) {
    case '1':
        cout << "You selected Priority.\n";
        break;
    case '2':
        cout << "You selected Regular.\n";
        break;
    default:
        cout << "Invalid selection.\n";
   }

   if(c == '1') {

    string food1 = "Pork Chop";
    string food2 = "Rice";
    string food3 = "Pork Chop and Rice";

    cout << "1. Pork Chop\n";
    cout << "2. Rice\n";
    cout << "3. Pork Chop and Rice\n";

    string choice;
    cin >> choice;
    
    if(choice == "1") {
        cout << "You selected: " << food1 << endl;
        cout << "The user has added food on the plate.\n";
        cout << "Proceed now to Cashier.\n";
    } else if(choice == "2") {
        cout << "You selected: " << food2 << endl;
        cout << "The user has added food on the plate.\n";
        cout << "Proceed now to Cashier.\n";
    } else if(choice == "2") {
        cout << "You selected: " << food2 << endl;
        cout << "The user has added food on the plate.\n";
        cout << "Proceed now to Cashier.\n";
    } else if(choice == "3") {
        cout << "You selected: " << food3 << endl;
        cout << "The user has added food on the plate.\n";
        cout << "Proceed now to Cashier.\n";
    } else {
        cout << "Invalid selection.\n";
    }

   }else if(c == '2') {
        string food1 = "Chicken";
        string food2 = "Rice";
        string food3 = "Chicken and Rice";

        cout << "1. Chicken\n";
        cout << "2. Rice\n";
        cout << "3. Chicken and Rice\n";

        string choice;
        cin >> choice;

        if(choice == "1") {
            cout << "You selected: " << food1 << endl;
            cout << "The user has added food on the plate.\n";
        } else if(choice == "2") {
            cout << "You selected: " << food2 << endl;
            cout << "The user has added food on the plate.\n";
        } else if(choice == "3") {
            cout << "You selected: " << food3 << endl;
            cout << "The user has added food on the pla te.\n";
        } else {
            cout << "Invalid selection.\n";
        }
   }else {
         cout << "Invalid selection.\n";
   }


   cout << "Thank you for your order, the user has paid!\n";
   cout << "You may now sit at the table.\n";
   cout << "Enjoy your meal!\n";

    return 0;
}