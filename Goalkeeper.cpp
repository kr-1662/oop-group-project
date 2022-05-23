#include "Goalkeeper.h"
#include <iostream>

using namespace std;

Goalkeeper::Goalkeeper(){}

Goalkeeper::Goalkeeper(string _name, PhysicalAttributeCollection _physical_attribute_ratings,
    CommonSkillCollection _common_skill_ratings, float _salary, Attribute _distributing, Attribute _diving, Attribute _handling){
        name = _name;
        physical_attribute_ratings = _physical_attribute_ratings;
        common_skill_ratings = _common_skill_ratings;
        required_player_salary = _salary;
        distributing = _distributing;
        diving = _diving;
        handling = _handling;
}

void Goalkeeper::print_info(){
    Player::print_info();
    cout << "Distributing: " << distributing.get_rating() << " ";
    cout << "|| Diving: " << diving.get_rating() << " ";
    cout << "|| Handling: " << handling.get_rating() << endl;
    cout << endl;
}

float Goalkeeper::mean_player_rating(){
    return (float(physical_attribute_ratings.total_physical_attribute_rating()) + 
    float(common_skill_ratings.total_skill_rating()) + float(distributing.get_rating()) + 
    float(diving.get_rating()) + float(handling.get_rating()))/10;  // mean player rating
}
