#include <iostream>

int main() {
    printf("Built in types\n");
    // unsigned variables
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;

    // signed variables
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;

    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

    // literals
    std::cout << "2" << "\115\n";
    std::cout << 2 << "\t\115\n";
    
    return 0;
}