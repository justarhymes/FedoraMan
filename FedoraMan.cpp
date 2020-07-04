#include <iostream>

void PrintIntroduction() {
    // Print welcome messages to terminal
    std::cout << "\n\nSalutations, FedoraMan. I need you to do elite hacking for me!\n";
    std::cout << "Enter the correct code to show what an alpha you are...\n\n";
}

bool PlayGame() {
    PrintIntroduction();

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 2;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print product of variables
    std::cout << "-- There are 3 numbers in the code";
    std::cout << "\n-- The codes add up to: " << CodeSum;
    std::cout << "\n-- The codes multiply to give: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player's guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "\nYou magnificent, neck-bearded, beauty! You did it!";
        return true;
    } else {
        std::cout << "\nWrong, neophyte! What a Chad.";
        return false;
    }
}

int main() {  
    while(true) {
        bool bLevelComplete = PlayGame();
        std::cin.clear(); // clears any errors
        std::cin.ignore(); // Discards the buffer
    }
    return 0;
}