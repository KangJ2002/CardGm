#include "Card.h"
#include <iostream>
#include <cstdlib>

// Card::Card() {
//     value = rand() % 13 + 1; 
// }

Card::Card(int val){
    value = (val - 1) % 13 + 1;
}

void Card::display() {
    if (value == 1){
        std::cout << "Ace";
    }
    else if (value == 11){
        std::cout << "Jack";
    }
    else if (value == 12){
        std::cout << "Queen";
    }
    else if (value == 13){
        std::cout << "King";
    }
    else {
        std::cout << value;
    }
}