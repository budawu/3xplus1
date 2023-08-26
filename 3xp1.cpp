#include <iostream>

auto threexp1(int x) -> int {
    while (x != 1) {
        x = x % 2 == 0 ? x / 2 : 3 * x + 1;
        std::cout << x << std::endl;
    }
    std::cout << "OK" << std::endl;
    return 0;
}

auto main() -> int {
    return threexp1(27);
}
