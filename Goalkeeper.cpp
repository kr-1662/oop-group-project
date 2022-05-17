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

void Goalkeeper::set_distributing(Attribute _distributing){distributing = _distributing;}

void Goalkeeper::set_diving(Attribute _diving){diving = _diving;}

void Goalkeeper::set_handling(Attribute _handling){handling = _handling;}

Attribute Goalkeeper::get_distributing(){return distributing;}

Attribute Goalkeeper::get_diving(){return diving;}

Attribute Goalkeeper::get_handling(){return handling;}

void Goalkeeper::print_info(){
    Player::print_info();
    cout << "Distributing: " << distributing.get_rating() << " ";
    cout << "|| Diving: " << diving.get_rating() << " ";
    cout << "|| Handling: " << handling.get_rating() << endl;
}

float Goalkeeper::total_player_rating(){
    return (Player::total_player_rating() + (float(distributing.get_rating()) + float(diving.get_rating()) + float(handling.get_rating()))/3)/2;
}

Goalkeeper::~Goalkeeper(){}