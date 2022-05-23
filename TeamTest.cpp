#include "Team.h"
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

    Team football_team;
    football_team.set_team_striker(selectable_players.get_striker_selections()[0]);
    football_team.set_team_midfielder(selectable_players.get_midfielder_selections()[1]);
    football_team.set_team_defender(selectable_players.get_defender_selections()[2]);
    football_team.set_team_goalkeeper(selectable_players.get_goalkeeper_selections()[3]);
    football_team.print_player_names();
    football_team.set_team_name("Chelsea");
    cout << football_team.get_team_name() << endl;
    football_team.get_team_members()[0]->print_info();
}