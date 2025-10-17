    #include <iostream>
    #include<string>
    using namespace std;


    int main()
    {

    double x, y, res;
    char operation;
    string a;
    
    while(true){
    cout << "Enter your first number: ";
    cin >> x;
    cout << "Enter your second number: ";
    cin >> y;

    cout << "Enter Operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
    case '+':
        res  = x + y;
        cout << "Sum is " << res  << endl;
        break;
    
    case '-':
        res = x - y;
        cout << "Difference is " << res << endl;
        break;

    case '*':
        res = x * y;
        cout << "Product is " << res << endl;
        break;

    case '/':
        if (y != 0) {
            res = x / y;
            cout << "Quotient is " << res << endl;
        }else{
            cout << "Undefined\n";
        }
        break;

        default:
            cout << "Invalid Input," << endl;
            break;
    }
    cout << "Do you want to try again? (y/n)";
    cin >> a;
     if (a != "y"){
        cout << "thank you for using calculator!" << endl;
            break;
     }
    }
    return 0;
    }