#ifndef Defender_h
#define Defender_h

#include "Player.h"
#include "Attribute.h"

class Defender: public Player
{
private:
    Attribute tackling;
    Attribute marking;
public:
    Defender(/* args */);
    void print_info();
    int total_player_rating();
    ~Defender();
};

#endif
