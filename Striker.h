#ifndef Striker_h
#define Striker_h

#include "Attribute.h"
#include "Player.h"

class Striker: public Player
{
private:
    Attribute finishing;
    Attribute shot_power;
    Attribute penalty;
public:
    Striker(/* args */);
    void print_info();
    int total_player_rating();
    ~Striker();
};

#endif