#include "Match.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

Match::Match(Team _team_one, Team _team_two) : team_one(_team_one), team_two(_team_two), winning_team(_team_one) {}

Match::Match(){winning_team = team_one;}

void Match::set_teams(Team _team_one, Team _team_two){
    team_one = _team_one;
    team_two = _team_two;
}

MatchResult Match::play_football_match(){
    int current_team_one_score = 0;
    int current_team_two_score = 0;

    TeamPlayerBattle battle(team_one, team_two);

    // team one goalkeeper vs team two goalkeeper
    if (battle.is_win_goalkeeper_vs_goalkeeper()) {
        current_team_one_score++;
    }else{
        current_team_two_score++;
    }

    // team one striker vs team two defender
    if (battle.is_win_striker_vs_defender()) {
        current_team_one_score++;
    }else{
        current_team_two_score++;
    }

    // team one midfielder vs team two midfielder
    if (battle.is_win_midfielder_vs_midfielder()) {
        current_team_one_score++;
    }else{
        current_team_two_score++;
    }

    // team one defender vs team two striker
    if (battle.is_win_defender_vs_striker()) {
        current_team_one_score++;
    }else{
        current_team_two_score++;
    }

    // Draw situation
    srand(2022);
    if (current_team_one_score == current_team_two_score) {
        int random_integer_team_one = 0;
        int random_integer_team_two = 0;

        while (random_integer_team_one == random_integer_team_two) {
            random_integer_team_one = round(rand() % 11);
            random_integer_team_two = round(rand() % 11);
        }

        if (random_integer_team_one > random_integer_team_two) {
            current_team_one_score++;
        }else{
            current_team_two_score++;
        }
    }
   
    if (current_team_one_score > current_team_two_score) {
        winning_team = team_one;
        MatchResult match_result(team_one.get_team_name(),team_two.get_team_name(), current_team_one_score, current_team_two_score);
        return match_result;
    }else{
        winning_team = team_two;
        MatchResult match_result(team_two.get_team_name(),team_one.get_team_name(), current_team_two_score, current_team_one_score);
        return match_result;
    }
}

Team Match::get_winning_team(){return winning_team;}

Match::~Match() {}