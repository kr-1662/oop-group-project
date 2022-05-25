#ifndef TournamentRound_H
#define TournamentRound_H
#include "Match.h"
#include <string.h>

using namespace std;

// TournamentRound class simulates a tournament round given the teams playing and who they are playing.

class TournamentRound {
    private:
        Team* teams_in_tournament; // array of teams in the tournament
        string user_team_name; // name of the user's team
        int* fixture_team_indexes; // array indicating who plays who ie. [1,4,2,3] indicates team 1 plays team 4 and team 2 plays team 3
        int num_of_matches; // number of matches in the round
        Team* winning_teams; // array of teams that won the matches
        Match* football_matches; // array of matches in the round
        MatchResult* football_match_results; // array of match results in the round

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