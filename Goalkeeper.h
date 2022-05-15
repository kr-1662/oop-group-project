#ifndef Goalkeeper_h
#define Goalkeeper_h

#include "Attribute.h"
#include "Player.h"

class Goalkeeper: public Player
{
private:
    Attribute distributing;
    Attribute diving;
    Attribute handling;

public:
    Goalkeeper(/* args */);
    void print_info();
    int total_player_rating();
    ~Goalkeeper();
};

#endif