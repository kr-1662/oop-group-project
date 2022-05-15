#ifndef Player_h
#define Player_h

#include <string>
#include "PhysicalAttributeCollection.h"
#include "CommonSkillCollection.h"

using namespace std;

class Player
{
protected:
    string name;
    PhysicalAttributeCollection physical_attribute_ratings;
    CommonSkillCollection common_skill_ratings;
    float required_player_salary;
    
public:
    Player();
    Player(string _name, float salary);
    virtual void print_info();
    virtual int total_player_rating() = 0;
    char player_battle(Player * opponent);
    ~Player();
};

#endif