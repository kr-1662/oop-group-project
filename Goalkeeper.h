#ifndef Goalkeeper_h
#define Goalkeeper_h

#include "Player.h"
#include "Attribute.h"
#include "PhysicalAttributeCollection.h"
#include <string>

// Goalkeeper is a type of player that inherits from the player class.

class Goalkeeper: public Player {
    public:
        Goalkeeper(); // default constructor
        Goalkeeper(string _name, PhysicalAttributeCollection _physical_attribute_ratings, 
        CommonSkillCollection _common_skill_ratings, float _salary, Attribute _distributing, Attribute _driving, Attribute _handling); // constructor with parameters
  
        // print goalkeeper info
        void print_info() override;

        // returns mean goalkeeper rating
        float mean_player_rating() override;
};

#endif