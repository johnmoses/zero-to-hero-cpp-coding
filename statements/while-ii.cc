// Iterate through a range
#include <iostream>

using namespace std;

void looping(int n) {
    int i = 0;

    while(i < n) {
        cout << i << ", ";
        i = i + 1;
    }
    cout << " " << endl;
}

int main() {
    cout << "Iterate through a range of values" << endl;

    looping(10);

    return 0;
}