/*
Exceptions

Exceptions are runtime errors that occur when the program is running. 
They are handled by the compiler and the program continues to run.
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw "Division by zero";
        }
        cout << "Result: " << a / b << endl;
    }
    catch (const char *msg)
    {
        cout << "Exception caught: " << msg << endl;
    }
    return 0;
}