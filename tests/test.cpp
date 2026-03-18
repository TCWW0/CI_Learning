#include <iostream>

#include "math.h"

namespace {
int failures = 0;

void check(bool condition, const char* message) {
    if (!condition) {
        ++failures;
        std::cout << "FAIL: " << message << "\n";
    }
}
}

int main() {
    check(add(2, 3) == 5, "add(2,3) should be 5");
    check(multiply(4, 6) == 24, "multiply(4,6) should be 24");
    check(is_prime(2), "2 should be prime");
    check(is_prime(7), "7 should be prime");
    check(!is_prime(1), "1 should not be prime");
    check(!is_prime(9), "9 should not be prime");

    if (failures == 0) {
        std::cout << "All tests passed.\n";
        return 0;
    }

    std::cout << failures << " tests failed.\n";
    return 1;
}
