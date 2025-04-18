/*
Arrays in C++
*/
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "The array is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The address of the array is: " << arr << endl;
    cout << "The address of the first element of the array is: " << &arr[0] << endl;
    cout << "The address of the second element of the array is: " << &arr[1] << endl;
    cout << "The address of the third element of the array is: " << &arr[2] << endl;
    cout << "The address of the fourth element of the array is: " << &arr[3] << endl;
    cout << "The address of the fifth element of the array is: " << &arr[4] << endl;
    cout << "The value of the first element of the array is: " << *arr << endl;
    cout << "The value of the second element of the array is: " << *(arr + 1) << endl;
    cout << "The value of the third element of the array is: " << *(arr + 2) << endl;
    cout << "The value of the fourth element of the array is: " << *(arr + 3) << endl;
    cout << "The value of the fifth element of the array is: " << *(arr + 4) << endl;
    return 0;
}