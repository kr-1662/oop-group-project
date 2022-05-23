#ifndef Striker_h
#define Striker_h

#include "Attribute.h"
#include "Player.h"

// Striker is a type of player that inherits from the player class.

class Striker: public Player {
    public:
        Striker();
        Striker(string _name, PhysicalAttributeCollection _physical_attribute_ratings, 
        CommonSkillCollection _common_skill_ratings, float _salary, Attribute _finishing, Attribute _shot_power, Attribute _penalty);
        
        // function to print striker infromation
        void print_info() override;

        // function to calculate mean striker rating
        float mean_player_rating() override;
};

#endif