#ifndef Defender_h
#define Defender_h

#include "Player.h"
#include "Attribute.h"

class Defender: public Player {
private:
    Attribute tackling;
    Attribute marking;
public:
    Defender();
    Defender(string _name, PhysicalAttributeCollection _physical_attribute_ratings,
    CommonSkillCollection _common_skill_ratings, float salary, Attribute _tackling, Attribute _marking);
    void set_tackling(Attribute _tackling);
    void set_marking(Attribute _marking);
    Attribute get_tackling();
    Attribute get_marking();
    void print_info();
    float total_player_rating();
    ~Defender();
};

#endif
