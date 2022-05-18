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
    PlayerPool selectable_players;
    FootballLeague football_league; 
    public:
    void create_user_team();
};

#endif