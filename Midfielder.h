#ifndef Midfielder_h
#define Midfielder_h

#include "Attribute.h"
#include "Player.h"

// Midfielder is a type of player that inherits from the player class.

class Midfielder: public Player {
    public:
        Midfielder();
        Midfielder(string _name, PhysicalAttributeCollection _physical_attribute_ratings, 
        CommonSkillCollection _common_skill_ratings, float _salary, Attribute _game_vision, Attribute _creativity);
        
        // print striker infromation
        void print_info() override;

        // returns mean player rating
        float mean_player_rating() override;
};

#endif
