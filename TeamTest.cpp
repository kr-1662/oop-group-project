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
    selectable_players.read_in_goalkeeper("GoalKeeper.txt");

    Team football_team;
    football_team.set_team_members(selectable_players.get_striker_selections()[0], selectable_players.get_midfielder_selections()[0], selectable_players.get_defender_selections()[0], selectable_players.get_goalkeeper_selections()[0]);
    football_team.print_player_names();
    football_team.set_team_name("Chelsea");
    cout << football_team.get_team_name() << endl;
    cout << football_team.get_team_defender().get_name() << endl;
    cout << football_team.get_team_goalkeeper().get_name() << endl;
}