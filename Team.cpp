#include "Team.h"
#include <iostream>

using namespace std;

Team::Team() {
    football_team_name = "";
    team_members = NULL;
    team_salary_requirement = 0;
}

string Team::get_team_name() {
    return football_team_name;
}

Team::Team(string _football_team_name, Player * _team_members, float team_salary_requirement) {
    football_team_name = _football_team_name;
    team_members = _team_members;
    this->team_salary_requirement = team_salary_requirement;
}

Player * Team::get_team_members() {
    return team_members;
}

Team::~Team() {

}