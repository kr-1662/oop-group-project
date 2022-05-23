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

        // copy constructor
        FootballLeague(FootballLeague &football_league);

        // assignment operator
        void operator=(FootballLeague football_league);
        
        // function to read in teams from player pool
        void read_in_teams(PlayerPool available_players);
        
        // set/get user team name
        void set_user_team_name();
        string get_user_team_name();

        // clear user team
        void reset_user_team();
        
        // get user team index in football league teams array.
        int get_user_team_index();
        
        // get a singular team
        Team* get_team(string team_name);

        // get all teams
        Team* get_teams();

        // set user team players
        void set_user_team_defender(Defender defender);
        void set_user_team_goalkeeper(Goalkeeper goalkeeper);
        void set_user_team_midfielder(Midfielder midfielder);
        void set_user_team_striker(Striker striker);

        ~FootballLeague();
    };

#endif
