#include <iostream>

using namespace std;

class Animal {
    private:
        string m_name;

    public: 
        void giveName(string name) {
            m_name = name;
        }

        string getName() {
            return m_name;
        }
};

int main() {
    cout << "Simple class example" << endl;

    Animal dog = Animal();
    dog.giveName("Bingo");
    cout << "Hi, I am " << dog.getName() << endl;

    return 0;
}