#include <iostream>
#include "TeamCreator.h"
#include "TournamentRound.h"
#include "FootballLeague.h"
#include "PlayerPool.h"

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


    TeamCreator run(selectable_players, premier_league);

    run.create_user_team();

    int fixture_indexes[8] = {0,4,1,7,2,6,5,3};
    string user_team_name = "Liverpool";

    TournamentRound quarterfinals(premier_league.get_teams(), user_team_name, fixture_indexes, 4);
    Team* remaining_teams = quarterfinals.play_tournament_round();
    quarterfinals.print_results();
    cout << quarterfinals.is_still_in_tournament() << endl;

    return 0;
}