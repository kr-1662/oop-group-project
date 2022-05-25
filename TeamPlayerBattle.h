#ifndef TeamPlayerBattle_H
#define TeamPlayerBattle_H
#include "Striker.h"
#include "Midfielder.h"
#include "Defender.h"
#include "Goalkeeper.h"
#include "Team.h"
#include <string>

using namespace std;

// Team Battle class is responsible for the battles between players on opposing teams.

class TeamPlayerBattle {
    private:
        Team team_1; 
        Team team_2; 
    
    public:
        // constructor that takes int team 1 and team 2
        TeamPlayerBattle(Team _team_1, Team _team_2);
        
        // functions to determine the winner in team player matchups
        bool is_win_striker_vs_defender();
        bool is_win_midfielder_vs_midfielder();
        bool is_win_defender_vs_striker();
        bool is_win_goalkeeper_vs_goalkeeper();
};

#endif