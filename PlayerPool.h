#ifndef PlayerPool_H_
#define PlayerPool_H_

#include "Player.h"
#include "Striker.h"
#include "Defender.h"
#include "Midfielder.h"
#include "Goalkeeper.h"
#include "Team.h"
#include <iostream>
#include <string>

using namespace std;


class PlayerPool{
    private:
    Striker* striker_selections;
    Midfielder* midfielder_selections; 
    Defender* defender_selections;
    Goalkeeper* goalkeeper_selections;
    Team *user_team;
    
    public:
    PlayerPool();
    void read_in_striker(string filename);
    void read_in_midfielder(string filename);
    void read_in_defender(string filename);
    void read_in_goalkeeper(string filename);
    Striker* get_striker_selections();
    Midfielder* get_midfielder_selections();
    Defender* get_defender_selections();
    Goalkeeper* get_goalkeeper_selections();
    void print_possible_player_selections(const string position);
    Striker select_striker(string name);
    Midfielder select_midfielder(string name);
    Defender select_defender(string name);
    Goalkeeper select_goalkeeper(string name);
    ~PlayerPool();
};
#endif
