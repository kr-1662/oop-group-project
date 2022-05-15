#ifndef Midfielder_h
#define Midfielder_h

#include "Attribute.h"
#include "Player.h"

class Midfielder: public Player
{
private:
    Attribute game_vision;
    Attribute creativity;
public:
    Midfielder();
    void print_info();
    int total_player_rating();
    ~Midfielder();
};

#endif
