#ifndef Team_h
#define Team_h

#include <iostream>
#include <string>
#include "Player.h"
#include "Striker.h"
#include "Midfielder.h"
#include "Defender.h"
#include "Goalkeeper.h"


using namespace std;

class Team {
    private: 
        string football_team_name;
        Striker striker;
        Midfielder midfielder;
        Defender defender;
        Goalkeeper goalkeeper;
        float team_salary_requirement;

    public:
        Team();
        string get_team_name();
        void set_team_name(string _new_team_name);
        void reset_team_members();
        Striker get_team_striker();
        Midfielder get_team_midfielder();
        Defender get_team_defender();
        Goalkeeper get_team_goalkeeper();
        void set_team_members(Striker team_striker, Midfielder team_midfielder, Defender team_defender, Goalkeeper team_goalkeeper);
        void print_player_names();
        ~Team();
};

#endif