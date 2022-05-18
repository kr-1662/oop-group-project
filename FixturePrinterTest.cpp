#include "FixturePrinter.h"
#include "FootballLeague.h"
#include "PlayerPool.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
    PlayerPool selectable_players;
    selectable_players.read_in_striker("Striker.txt");
    selectable_players.read_in_midfielder("Midfielder.txt");
    selectable_players.read_in_defender("Defender.txt");
    selectable_players.read_in_goalkeeper("GoalKeeper.txt");

    FootballLeague premier_league;
    premier_league.read_in_teams(selectable_players);

    int fixture_indexes[8] = {0,4,1,7,2,6,5,3};
    FixturePrinter Ben(premier_league.get_teams(), fixture_indexes, 4);
    Ben.print();
}