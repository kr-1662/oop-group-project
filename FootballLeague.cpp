#include "FootballLeague.h"
#include "PlayerPool.h"

FootballLeague::FootballLeague(){
    football_league_teams = new Team[8];
    user_selected_team_name = "";
    user_team_index = 0;
}

FootballLeague::FootballLeague(FootballLeague &football_league){
    football_league_teams = new Team[8];
    for (int i = 0; i < 8; i++){
        football_league_teams[i] = football_league.get_teams()[i];
    }
    user_selected_team_name = football_league.get_user_team_name();
    user_team_index = football_league.get_user_team_index();
}

void FootballLeague::operator=(FootballLeague football_league){
    football_league_teams = new Team[8];
    for (int i = 0; i < 8; i++){
        football_league_teams[i] = football_league.get_teams()[i];
    }
    user_selected_team_name = football_league.get_user_team_name();
    user_team_index = football_league.get_user_team_index();
}

void FootballLeague::read_in_teams(PlayerPool available_players){
  
    for (int i = 0; i < 8; i++){
        football_league_teams[i].set_team_striker(available_players.get_striker_selections()[i]);
        football_league_teams[i].set_team_midfielder(available_players.get_midfielder_selections()[i]);
        football_league_teams[i].set_team_defender(available_players.get_defender_selections()[i]);
        football_league_teams[i].set_team_goalkeeper(available_players.get_goalkeeper_selections()[i]);
    }

    football_league_teams[0].set_team_name("Manchester_United");
    football_league_teams[1].set_team_name("Manchester_City");
    football_league_teams[2].set_team_name("Arsenal");
    football_league_teams[3].set_team_name("Liverpool");
    football_league_teams[4].set_team_name("Aston_Villa");
    football_league_teams[5].set_team_name("West_Ham_United");
    football_league_teams[6].set_team_name("Tottenham");
    football_league_teams[7].set_team_name("Chelsea");
}


void FootballLeague::set_user_team_name(string team_name){
    int selection_status = 0; // changes to one when selection successfull;
    while (selection_status == 0){   
        for (int i = 0; i < 8; i++){
            if (football_league_teams[i].get_team_name() == team_name){
                user_selected_team_name = football_league_teams[i].get_team_name();
                user_team_index = i;
                selection_status = 1;
            }
        }
        if (selection_status == 0){
            cout << "Invalid team name. Enter team name again: ";
            cin >> team_name;
        }
    }
}

string FootballLeague::get_user_team_name(){return user_selected_team_name;}

int FootballLeague::get_user_team_index() {return user_team_index;}

Team* FootballLeague::get_team(string team_name){
    int selection_status = 0; // changes to one when selection successfull;
    while (selection_status == 0){   
        for (int i = 0; i < 8; i++){
            if (football_league_teams[i].get_team_name() == team_name){
                return &football_league_teams[i];
                selection_status = 1;
            }
        }
        if (selection_status == 0){
            cout << "Invalid team name. Enter team name again: ";
            cin >> team_name;
        }
    }
    return &football_league_teams[0];
}

Team* FootballLeague::get_teams(){
    return football_league_teams;
}

void FootballLeague::set_user_team_defender(Defender defender){
    football_league_teams[user_team_index].set_team_defender(defender);
}

void FootballLeague::set_user_team_goalkeeper(Goalkeeper goalkeeper){
    football_league_teams[user_team_index].set_team_goalkeeper(goalkeeper);
}    

void FootballLeague::set_user_team_midfielder(Midfielder midfielder){
    football_league_teams[user_team_index].set_team_midfielder(midfielder);
}

void FootballLeague::set_user_team_striker(Striker striker){
    football_league_teams[user_team_index].set_team_striker(striker);
}

FootballLeague::~FootballLeague(){
    delete [] football_league_teams;
}