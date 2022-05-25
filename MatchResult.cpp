#include "MatchResult.h"
#include <iostream>
#include <string>

using namespace std;

// sets default values for the match result
MatchResult::MatchResult() : winner_name(""), loser_name(""), winners_score(0), losers_score(0) {}

// MatchResult class stores all important information regarding football match results.
MatchResult::MatchResult(string _winner_name, string _loser_name, int _winners_score, int _losers_score) :
winner_name(_winner_name), loser_name(_loser_name), winners_score(_winners_score), losers_score(_losers_score) {}

// sets winner team name
void MatchResult::set_winner_name(string _winner_name){winner_name = _winner_name;}

// sets loser team name
void MatchResult::set_loser_name(string _loser_name){loser_name = _loser_name;}

// sets winner team score
void MatchResult::set_winners_score(int _winners_score){winners_score = _winners_score;}

// sets loser team score
void MatchResult::set_losers_score(int _losers_score){losers_score = _losers_score;}

// returns winner team name
string MatchResult::get_winner_name(){return winner_name;}

// returns loser team name
string MatchResult::get_loser_name(){return loser_name;}

// returns winner team score
int MatchResult::get_winners_score(){return winners_score;}

// returns loser team score
int MatchResult::get_losers_score(){return losers_score;}

// printed message.
void MatchResult::print_result(){
    cout << winner_name << " defeated " << loser_name << " " << winners_score << " - " << losers_score << endl;
}