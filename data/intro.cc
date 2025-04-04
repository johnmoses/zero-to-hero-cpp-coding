/* 
* Vectors
*/

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    // Declare and initialize
    vector<int> vec = {1, 5, 6, 7, 10, 12};

    // Traverse elements
    for (auto &v : vec)
        cout << ((v & 0x1) ? v*2 : v) << " ";
    cout << endl;

    cout << "Vectors" << endl;
    return 0;
}