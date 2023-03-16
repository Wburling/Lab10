#include <iostream>
#include "Function.h"
#include "function.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    displayName("Ekaterina");
    std::cout << "Enter in your Name" << std::endl;
    std::string name;
    std::cin >> name;
    displayName2(name);
    return 0;
}
