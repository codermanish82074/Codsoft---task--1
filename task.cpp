#include <iostream>
#include <cstdlib>
#include <ctime>    

int main() {
    
    std::srand(std::time(0)); 

    int numberToGuess = std::rand() % 15 + 1;

    int playerGuess = 0;
    int numberOfTries = 0;

    std::cout << "Welcome to Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 15." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    while (playerGuess != numberToGuess) {
        std::cout << "Enter your guess: ";
        std::cin >> playerGuess;

        if (std::cin.fail()) {
            std::cin.clear(); 
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Invalid input. Please enter a number." << std::endl;
            continue;
        }

        numberOfTries++;

        if (playerGuess < numberToGuess) {
            std::cout << "Too low Try again." << std::endl;
        } else if (playerGuess > numberToGuess) {
            std::cout << "Too high Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number in " << numberOfTries << " tries!" << std::endl;
        }
    }

    return 0;
}

