#ifndef Striker_h
#define Striker_h

#include "Attribute.h"
#include "Player.h"

class Striker: public Player {
private:
    Attribute finishing;
    Attribute shot_power;
    Attribute penalty;
public:
    Striker();
    Striker(string _name, PhysicalAttributeCollection _physical_attribute_ratings, 
    CommonSkillCollection _common_skill_ratings, float _salary, Attribute _finishing, Attribute _shot_power, Attribute _penalty);
    void set_finishing(Attribute _finishing);
    void set_shot_power(Attribute _shot_power);
    void set_penalty(Attribute _penalty);
    Attribute get_finishing();
    Attribute get_shot_power();
    Attribute get_penalty();
    void print_info();
    float total_player_rating();
    ~Striker();
};

#endif