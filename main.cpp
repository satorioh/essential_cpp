#include <iostream>

int getInput() {
    std::cout << "Enter an integer:";
    int x{};
    std::cin >> x;
    return x;
}

int main() {
    int smaller{getInput()};
    int larger{getInput()};
    if (larger < smaller) {
        std::swap(larger, smaller);
        std::cout << "Swapping the values\n";
    }
    std::cout << "The smaller value is: " << smaller << "\n";
    std::cout << "The larger value is: " << larger;
    return 0;
}
