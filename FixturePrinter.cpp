#include "FixturePrinter.h"
#include <iostream>
#include <string>

using namespace std;

// constructor that takes in the teams and the fixture indexes of the round to be printed and the number of matches in the round
// set the private variables as well
FixturePrinter::FixturePrinter(Team* _football_league_teams, int* _fixture_team_indexes, int _num_matches) :
football_league_teams(_football_league_teams), fixture_team_indexes(_fixture_team_indexes), num_matches(_num_matches) {}

void FixturePrinter::print() {
    // print out fixtures in ordered way
    cout << "Fixtures:" << endl;
    for (int i = 0; i < num_matches; i++) {
        cout << football_league_teams[fixture_team_indexes[2*i]].get_team_name();
        cout << " vs ";
        cout << football_league_teams[fixture_team_indexes[2*i+1]].get_team_name();
        cout << endl;
    }
    cout << endl;
}