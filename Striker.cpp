#include "Striker.h"
#include <iostream>

using namespace std;

Striker::Striker(){}

Striker::Striker(string _name, PhysicalAttributeCollection _physical_attribute_ratings, 
    CommonSkillCollection _common_skill_ratings, float _salary, Attribute _finishing, Attribute _shot_power, Attribute _penalty){
        name = _name;
        physical_attribute_ratings = _physical_attribute_ratings;
        common_skill_ratings = _common_skill_ratings;
        required_player_salary = _salary;
        finishing = _finishing;
        shot_power = _shot_power;
        penalty = _penalty;
}

void Striker::set_finishing(Attribute _finishing){finishing = _finishing;}

void Striker::set_shot_power(Attribute _shot_power){shot_power = _shot_power;}

void Striker::set_penalty(Attribute _penalty){penalty = _penalty;}

Attribute Striker::get_finishing(){return finishing;}

Attribute Striker::get_shot_power(){return shot_power;}

Attribute Striker::get_penalty(){return penalty;}

void Striker::print_info() {
    Player::print_info();
    cout << "Finishing: " << finishing.get_rating() << " ";
    cout << "|| Shot Power: " << shot_power.get_rating() << " ";
    cout << "|| Penalty: " << penalty.get_rating() << endl;
}

float Striker::total_player_rating() {
    return (Player::total_player_rating() + (float(finishing.get_rating()) + float(shot_power.get_rating()) + float(penalty.get_rating()))/3)/2;
}

Striker::~Striker(){}