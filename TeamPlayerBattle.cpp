#include "TeamPlayerBattle.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

TeamPlayerBattle::TeamPlayerBattle(Team _team_1, Team _team_2){
    team_1 = _team_1;
    team_2 = _team_2;
}

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