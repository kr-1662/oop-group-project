#ifndef Tournament_H
#define Tournament_H
#include <iostream>
#include <string>

using namespace std; 

class Tournament{
    private: 
    FootballLeague football_league;

    public:
    Tournament(FootballLeague _football_league);
    void tournament_sim();
    ~Tournament();
};

#endif
