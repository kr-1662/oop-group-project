#ifndef Match_H
#define Match_H
#include "Team.h"
#include "MatchResult.h"
#include "TeamPlayerBattle.h"
#include <iostream>
#include <string>

using namespace std;

class Match {
    private:
    Team team_one;
    Team team_two;
    Team winning_team;
    MatchResult match_result_info;

    public:
    Match();
    Match(Team _team_one, Team _team_two);
    void set_teams(Team _team_one, Team _team_two);
    MatchResult play_football_match();
    Team get_winning_team();
    ~Match();
};

#endif