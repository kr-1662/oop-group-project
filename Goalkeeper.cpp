#include "Goalkeeper.h"
#include <iostream>

using namespace std;

Goalkeeper::Goalkeeper(/* args */)
{
}

void Goalkeeper::print_info()
{
    Player::print_info();
    cout << "Game Vision: " << distributing.get_rating() << endl;
    cout << "Creativity: " << diving.get_rating() << endl;
    cout << "Handling: " << handling.get_rating() << endl;
}

int Goalkeeper::total_player_rating()
{
    return Player::total_player_rating() + distributing.get_rating() + diving.get_rating() + handling.get_rating();
}

Goalkeeper::~Goalkeeper()
{
}