#include "Defender.h"
#include <iostream>

using namespace std;

Defender::Defender(){}

Defender::Defender(string _name, PhysicalAttributeCollection _physical_attribute_ratings,
CommonSkillCollection _common_skill_ratings, float _salary, Attribute _tackling, Attribute _marking){
    name = _name;
    physical_attribute_ratings = _physical_attribute_ratings;
    common_skill_ratings = _common_skill_ratings;
    required_player_salary = _salary;
    tackling = _tackling;
    marking = _marking;
}

void Defender::set_tackling(Attribute _tackling){tackling = _tackling;}

void Defender::set_marking(Attribute _marking){marking = _marking;}

Attribute Defender::get_tackling(){return tackling;}

Attribute Defender::get_marking(){return marking;}

void Defender::print_info() {
    Player::print_info();
    cout << "Tackling: " << tackling.get_rating() << " ";
    cout << "|| Marking: " << marking.get_rating() << endl;
}

float Defender::total_player_rating() {
    return (Player::total_player_rating() + (float(tackling.get_rating()) + float(marking.get_rating()))/2)/2;
}

Defender::~Defender(){}