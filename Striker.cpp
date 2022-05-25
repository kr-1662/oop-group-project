#include "Striker.h"
#include <iostream>

using namespace std;

Striker::Striker(){}

// striker object is created with the following attributes: 
// name, physical attribute ratings, common skill ratings, 
// salary, finishing, 
// shot power, penalty
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

// prints out the attributes of the striker
void Striker::print_info() {
    Player::print_info();   // use print info from parent class
    cout << "Finishing: " << finishing.get_rating() << " ";
    cout << "|| Shot Power: " << shot_power.get_rating() << " ";
    cout << "|| Penalty: " << penalty.get_rating() << endl;
    cout << endl;
}

// returns average of all attributes for striker
float Striker::mean_player_rating() {
    return (float(physical_attribute_ratings.total_physical_attribute_rating()) + 
    float(common_skill_ratings.total_skill_rating()) + float(finishing.get_rating()) + 
    float(shot_power.get_rating()) + float(penalty.get_rating()))/10;       // mean of all 10 associated ratings
}
