#ifndef TeamCreation_H
#define TeamCreation_H

#include <iostream>
#include <string>
#include"PlayerPool.h"
#include"FootballLeague.h"

#include "PlayerPool.h"
#include "FootballLeague.h"
#include "Player.h"

using namespace std; 

class TeamCreation{
    private:
    PlayerPool selectable_players;
    FootballLeague football_league; 
    public:
    void create_user_team();
};

#endif