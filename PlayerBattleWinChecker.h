#ifndef PlayerBattleWinChecker_H
#define PlayerBattleWinChecker_H
#include "Striker.h"
#include "Midfielder.h"
#include "Defender.h"
#include "Goalkeeper.h"
#include <string>

using namespace std;

class PlayerBattleWinChecker {
    private:
    Player* team_1_players;
    Player* team_2_players;
    int team_1_player_index; // index of player involved in battle from team 1.
    int team_2_player_index; // index of player involved in battle from team 2.
    
    public:
    PlayerBattleWinChecker();
    bool is_win();
    ~PlayerBattleWinChecker();
};

#endif