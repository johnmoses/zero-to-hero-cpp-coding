#include <iostream>

std::string global_str;
int global_int;

int main() {
    std::cout << "String types" << std::endl;

    int local_int;
    std::string local_str;

    std::cout << global_str.c_str() << std::endl;
    std::cout << global_int << std::endl;

    std::cout << local_str.c_str() << std::endl;
    std::cout << local_int << std::endl;
    
    return 0;
}