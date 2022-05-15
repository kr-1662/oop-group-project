#include "Midfielder.h"
#include <iostream>

using namespace std;

Midfielder::Midfielder(/* args */)
{
}

void Midfielder::print_info() {
    Player::print_info();
    cout << "Game Vision: " << game_vision.get_rating() << endl;
    cout << "Creativity: " << creativity.get_rating() << endl;
}

int Midfielder::total_player_rating() {
    return Player::total_player_rating() + game_vision.get_rating() + creativity.get_rating();
}

Midfielder::~Midfielder()
{
}