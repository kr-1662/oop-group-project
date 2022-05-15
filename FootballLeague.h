#ifndef FootballLeague_h
#define FootballLeague_h

#include "Team.h"

class FootballLeague
{
private:
    Team * football_league_teams = new Team[8];
    string user_selected_team_name;
    int team_index;
public:
    FootballLeague(/* args */);
    void read_in_teams(string filename);
    void set_user_team(string team_name);
    ~FootballLeague();
};

#endif
