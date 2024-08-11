#include "Random.h"
#include <iostream>

void play(int min, int max, int roundLimit) {
    std::cout <<
            "Let's play a game. I'm thinking of a number between " << min << " and " << max <<
            " . You have " << roundLimit << " tries to guess what it is.\n";
    const int num{Random::get(min, max)};
    int answer{};
    int round{1};
    do {
        std::cout << "Guess #" << round << ": ";
        std::cin >> answer;
        if (answer > num) {
            std::cout << "Your guess is too high.\n";
            ++round;
        } else if (answer < num) {
            std::cout << "Your guess is too low.\n";
            ++round;
        } else {
            std::cout << "Correct! You win!\n";
        }
        if (round > roundLimit) {
            std::cout << "Sorry, you lose. The correct number was " << num << ".\n";
            break;
        }
    } while (answer != num);
}

void loop() {
    std::cout << "Would you like to play again (y/n)? ";
    std::string yn{};
    std::cin >> yn;
    if (yn == "y") {
        play(1, 100, 5);
    } else if (yn == "n") {
        std::cout << "Thank you for playing.";
    } else {
        loop();
    }
}

int main() {
    constexpr int guesses{7}; // the user has this many guesses
    constexpr int min{1};
    constexpr int max{100};
    play(min, max, guesses);
    loop();
    return 0;
}
