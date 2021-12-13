// Switch case
#include <iostream>

using namespace std;

int main() {
    cout << "Switch case example" << endl;

    int i, a, b;

    cout << "Menu" << endl;
    cout << "1. Additoon" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Please enter a number to select" << endl;
    cin >> i;

    cout << "Please enter the first number" << endl;
    cin >> a;
    cout << "Please enter the second number" << endl;
    cin >> b;
    cout << "Result: ";

    switch (i) {
        case 1:
            cout << a << " + " << b << " is " << a + b;
            break;
        case 2:
            cout << a << " - " << b << " is " << a - b;
            break;
        case 3:
            cout << a << " * " << b << " is " << a * b;
            break;
        case 4:
            cout << a << " / " << b << " is " << a / b;
            break;
    }

    cout << endl;

    return 0;
}