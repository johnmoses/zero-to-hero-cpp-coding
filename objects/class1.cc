// Class with a constructor
#include <iostream>

using namespace std;

class Animal {
    private:
        string m_name;

    public: 
        Animal(string name) : m_name(name) {}

        string getName() {
            return m_name;
        }
};

int main() {
    cout << "Simple class with constructor" << endl;

    Animal dog = Animal("Bingo");
    cout << "Hi, I am " << dog.getName() << endl;

    return 0;
}