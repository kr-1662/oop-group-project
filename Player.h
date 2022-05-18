#ifndef Player_h
#define Player_h

#include "PhysicalAttributeCollection.h"
#include "CommonSkillCollection.h"
#include <string>

using namespace std;

class Player {
protected:
    string name;
    PhysicalAttributeCollection physical_attribute_ratings;
    CommonSkillCollection common_skill_ratings;
    float required_player_salary;
    
public:
    Player();
    Player(string _name, PhysicalAttributeCollection _physical_attribute_ratings, CommonSkillCollection _common_skill_ratings, float salary);
    void set_name(string _name);
    void set_physical_attribute_ratings(PhysicalAttributeCollection _physical_attribute_ratings);
    void set_common_skill_ratings(CommonSkillCollection _common_skill_ratings);
    void set_required_player_salary(float _required_player_salary);
    string get_name();
    PhysicalAttributeCollection get_physical_attribute_ratings();
    CommonSkillCollection get_common_skill_ratings();
    float get_required_player_salary();
    virtual void print_info();
    virtual float total_player_rating() = 0;
    ~Player();
};

#endif