#ifndef Tournament_H
#define Tournament_H
#include <iostream>
#include <string>

#include "FootballLeague.h"
#include "TournamentRound.h"
#include "PlayerPool.h"

using namespace std; 

class Tournament{
    private: 
    Team* football_league_teams;
    string user_team_name;

    public:
    Tournament(Team* _football_league_teams, string user_team_name);
    void tournament_sim();
    ~Tournament();
};

#endif
