#include "PlayerBattleWinChecker.h"
#include <iostream>
#include <string>

using namespace std;

PlayerBattleWinChecker::PlayerBattleWinChecker(Player* _team_1_players, Player* _team_2_players, int _team_1_player_index, int _team_2_player_index) : 
team_1_player_index(_team_1_players), team_2_players(_team_2_players), team_1_player_index(_team_1_player_index), team_2_player_index(_team_2_player_index) {}

bool PlayerBattleWinChecker::is_win(){
    char battle_result;
    battle_result = team_1_players[team_1_player_index].player_battle(team_2_players[team_2_player_index]);
    srand(2022);
    int team_1_rand_integer = 0;
    int team_2_rand_integer = 0;
    switch (battle_result) {
        case 'W':
            return true;
            break;
        case 'L':
            return false;
            break;
        default:
            while (team_1_rand_integer == team_2_rand_integer) {
                team_1_rand_integer = round(rand() % 11);
                team_2_rand_integer = round(rand() % 11);
            }
            if (team_1_rand_integer > team_2_rand_integer) {
                return true;
            }else{
                return false;
            }
            break;
    }
}

PlayerBattleWinChecker::~PlayerBattleWinChecker(){}