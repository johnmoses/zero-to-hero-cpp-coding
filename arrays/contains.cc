// Contains function

#include <iostream>

using namespace std;

bool contains(int data[], int i) {
    for (i = 0; i < 4; i++) {
        if (data[i] == i)
            return true;
    }
    return false;
}

int main () {
    cout << "Contains" << endl;
    int data[4] = {1, 2, 4, 6};
    cout << contains(data, 2) << endl;

    return 0;
}