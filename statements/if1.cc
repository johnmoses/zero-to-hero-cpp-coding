// If else if
#include <iostream>

using namespace std;


int main() {
    cout << "If else if" << endl;

    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "You entered a number : ";

    if (i > 100)
        cout << "greater than 100";
    else if (i < 100)
        cout << "less than 100";
    else 
        cout << "equals to 100";

    cout << endl;

    return 0;
}