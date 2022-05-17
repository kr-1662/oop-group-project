#include "FootballLeague.h"
#include "PlayerPool.h"

FootballLeague::FootballLeague(){
    football_league_teams = new Team[8];
    user_selected_team_name = "";
    user_team_index = 0;
}

void FootballLeague::read_in_teams(PlayerPool available_players){
  
    for (int i = 0; i < 8; i++){
        football_league_teams[i].set_team_members(available_players.get_striker_selections()[i], available_players.get_midfielder_selections()[i], available_players.get_defender_selections()[i], available_players.get_goalkeeper_selections()[i]);
    }

    football_league_teams[0].set_team_name("Manchester United");
    football_league_teams[1].set_team_name("Manchester City");
    football_league_teams[2].set_team_name("Arsenal");
    football_league_teams[3].set_team_name("Liverpool");
    football_league_teams[4].set_team_name("Aston Villa");
    football_league_teams[5].set_team_name("West Ham United");
    football_league_teams[6].set_team_name("Tottenham");
    football_league_teams[7].set_team_name("Chelsea");
}


void FootballLeague::set_user_team_name(string team_name){
    user_selected_team_name = team_name;
    for (int i = 0; i < 8; i++){
        if (football_league_teams[i].get_team_name() == team_name){
            user_team_index = i;
        }
    }
}

Team FootballLeague::get_team(string team_name){
    for (int i = 0; i < 8; i++){
        if (football_league_teams[i].get_team_name() == team_name){
            return football_league_teams[i];
        }
    }
}

Team* FootballLeague::get_teams(){return football_league_teams;}

string FootballLeague::get_user_team_name(){return user_selected_team_name;}

FootballLeague::~FootballLeague(){
    delete [] football_league_teams;
}