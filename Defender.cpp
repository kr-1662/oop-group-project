#include "Defender.h"
#include <iostream>

using namespace std;

Defender::Defender(){}

// defender object is created with the following attributes:
// name, physical attribute ratings, common skill ratings,
// salary, tackling, marking
Defender::Defender(string _name, PhysicalAttributeCollection _physical_attribute_ratings,
CommonSkillCollection _common_skill_ratings, float _salary, Attribute _tackling, Attribute _marking){
    name = _name;
    physical_attribute_ratings = _physical_attribute_ratings;
    common_skill_ratings = _common_skill_ratings;
    required_player_salary = _salary;
    tackling = _tackling;
    marking = _marking;
}

// prints out the attributes of the defender
void Defender::print_info() {
    Player::print_info();
    cout << "Tackling: " << tackling.get_rating() << " ";
    cout << "|| Marking: " << marking.get_rating() << endl;
    cout << endl;
}

// returns average of all attributes for defender
float Defender::mean_player_rating() {
    return (float(physical_attribute_ratings.total_physical_attribute_rating()) + 
    float(common_skill_ratings.total_skill_rating()) + float(tackling.get_rating()) + float(marking.get_rating()))/9; // mean defender rating.
}
