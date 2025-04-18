/*
Files

Demonstrate the use of file handling in C++.
Create a file named "example.txt" and write some text to it.
Read the contents of the file and display them on the console.
Use appropriate file modes (e.g., ios::in, ios::out) to perform file operations.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create a file named "example.txt" and write some text to it
    ofstream file("example.txt");
    file << "Hello, this is a sample text file." << endl;
    file.close();

    // Read the contents of the file and display them on the console
    ifstream inputFile("example.txt");
    string line;
    while (getline(inputFile, line))
    {
        cout << line << endl;
    }
    inputFile.close();

    return 0;
}
