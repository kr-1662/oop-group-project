#include "Tournament.h"
#include "PlayerPool.h"
#include "FootballLeague.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    PlayerPool selectable_players;
    selectable_players.read_in_striker("Striker.txt");
    selectable_players.read_in_midfielder("Midfielder.txt");
    selectable_players.read_in_defender("Defender.txt");
    selectable_players.read_in_goalkeeper("GoalKeeper.txt");

    FootballLeague premier_league;
    premier_league.read_in_teams(selectable_players);
    premier_league.set_user_team_name("Liverpool");

    Tournament premier_tournament(premier_league.get_teams(),premier_league.get_user_team_name());
    premier_tournament.tournament_sim();

    return 0;
}