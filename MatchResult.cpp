#include "MatchResult.h"
#include <iostream>
#include <string>

using namespace std;

MatchResult::MatchResult() : winner_name(""), loser_name(""), winners_score(0), losers_score(0) {}

MatchResult::MatchResult(string _winner_name, string _loser_name, int _winners_score, int _losers_score) :
winner_name(_winner_name), loser_name(_loser_name), winners_score(_winners_score), losers_score(_losers_score) {}

void MatchResult::set_winner_name(string _winner_name){winner_name = _winner_name;}

void MatchResult::set_loser_name(string _loser_name){loser_name = _loser_name;}

void MatchResult::set_winners_score(int _winners_score){winners_score = _winners_score;}

void MatchResult::set_losers_score(int _losers_score){losers_score = _losers_score;}

string MatchResult::get_winner_name(){return winner_name;}

string MatchResult::get_loser_name(){return loser_name;}

int MatchResult::get_winners_score(){return winners_score;}

int MatchResult::get_losers_score(){return losers_score;}

void MatchResult::print_result(){
    cout << winner_name << " defeated " << loser_name << " " << winners_score << " - " << losers_score << endl;
}

MatchResult::~MatchResult(){}