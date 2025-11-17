#include "Card.h"

class Player {
public:
    Card card;

    void drawCard();
    void showCard();
    int getCardValue();
    int score = 0;
};

void Player::drawCard() {
    card = Card();
}

void Player::showCard() {
    card.display();
}

int Player::getCardValue() {
    return card.value;
}