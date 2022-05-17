#include "Midfielder.h"
#include <iostream>

using namespace std;

Midfielder::Midfielder(){}

Midfielder::Midfielder(string _name, PhysicalAttributeCollection _physical_attribute_ratings, 
    CommonSkillCollection _common_skill_ratings, float _salary, Attribute _game_vision, Attribute _creativity){
        name = _name;
        physical_attribute_ratings = _physical_attribute_ratings;
        common_skill_ratings = _common_skill_ratings;
        required_player_salary = _salary;
        game_vision = _game_vision;
        creativity = _creativity;
}
    
void Midfielder::set_game_vision(Attribute _game_vision){game_vision = _game_vision;}
    
void Midfielder::set_creativity(Attribute _creativity){creativity = _creativity;}
    
Attribute Midfielder::get_game_vision(){return game_vision;}
    
Attribute Midfielder::get_creativity(){return creativity;}

void Midfielder::print_info() {
    Player::print_info();
    cout << "Game Vision: " << game_vision.get_rating() << " ";
    cout << "|| Creativity: " << creativity.get_rating() << endl;
}

float Midfielder::total_player_rating() {
    return (Player::total_player_rating() + (float(game_vision.get_rating()) + float(creativity.get_rating()))/2)/2;
}

Midfielder::~Midfielder(){}