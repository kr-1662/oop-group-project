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
    // the entire football league would be added to the tournament class
    FootballLeague football_league;

    public:
    // constructor that takes in the football league
    Tournament(FootballLeague football_league);
    // runs the tournament simulation
    void tournament_sim();
};

#endif
