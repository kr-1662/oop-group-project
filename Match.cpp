#include "Match.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// sets team one and team two along with default values for the match result
Match::Match(Team _team_one, Team _team_two) : team_one(_team_one), team_two(_team_two), winning_team(_team_one), team_one_score(0), team_two_score(0) {}

Match::Match() : team_one_score(0), team_two_score(0) {winning_team = team_one;}

// sets teams
void Match::set_teams(Team _team_one, Team _team_two){
    team_one = _team_one;
    team_two = _team_two;
}

// increment score of winning team
void Match::score_increment(bool is_win){
    if (is_win){
        team_one_score++;
    }else{
        team_two_score++;
    }
}

// runs the match
void Match::play_football_match(){
    TeamPlayerBattle battle(team_one, team_two);

    // team one goalkeeper vs team two goalkeeper
    score_increment(battle.is_win_goalkeeper_vs_goalkeeper());
    
    // team one striker vs team two defender
    score_increment(battle.is_win_striker_vs_defender());
   
    // team one midfielder vs team two midfielder
    score_increment(battle.is_win_midfielder_vs_midfielder());

    // team one defender vs team two striker
    score_increment(battle.is_win_defender_vs_striker());

    // Draw situation
    srand(2022);
    if (team_one_score == team_two_score) {
        int random_integer_team_one = 0;
        int random_integer_team_two = 0;

        while (random_integer_team_one == random_integer_team_two) {
            random_integer_team_one = round(rand() % 11);
            random_integer_team_two = round(rand() % 11);
        }

        if (random_integer_team_one > random_integer_team_two) {
            score_increment(true);
        }else{
            score_increment(false);
        }
    }
   
    if (team_one_score > team_two_score) {
        winning_team = team_one;
        match_result.set_winner_name(team_one.get_team_name());
        match_result.set_loser_name(team_two.get_team_name());
        match_result.set_winners_score(team_one_score);
        match_result.set_losers_score(team_two_score);
    }else{
        winning_team = team_two;
        match_result.set_winner_name(team_two.get_team_name());
        match_result.set_loser_name(team_one.get_team_name());
        match_result.set_winners_score(team_two_score);
        match_result.set_losers_score(team_one_score);
    }
}

// returns winning team
Team Match::get_winning_team(){return winning_team;}

// returns match result
MatchResult Match::get_match_result(){return match_result;}
