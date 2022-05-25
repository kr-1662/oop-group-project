#ifndef PlayerPool_H_
#define PlayerPool_H_

#include "Player.h"
#include "Striker.h"
#include "Defender.h"
#include "Midfielder.h"
#include "Goalkeeper.h"
#include "Team.h"
#include <iostream>
#include <string>

using namespace std;

// playerpool is a class where all players in the simulation are loaded into the program.

class PlayerPool{
    private:
        // various player selections
        Striker* striker_selections;
        Midfielder* midfielder_selections; 
        Defender* defender_selections;
        Goalkeeper* goalkeeper_selections;
    
    public:
        PlayerPool(); // default constructor

        // Copy constructor
        PlayerPool(PlayerPool &player_pool);

        // assignment operator
        void operator=(PlayerPool player_pool);
        
        // various get/set functions
        void read_in_striker(string filename);
        void read_in_midfielder(string filename);
        void read_in_defender(string filename);
        void read_in_goalkeeper(string filename);
        Striker* get_striker_selections();
        Midfielder* get_midfielder_selections();
        Defender* get_defender_selections();
        Goalkeeper* get_goalkeeper_selections();
        
        // Print player selection options based on required position
        void print_possible_player_selections(const string position);

        // selection functions
        Striker select_striker(string name);
        Midfielder select_midfielder(string name);
        Defender select_defender(string name);
        Goalkeeper select_goalkeeper(string name);
        
        ~PlayerPool(); // destructor
};

#endif
