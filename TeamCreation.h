#ifndef TeamCreation_H_
#define TeamCreation_H_
#include <iostream>
#include <string>

using namespace std; 

class TeamCreation{
    private:
    PlayerPool selectable_players;
    FootballLeauge football_league; 
    public:
    TeamCreation();
    void create_user_team();
    ~TeamCreation();
};
