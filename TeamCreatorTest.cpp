#include <iostream>
#include "TeamCreator.h"

using namespace std;

int main() {
    PlayerPool selectable_players;
    selectable_players.read_in_striker("Striker.txt");
    selectable_players.read_in_midfielder("Midfielder.txt");
    selectable_players.read_in_defender("Defender.txt");
    selectable_players.read_in_goalkeeper("Goalkeeper.txt");

    FootballLeague premier_league;
    premier_league.read_in_teams(selectable_players);

    TeamCreator run(&selectable_players, &premier_league);

    run.create_user_team();

    premier_league.get_team("Chelsea")->print_player_names();

    return 0;
}