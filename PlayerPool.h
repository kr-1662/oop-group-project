#include<iostream>
#include<string>
#ifndef PlayerPool_H_
#define PlayerPool_H_
using namespace std;

class PlayerPool{
    private:
    Player* striker_selections;
    Player* midfielder_selections; 
    Player* defender_selections;
    Player* goalkeeper_selections;
    
    public:
    PlayerPool();
    void read_in_players(string filename);
    void print_possible_player_selections(string position);
    Player* select_player(string name);
    ~PlayerPool();
};
#endif
