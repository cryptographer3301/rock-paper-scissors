#include <iostream>
#include <ctime>
#include <cstdlib>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

typedef int PLAYER;
typedef int CPU;
typedef bool DRAW;

int main() {
    srand((unsigned int) time(NULL)); // Explicit the rand time into a positif integer

    PLAYER player_throw = 0;
    CPU ai_throw = 0;
    DRAW draw = false;
    int score = 0;

    for (int i = 0; i <= 5; i++){
        do {
        std::cout << "Select your throw" << std::endl;
        std::cout << "1) ROCK" << std::endl;
        std::cout << "2) PAPER" << std::endl;
        std::cout << "3) SCISSORS" << std::endl;
        std::cout << "Select: " << std::endl;
        std::cin >> player_throw;

        std::cout << std::endl;
        ai_throw = (rand() % 3) + 1;

        if (ai_throw == ROCK) {
            std::cout << "AI throw ROCK" << std::endl;
        }
        else if (ai_throw == PAPER) {
            std::cout << "AI throw PAPER" << std::endl;
        }
        else if (ai_throw == SCISSORS) {
            std::cout << "AI throw SCISSORS" << std::endl;
        }

        // draw case
        draw = false;

        if (player_throw == ai_throw) {
            draw = true;
            std::cout << "DRAW !!" << std::endl;
        }
        else if (player_throw == ROCK && ai_throw == SCISSORS) {
            std::cout << "PLayer wins the game ! " << std::endl;
            score++;
        }
        else if (player_throw == ROCK && ai_throw == PAPER ) {
            std::cout << "CPU wins the game ! " << std::endl;
            score--;
        }
        else if (player_throw == PAPER && ai_throw == SCISSORS ) {
            std::cout << "CPU wins the game ! " << std::endl;
            score--;
        }
        else if (player_throw == PAPER && ai_throw == ROCK ) {
            std::cout << "Player wins the game ! " << std::endl;
            score++;
        }
        else if (player_throw == SCISSORS && ai_throw == PAPER) {
            std::cout << "Player wins the game ! " << std::endl;
            score++;
        }
        else if (player_throw == SCISSORS && ai_throw == ROCK) {
            std::cout << "CPU wins the game ! " << std::endl;
            score--;
        }
        
        std::cout << "Player score is " << score << std::endl;

    } while(draw);
    
    }
}
