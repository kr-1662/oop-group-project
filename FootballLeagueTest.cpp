#include "FootballLeague.h"
#include "PlayerPool.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    PlayerPool selectable_players;
    selectable_players.read_in_striker("Striker.txt");
    selectable_players.read_in_midfielder("Midfielder.txt");
    selectable_players.read_in_defender("Defender.txt");
    selectable_players.read_in_goalkeeper("Goalkeeper.txt");

    FootballLeague premier_league;
    premier_league.read_in_teams(selectable_players);
    premier_league.get_team("Arsenal")->print_player_names();    
    premier_league.get_teams()[0].get_team_members()[0]->print_info();
    premier_league.set_user_team_name();

    return 0;
}