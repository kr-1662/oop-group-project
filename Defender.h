#ifndef Defender_h
#define Defender_h

#include "Player.h"
#include "Attribute.h"

// Defender is a type of player that inherits from the player class.

class Defender: public Player {
    public:
        Defender(); // default constructor
        Defender(string _name, PhysicalAttributeCollection _physical_attribute_ratings,
        CommonSkillCollection _common_skill_ratings, float salary, Attribute _tackling, Attribute _marking); // constructor with parameters

        // print defender infromation
        void print_info() override;

        // return mean player rating
        float mean_player_rating() override;
};

#endif
