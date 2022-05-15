#include "Match.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

Match::Match(Team _team_one, Team _team_two) : team_one(_team_one), team_two(_team_two), winning_team(_team_one) {}

Match::Match(){
    team_one = Team A;
    team_two = Team B;
}

Match::set_teams(Team _team_one, Team _team_two){
    team_one = _team_one;
    team_two = _team_two;
}

void Match::play_football_match(){
    int current_team_one_score = 0;
    int current_team_two_score = 0;

    // team one goalkeeper vs team two goalkeeper
    PlayerBattleWinChecker goalkeeper_vs_goalkeeper(team_one.get_players(), team_two.get_players(), 3, 3);
    if (goalkeeper_vs_goalkeeper.is_win()) {
        current_team_one_score++;
    }else{
        current_team_two_score++;
    }

    // team one striker vs team two defender
    PlayerBattleWinChecker striker_vs_defender(team_one.get_players(), team_two.get_players(), 0, 2);
    if (striker_vs_defender.is_win()) {
        current_team_one_score++;
    }else{
        current_team_two_score++;
    }

    // team one midfielder vs team two midfielder
    PlayerBattleWinChecker midfielder_vs_midfielder(team_one.get_players(), team_two.get_players(), 1, 1);
    if (midfielder_vs_midfielder.is_win()) {
        current_team_one_score++;
    }else{
        current_team_two_score++;
    }

    // team one defender vs team two striker
    PlayerBattleWinChecker defender_vs_striker(team_one.get_players(), team_two.get_players(), 2, 0);
    if (defender_vs_striker.is_win()) {
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

    // Match result check
    if (current_team_one_score > current_team_two_score) {
        winning_team = team_one;
        match_result_info.set_winner_name(team_one.get_football_team_name());
        match_result_info.set_loser_name(team_two.get_football_team_name());
        match_result_info.set_winners_score(current_team_one_score);
        match_result_info.set_losers_score(current_team_two_score)
    }else{
        winning_team = team_two;
        match_result_info.set_winner_name(team_two.get_football_team_name());
        match_result_info.set_loser_name(team_one.get_football_team_name());
        match_result_info.set_winners_score(current_team_two_score);
        match_result_info.set_losers_score(current_team_one_score)
    }
}

Match::get_winning_team(){return winning_team;}

MatchResult Match::get_match_result(){return match_result_info;}

Match::~Match() {}