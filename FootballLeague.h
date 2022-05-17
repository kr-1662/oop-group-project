#ifndef FootballLeague_h
#define FootballLeague_h

#include "Team.h"
#include "PlayerPool.h"
#include <string>

using namespace std;

class FootballLeague {
private:
    Team* football_league_teams;
    string user_selected_team_name;
    int user_team_index;
    
public:
    FootballLeague();
    void read_in_teams(PlayerPool available_players);
    void set_user_team(string team_name);
    Team get_team(string team_name);
    Team* get_teams();
    ~FootballLeague();
};

#endif
