#ifndef TeamCreation_H
#define TeamCreation_H

#include <iostream>
#include <string>

#include "Playerpool.h"
#include "FootballLeague.h"

using namespace std; 

class TeamCreation{
    private:
    PlayerPool selectable_players;
    FootballLeague football_league; 
    public:
    TeamCreation();
    void create_user_team();
    ~TeamCreation();
};

#endif