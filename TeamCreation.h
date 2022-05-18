#ifndef TeamCreation_H_
#define TeamCreation_H_
#include <iostream>
#include <string>
#include"PlayerPool.h"
#include"FootballLeague.h"

using namespace std; 

class TeamCreation{
    private:
    PlayerPool selectable_players;
    FootballLeague football_league; 
    public:
    void create_user_team();
};
