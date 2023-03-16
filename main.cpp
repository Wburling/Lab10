#include <iostream>
#include "Function.h"
int main() {
    std::cout << "Enter in your Name" << std::endl;
    std::string name;
    std::cin >> name;
    displayName(name);
    return 0;
}
