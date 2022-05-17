#ifndef PlayerPool_H_
#define PlayerPool_H_

#include "Player.h"
#include "Striker.h"
#include "Defender.h"
#include "Midfielder.h"
#include "Goalkeeper.h"
#include <iostream>
#include <string>

using namespace std;


class PlayerPool{
    private:
    Striker* striker_selections;
    Midfielder* midfielder_selections; 
    Defender* defender_selections;
    Goalkeeper* goalkeeper_selections;
    
    public:
    PlayerPool();
    void read_in_striker(string filename);
    void read_in_midfielder(string filename);
    void read_in_defender(string filename);
    void read_in_goalkeeper(string filename);
    void print_possible_player_selections(string position);
    Player* select_player(string position, string name);
    ~PlayerPool();
};
#endif
