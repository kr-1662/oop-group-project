#include "TournamentRound.h"
#include <iostream>
#include <string>

using namespace std;

    TournamentRound::TournamentRound(Team* _teams_in_tournament, string _user_team_name, int* _fixture_team_indexes, int _num_of_matches) :
    teams_in_tournament(_teams_in_tournament), user_team_name(_user_team_name), fixture_team_indexes(_fixture_team_indexes), num_of_matches(_num_of_matches) {
        winning_teams = new Team[num_of_matches];
        football_matches = new Match[num_of_matches];
        football_match_results = new MatchResult[num_of_matches];
    }

    Team* TournamentRound::play_tournament_round(){
        for (int i = 0; i < num_of_matches; i++) {
            football_matches[i].set_teams(teams_in_tournament[fixture_team_indexes[2*i]], teams_in_tournament[fixture_team_indexes[2*i+1]]);
            football_matches[i].play_football_match();
            football_match_results[i] = football_matches[i].get_match_result();
            winning_teams[i] = football_matches[i].get_winning_team();
        }
        return winning_teams;
    }

    void TournamentRound::print_results(){
        for (int i = 0; i < num_of_matches; i++) {
            football_match_results[i].print_result();
        }
    }

    bool TournamentRound::is_still_in_tournament(){
        for (int i = 0; i < num_of_matches; i++) {
            if (winning_teams[i].get_team_name() == user_team_name) {
                return true;
            }
        }
        return false;
    }

    TournamentRound::~TournamentRound(){
        delete [] winning_teams;
        delete [] football_matches;
    }