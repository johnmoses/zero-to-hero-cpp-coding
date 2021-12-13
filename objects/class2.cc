// Template example

#include <iostream>

using namespace std;

class Animal {
    protected:
        string m_name;

    public:
        Animal(string name) : m_name(name) {}

        string getName() {
            return m_name;
        }

        // interface to be implemented in derived class
        virtual string makeSound() = 0;
};

class Dog : public Animal {
    public:
        // constructur
        Dog(string name) : Animal(name) {}

        // Copy assignment operator overloading
        void operator = (const Dog &D) {
            m_name = D.m_name;
        }

        // implement interface
        string makeSound() override {
            return "woof-woof";
        }
};

class Cat : public Animal {
    public:
        Cat(string name) : Animal(name) {}

        void operator = (const Cat &D) {
            m_name = D.m_name;
        }

        string makeSound() override {
            return "meow-meow";
        }
};

template<typename T>
void getNameAndMakeSound(T& theAnimal) {
    cout << theAnimal.getName() << " sounds ";
    cout << theAnimal.makeSound() << endl;
}

int main() {
    cout << "Template example" << endl;

    Dog dog = Dog("Bingo");
    cout << "Dog is " << dog.getName() << endl;
    getNameAndMakeSound(dog);

    Cat cat = Cat("Pussy");
    cout << "Cat is " << cat.getName() << endl;
    getNameAndMakeSound(cat);

    return 0;
}