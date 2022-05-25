#ifndef TeamCreator_H
#define TeamCreator_H

#include <iostream>
#include <string>
#include"PlayerPool.h"
#include"FootballLeague.h"

#include "PlayerPool.h"
#include "FootballLeague.h"
#include "Player.h"

using namespace std; 

class TeamCreator{
    private:
    // array of selectable players
    PlayerPool* selectable_players;
    // array of teams
    FootballLeague* football_league; 
    public:
    // constructor that takes in a pointer to a PlayerPool and a pointer to a FootballLeague
    TeamCreator(PlayerPool* _selectable_players, FootballLeague* _football_league);
    // intializes the user team
    void create_user_team();
};

#endif