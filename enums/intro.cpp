/*
Enums

An enum is a user-defined data type that consists of named constants. 
Enums are used to define a set of named integer constants, making the code more readable and maintainable.
*/
#include <iostream>
using namespace std;

enum day {monday=1, tuesday, wednesday, thursday, friday, saturday, sunday};

int main()
{
    day d;
    d = tuesday;
    cout << d << endl;
    return 0;
}