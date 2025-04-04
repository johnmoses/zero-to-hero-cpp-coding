#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Control flow" << endl;

    string line;

    while (cin >> line)
        cout << line << endl;

    return 0;
}