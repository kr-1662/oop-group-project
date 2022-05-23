#include "TeamPlayerBattle.h"
#include "PlayerPool.h"
#include "FootballLeague.h"

#include <iostream>

int main(){
    PlayerPool selectable_players;
    selectable_players.read_in_striker("Striker.txt");
    selectable_players.read_in_midfielder("Midfielder.txt");
    selectable_players.read_in_defender("Defender.txt");
    selectable_players.read_in_goalkeeper("Goalkeeper.txt");

    FootballLeague premier_league;
    premier_league.read_in_teams(selectable_players);

    premier_league.get_teams()[0];
    
    Team team_1 = premier_league.get_teams()[0];
    Team team_2 = premier_league.get_teams()[1];

    TeamPlayerBattle team1_vs_team2(team_1, team_2);

    cout << team1_vs_team2.is_win_defender_vs_striker() << endl;
    cout << team1_vs_team2.is_win_goalkeeper_vs_goalkeeper() << endl;
    cout << team1_vs_team2.is_win_midfielder_vs_midfielder() << endl;
    cout << team1_vs_team2.is_win_striker_vs_defender() << endl;
    
    return 0;
}