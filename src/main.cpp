#include <iostream>

#include "math.h"

int main() {
    std::cout << "2 + 3 = " << add(2, 3) << "\n";
    std::cout << "4 * 6 = " << multiply(4, 6) << "\n";
    std::cout << "7 is prime? " << (is_prime(7) ? "yes" : "no") << "\n";
    return 0;
}
