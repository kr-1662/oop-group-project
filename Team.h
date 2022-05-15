#ifndef Team_h
#define Team_h

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

class Team {
    private: 
    string football_team_name;
    Player * team_members;
    float team_salary_requirement;

    public:
    Team();
    string get_team_name();
    void reset_team_members();
    Team(string _football_team_name, Player * _team_members, float team_salary_requirement);
    Player * get_team_members();
    ~Team();
};

#endif