#ifndef FixturePrinter_H
#define FixturePrinter_H
#include "Team.h" 
#include <iostream>
#include <string>

using namespace std;

// FixturePrinter class is in charge of printing the fixtures of any given round.

class FixturePrinter {
    private:
        int* fixture_team_indexes;  // array indicating who plays who ie. [1,4,2,3] indicates team 1 plays team 4 and team 2 plays team 3
        int num_matches; // number of matches in the round
        Team* football_league_teams; // array of teams in the football league

    public:
        // constructor that takes in the teams and the fixture indexes of the round to be printed and the number of matches in the round
        FixturePrinter(Team* _football_league_teams, int* fixture_team_indexes, int num_matches); 

        // print fixtures out
        void print();
};

#endif