#ifndef Midfielder_h
#define Midfielder_h

#include "Attribute.h"
#include "Player.h"

class Midfielder: public Player {
private:
    Attribute game_vision;
    Attribute creativity;
public:
    Midfielder();
    Midfielder(string _name, PhysicalAttributeCollection _physical_attribute_ratings, 
    CommonSkillCollection _common_skill_ratings, float _salary, Attribute _game_vision, Attribute _creativity);
    void set_game_vision(Attribute _game_vision);
    void set_creativity(Attribute _creativity);
    Attribute get_game_vision();
    Attribute get_creativity();
    void print_info();
    float total_player_rating();
    ~Midfielder();
};

#endif
