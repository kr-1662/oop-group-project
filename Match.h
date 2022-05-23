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
        Team team_one;
        Team team_two;
        int team_one_score;
        int team_two_score;
        Team winning_team;
        MatchResult match_result;

    public:
        Match();
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