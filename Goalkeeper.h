#ifndef Goalkeeper_h
#define Goalkeeper_h

#include "Player.h"
#include "Attribute.h"
#include "PhysicalAttributeCollection.h"
#include <string>

class Goalkeeper: public Player {
private:
    Attribute distributing;
    Attribute diving;
    Attribute handling;

public:
    Goalkeeper();
    Goalkeeper(string _name, PhysicalAttributeCollection _physical_attribute_ratings, 
    CommonSkillCollection _common_skill_ratings, float _salary, Attribute _distributing, Attribute _driving, Attribute _handling);
    void set_distributing(Attribute _distributing);
    void set_diving(Attribute _diving);
    void set_handling(Attribute _handling);
    Attribute get_distributing();
    Attribute get_diving();
    Attribute get_handling();
    void print_info();
    float total_player_rating();
    ~Goalkeeper();
};

#endif