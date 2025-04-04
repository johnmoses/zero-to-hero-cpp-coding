#include <iostream>

int main() {
    std::cout << "Hello, World" << std::endl;
    std::cout << "Enter two numbers" << std::endl;

    // define variables and get user inputs from keyboard
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " 
        << v1 + v2 << std::endl;
    
    // do product
    std::cout << "The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;
}