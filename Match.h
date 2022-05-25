#ifndef Match_H
#define Match_H
#include "Team.h"
#include "MatchResult.h"
#include "TeamPlayerBattle.h"
#include <iostream>
#include <string>

using namespace std;

// Match class simulates a match between two teams.

class Match {
    private:
        // one of the teams in the match
        Team team_one;
        // the other team in the match
        Team team_two;
        // stores score of team 1
        int team_one_score;
        // stores score of team 2
        int team_two_score;
        // stores the team that won the match
        Team winning_team;
        // stores match result
        MatchResult match_result;

    public:
        Match();
        // constructor that takes in two teams
        Match(Team _team_one, Team _team_two);

        // set teams
        void set_teams(Team _team_one, Team _team_two);

        // play match
        void play_football_match();

        // score increment function
        void score_increment(bool is_win);

        // get winning team
        Team get_winning_team();

        // return result info
        MatchResult get_match_result();
};

#endif