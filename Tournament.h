#ifndef Tournament_H
#define Tournament_H
#include <iostream>
#include <string>

#include "FootballLeague.h"
#include "TournamentRound.h"
#include "PlayerPool.h"

using namespace std; 

// Tournament class simulates the entire tournament and prints out user interactive information

class Tournament{
    private: 
    FootballLeague football_league;

    public:
    Tournament(FootballLeague football_league);
    void tournament_sim();
};

#endif
