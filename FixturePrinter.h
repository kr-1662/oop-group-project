#ifndef FixturePrinter_H
#define FixturePrinter_H
#include "Team.h" 
#include <iostream>
#include <string>

using namespace std;

class FixturePrinter {
    private:
    int* fixture_team_indexes;
    int num_matches;
    Team* football_league_teams;

    public:
    FixturePrinter(Team* _football_league_teams, int* fixture_team_indexes, int num_matches);
    void print();
    ~FixturePrinter();
};

#endif