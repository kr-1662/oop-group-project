#include "Match.h"
#include "PlayerPool.h"
#include "FootballLeague.h"

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

    Team team_1 = premier_league.get_teams()[0];
    Team team_2 = premier_league.get_teams()[1];

    Match m1(team_1, team_2);

    MatchResult match_result;
    m1.play_football_match();
    match_result = m1.get_match_result();
    match_result.print_result();
    Team winning_team = m1.get_winning_team();
    cout << winning_team.get_team_name() << endl;
    
    return 0;
}