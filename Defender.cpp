#include "Defender.h"
#include <iostream>

using namespace std;

Defender::Defender(/* args */)
{
}

void Defender::print_info() {
    Player::print_info();
    cout << "Finishing: " << tackling.get_rating() << endl;
    cout << "Shot Power: " << marking.get_rating() << endl;
}

int Defender::total_player_rating() {
    return Player::total_player_rating() + tackling.get_rating() + marking.get_rating();
}

Defender::~Defender()
{
}