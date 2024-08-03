#include <iostream>

double getHeight() {
    double x{};
    std::cout << "Enter the height of the tower in meters:";
    std::cin >> x;
    return x;
}

double calcDistance(int second, double height) {
    const double gravity{9.8};
    double distance = gravity * second * second / 2;
    return height - distance;
}

void loop(double height) {
    for (int i = 0; i <= 5; i++) {
        double result{calcDistance(i, height)};
        if (result <= 0) {
            std::cout << "At " << i << " seconds, the ball is on the ground.\n";
        } else {
            std::cout << "At " << i << " seconds, the ball is at height: " << result << " meters.\n";
        }
    }
}

int main() {
    double height{getHeight()};
    loop(height);
    return 0;
}
