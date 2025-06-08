#include <iostream>
#include "mymath.hpp"

int main() {
    std::cout << add(7, 8) << std::endl;
    std::cout << sub(17, 8) << std::endl;
    std::cout << mul(7, 8) << std::endl;
    return 0;
}

// Compile this as
// g++ main.cpp mymath.cpp -o main
