#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>

void PrintIntroduction(int Difficulty) {
    // Print welcome messages to terminal
    std::cout << "\n\nSalutations, FedoraMan. I need you to do elite hacking!\n";
    std::this_thread::sleep_for (std::chrono::seconds(1));
    std::cout << "Break into this level " << Difficulty << " women's secret database for me!\n";
    std::this_thread::sleep_for (std::chrono::seconds(1));
    std::cout << "Enter the correct code to show what an alpha you are...\n\n";
    std::this_thread::sleep_for (std::chrono::seconds(1));
}

bool PlayGame(int Difficulty) {
    PrintIntroduction(Difficulty);

    // Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

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
        std::cout << "\n*** You magnificent, neck-bearded, beauty! You did it! ***";
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout << "\n*** There are still more secrets to learn. Let's keep going! ***";
        std::this_thread::sleep_for (std::chrono::seconds(1));
        return true;
    } else {
        std::cout << "\n*** Wrong, neophyte! What a Chad. ***";
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout << "\n*** If you don't try again you'll die a virgin. ***";
        std::this_thread::sleep_for (std::chrono::seconds(1));
        return false;
    }
}

int main() {  
    srand(time(NULL)); // create new random sequence based on time of day

    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    // Loop all levels until game in complete
    while(LevelDifficulty <= MaxDifficulty) { 
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete) {
            ++LevelDifficulty;
        }
    }
    
    std::cout << "\nThat hat isn't just a fashion statement, my friend.";
    std::this_thread::sleep_for (std::chrono::seconds(1));
    std::cout << "\nIt is the real deal!";
    std::this_thread::sleep_for (std::chrono::seconds(1));
    std::cout << "\nYou've uncovered all of women's secrets! Congrats!";

    return 0;
}