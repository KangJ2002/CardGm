#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Player.h"

int main() {
    srand(static_cast<unsigned int>(time(0))); // random seed

    Player player;
    Player computer;
    char playAgain = 'y';

    std::cout << "Welcome to the Card Game!" << std::endl;


    while (playAgain == 'y'){
        player.drawCard();
        computer.drawCard();

        std::cout << "\nYour drew : ";
        player.showCard();
        std::cout << std::endl;

        std::cout << "Computer drew : ";
        computer.showCard();
        std::cout << std::endl;

        if (player.getCardValue() > computer.getCardValue()){
            std::cout << "You win!" << std::endl;
            player.score++;
        }
        else if (player.getCardValue() < computer.getCardValue()){
            std::cout << "Computer wins!" << std::endl;
            computer.score++; 
        }
        else {
            std::cout << "It's a tie!" << std::endl;
        }

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    }
    std::cout << "\nFinal Score: You " << player.score << " - Computer " << computer.score << std::endl;
    if (player.score > computer.score){
        std::cout << "You are the winner!" << std::endl;
    }
    else if (player.score < computer.score){
        std::cout << "Computer is the winner!" << std::endl;
    }
    else {
        std::cout << "The game ended in a tie!" << std::endl;
    }
    
    std::cout << "Thanks for playing!" << std::endl;

    


    return 0;
}