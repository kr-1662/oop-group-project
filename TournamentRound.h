#ifndef TournamentRound_H
#define TournamentRound_H
#include "Match.h"
#include <string.h>

using namespace std;

// TournamentRound class simulates a tournament round given the teams playing and who they are playing.

class TournamentRound {
    private:
        Team* teams_in_tournament;
        string user_team_name;
        int* fixture_team_indexes;
        int num_of_matches;
        Team* winning_teams; 
        Match* football_matches;
        MatchResult* football_match_results;

    public:
        TournamentRound(Team* _teams_in_tournament, string _user_team_name, int* _fixture_team_indexes, int _num_of_matches);
        
        // returns array of teams which are still in the tournament
        Team* play_tournament_round();

        // prints results
        void print_results();

        // checkes if user team is still in the tournament
        bool is_still_in_tournament();
        
        ~TournamentRound();
};

#endif