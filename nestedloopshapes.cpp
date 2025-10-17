#include<iostream>
using namespace std;

int main() {

    while(true)
    {
    cout << "Choose a shape: " << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Flipped Triangle" << endl;
    cout << "3. Pyramid" << endl;
    cout << "4. Inverted Pyramid" << endl;
    cout << "5. Diamond" << endl;
    char a;
    cin >> a;

    int n;
    string z;

    cout << "Enter the size: ";
    cin >> n;


    switch (a) { 
        case '1': //triangle
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= i; j++) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case '2': //flipped triangle
            for(int i = n; i >= 1; i--) {
                for(int j = i; j >= 1; j--) {
                    cout << "* ";
                }
                cout << endl;
            }
            break;

        case '3': // pyramid
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= 2*n-1; j++) {
                    if(j >= n-(i-1) && j <= n+(i-1)) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;

        case '4': //inverted pyramid
            for(int i = n; i >= 1; i--) {
                for(int j = 1; j <= 2*n-1; j++) {
                    if(j >= n-(i-1) && j <= n+(i-1)) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;

        case '5': //diamond
            for(int i = 1; i <= n; i++) {
                for(int j = 1; j <= 2*n-1; j++) {
                    if(j >= n-(i-1) && j <= n+(i-1)) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }

            for(int i = n-1; i >= 1; i--) {
                for(int j = 1; j <= 2*n-1; j++) {
                    if(j >= n-(i-1) && j <= n+(i-1)) {
                        cout << "* ";
                    } else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            break;

        default:
            cout << "Invalid choice!" << endl;
    }
        cout << "Do you want to try again? (y/n)";
            cin >> z;
     
            if (z != "y")
            {
                cout << "Thank you for using shapes!" << endl;
                break;
            }
     
        }

    return 0;
}
