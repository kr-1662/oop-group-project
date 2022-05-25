#include <iostream>
#include "TeamCreator.h"
#include "Tournament.h"
#include "FootballLeague.h"
#include "PlayerPool.h"

using namespace std;

int main() {
    // Read in player pool.
    PlayerPool selectable_players;
    selectable_players.read_in_striker("Striker.txt");
    selectable_players.read_in_midfielder("Midfielder.txt");
    selectable_players.read_in_defender("Defender.txt");
    selectable_players.read_in_goalkeeper("Goalkeeper.txt");

    // establish league
    FootballLeague premier_league;
    premier_league.read_in_teams(selectable_players);

    // User creates team
    TeamCreator run(&selectable_players, &premier_league);
    run.create_user_team();

    // Tournament is simulated
    Tournament premier_tournament(premier_league);
    premier_tournament.tournament_sim();

    return 0;
}