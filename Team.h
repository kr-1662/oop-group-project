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

// Team class is a class which stores the team name and team members. There are four players in each team,
// a defender, goalkeeper, midfielder, and striker.

class Team {
    private: 
        string football_team_name;
        Player** team_members;

    public:
        Team(); // default constructor

        // copy constructor
        Team(const Team &team);

        // assignment operator
        Team& operator=(Team team);
        
        // various get/set functions
        string get_team_name() const;
        Player** get_team_members();
        Player** get_team_members() const;
        void set_team_name(string _new_team_name);
        void set_team_members(Player** _team_members);
        void set_team_defender(Defender defender);
        void set_team_striker(Striker striker);
        void set_team_midfielder(Midfielder midfielder);
        void set_team_goalkeeper(Goalkeeper goalkeeper);

        // reset team members function
        void reset_team_members();

        // function to print player names 
        void print_player_names();
};

#endif