#include "Team.h"
#include <iostream>

using namespace std;

Team::Team() {
    football_team_name = "";
    team_salary_requirement = 0;
}

string Team::get_team_name() {
    return football_team_name;
}

void Team::reset_team_members(){
    striker.set_name("");
    midfielder.set_name("");
    defender.set_name("");
    goalkeeper.set_name("");
}

void Team::set_team_name(string new_team_name){
    football_team_name = new_team_name;
}

Striker Team::get_team_striker(){return striker;}

Midfielder Team::get_team_midfielder(){return midfielder;}

Defender Team::get_team_defender(){return defender;}

Goalkeeper Team::get_team_goalkeeper(){return goalkeeper;}

void Team::set_team_members(Striker _striker, Midfielder _midfielder, Defender _defender, Goalkeeper _goalkeeper){
    striker = _striker;
    midfielder = _midfielder;
    defender = _defender;
    goalkeeper = _goalkeeper;
}

void Team::print_player_names(){
    cout << striker.get_name() << endl;
    cout << midfielder.get_name() << endl;
    cout << defender.get_name() << endl;
    cout << goalkeeper.get_name() << endl;
}

Team::~Team(){}