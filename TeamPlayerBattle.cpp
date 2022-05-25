#include "TeamPlayerBattle.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// constructor that takes in team 1 and team 2 and initialize the private variables
TeamPlayerBattle::TeamPlayerBattle(Team _team_1, Team _team_2){
    team_1 = _team_1;
    team_2 = _team_2;
}

// function to determine the winner in team player matchups, striker of team 1 is pitted against defender of team 2
bool TeamPlayerBattle::is_win_striker_vs_defender(){
    if (team_1.get_team_members()[0]->mean_player_rating() > team_2.get_team_members()[2]->mean_player_rating()) {  // team 1 win case
        return true;
    } else if (team_1.get_team_members()[0]->mean_player_rating() < team_2.get_team_members()[2]->mean_player_rating()) {   // team 2 win case
        return false;
    } else {    // draw case
        srand(time(NULL));
        int team_1_rand_integer = 0;
        int team_2_rand_integer = 0;
        while (team_1_rand_integer == team_2_rand_integer) {
                team_1_rand_integer = round(rand() % 11);
                team_2_rand_integer = round(rand() % 11);
        }
        if (team_1_rand_integer > team_2_rand_integer) {
                return true;
        }else{
                return false;
        }
    }
}

// function to determine the winner in team player matchups, midfielder of team 1 is pitted against midfielder of team 2
bool TeamPlayerBattle::is_win_midfielder_vs_midfielder(){
    if (team_1.get_team_members()[1]->mean_player_rating() > team_2.get_team_members()[1]->mean_player_rating()) { // team 1 player win case
        return true;
    } else if (team_1.get_team_members()[1]->mean_player_rating() < team_2.get_team_members()[1]->mean_player_rating()) { // team 2 player win case
        return false;
    } else {    // draw case
        srand(time(NULL));
        int team_1_rand_integer = 0;
        int team_2_rand_integer = 0;
        while (team_1_rand_integer == team_2_rand_integer) {
                team_1_rand_integer = round(rand() % 11);
                team_2_rand_integer = round(rand() % 11);
        }
        if (team_1_rand_integer > team_2_rand_integer) {
                return true;
        }else{
                return false;
        }
    }
}

// function to determine the winner in team player matchups, defender of team 1 is pitted against striker of team 2
bool TeamPlayerBattle::is_win_defender_vs_striker(){
    if (team_1.get_team_members()[2]->mean_player_rating() > team_2.get_team_members()[0]->mean_player_rating()) {  // team 1 player win case
        return true;
    } else if (team_1.get_team_members()[2]->mean_player_rating() < team_2.get_team_members()[0]->mean_player_rating()) {   // team 2 player win case
        return false;
    } else {    // draw case
        srand(time(NULL));
        int team_1_rand_integer = 0;
        int team_2_rand_integer = 0;
        while (team_1_rand_integer == team_2_rand_integer) {
                team_1_rand_integer = round(rand() % 11);
                team_2_rand_integer = round(rand() % 11);
        }
        if (team_1_rand_integer > team_2_rand_integer) {
                return true;
        }else{
                return false;
        }
    }
}

// function to determine the winner in team player matchups, here the goalkeeper is pitted against the other team's goalkeeper
bool TeamPlayerBattle::is_win_goalkeeper_vs_goalkeeper(){
    if (team_1.get_team_members()[3]->mean_player_rating() > team_2.get_team_members()[3]->mean_player_rating()) {  // team 1 player win case
        return true;
    } else if (team_1.get_team_members()[3]->mean_player_rating() < team_2.get_team_members()[3]->mean_player_rating()) {   // team 2 player win case
        return false;
    } else {    // draw
        srand(time(NULL));
        int team_1_rand_integer = 0;
        int team_2_rand_integer = 0;
        while (team_1_rand_integer == team_2_rand_integer) {
                team_1_rand_integer = round(rand() % 11);
                team_2_rand_integer = round(rand() % 11);
        }
        if (team_1_rand_integer > team_2_rand_integer) {
                return true;
        }else{
                return false;
        }
    }
}