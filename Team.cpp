#include "Team.h"
#include <iostream>

using namespace std;

// Creates team consisting of 4 players in the following order:
// Striker, Midfielder, Defender, Goalkeeper
Team::Team() {
    football_team_name = ""; // default conditions
    // create each player
    team_members = new Player*[4];
    team_members[0] = new Striker;
    team_members[1] = new Midfielder;
    team_members[2] = new Defender;
    team_members[3] = new Goalkeeper;
}

// constructor that sets football team name
Team::Team(const Team &team){
    team_members = new Player*[4];
    team_members[0] = new Striker;
    team_members[1] = new Midfielder;
    team_members[2] = new Defender;
    team_members[3] = new Goalkeeper;
    *team_members[0] = *(team.get_team_members()[0]);
    *team_members[1] = *(team.get_team_members()[1]);
    *team_members[2] = *(team.get_team_members()[2]);
    *team_members[3] = *(team.get_team_members()[3]);
    football_team_name = team.get_team_name();
}

// sets football team name and returns team members
Team& Team::operator=(Team team){
    football_team_name = team.get_team_name();
    team_members = team.get_team_members();
    return *this;
}

// gets team name
string Team::get_team_name()const{return football_team_name;}

// gets team members
Player** Team::get_team_members(){return team_members;}

// gets team members, const keyword is used to ensure that the team members cannot be changed
Player** Team::get_team_members()const{return team_members;}

// sets team name
void Team::set_team_name(string new_team_name){football_team_name = new_team_name;}

// sets team members
void Team::set_team_members(Player** _team_members){
    *team_members[0] = *_team_members[0];
    *team_members[1] = *_team_members[1];
    *team_members[2] = *_team_members[2];
    *team_members[3] = *_team_members[3];
}

// sets team defender
void Team::set_team_defender(Defender defender){*team_members[2] = defender;}

// sets team goalkeeper
void Team::set_team_goalkeeper(Goalkeeper goalkeeper){*team_members[3] = goalkeeper;}

// sets team midfielder
void Team::set_team_midfielder(Midfielder midfielder){*team_members[1] = midfielder;}

// sets team striker
void Team::set_team_striker(Striker striker){*team_members[0] = striker;}

// resets team members in the team members array
void Team::reset_team_members(){
    for (int i = 0; i < 4; i++){
        team_members[i]->set_name(""); // set names to blank.
    }
}

// prints team members
void Team::print_player_names(){
    for (int i = 0; i < 4; i++){
        cout << team_members[i]->get_name() << endl;
    }
}