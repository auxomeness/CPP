#include <iostream>
#include <string>
using namespace std;

int main() {
    double temperature, result;
    int choice;
    string r;

    while (true) {
        cout << "Enter your temperature: ";
        cin >> temperature;

        cout << "Please choose between the two options:" << endl;
        cout << "1. Convert to Celsius" << endl;
        cout << "2. Convert to Fahrenheit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                result = (5.0 / 9.0) * (temperature - 32);
                cout << "Temperature in Celsius: " << result << "°C" << endl;
                break;
            case 2:
                result = (9.0 / 5.0) * temperature + 32;
                cout << "Temperature in Fahrenheit: " << result << "°F" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }

        cout << "Do you want to try again? (y/n): ";
        cin >> r;
        
        if (r != "y") {
            cout << "Thank you for using the temperature converter!" << endl;
            break;  
        }
    }

    return 0;
}
