#ifndef MatchResult_H
#define MatchResult_H
#include <iostream>
#include <string>

using namespace std;

// MatchResult class stores all important information regarding football match results.

class MatchResult {
    private:
        string winner_name;
        string loser_name;
        int winners_score;
        int losers_score;

    public:
        MatchResult();
        MatchResult(string _winner_name, string _loser_name, int _winners_score, int _losers_score);
        
        // set/get functions
        void set_winner_name(string _winner_name);
        void set_loser_name(string _loser_name);
        void set_winners_score(int _winners_score);
        void set_losers_score(int _losers_score);
        string get_winner_name();
        string get_loser_name();
        int get_winners_score();
        int get_losers_score();

        // function to print results
        void print_result();
};

#endif