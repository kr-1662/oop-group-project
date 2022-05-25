#include "Midfielder.h"
#include <iostream>

using namespace std;

Midfielder::Midfielder(){}

// midfielder object is created with the following attributes:
// name, salary
// physical attribute ratings, common skill ratings,
// game vision, creativity
Midfielder::Midfielder(string _name, PhysicalAttributeCollection _physical_attribute_ratings, 
    CommonSkillCollection _common_skill_ratings, float _salary, Attribute _game_vision, Attribute _creativity){
        name = _name;
        physical_attribute_ratings = _physical_attribute_ratings;
        common_skill_ratings = _common_skill_ratings;
        required_player_salary = _salary;
        game_vision = _game_vision;
        creativity = _creativity;
}

// prints out the attributes of the midfielder
void Midfielder::print_info() {
    Player::print_info();
    cout << "Game Vision: " << game_vision.get_rating() << " ";
    cout << "|| Creativity: " << creativity.get_rating() << endl;
    cout << endl;
}

// returns average of all attributes for midfielder
float Midfielder::mean_player_rating() {
    return (float(physical_attribute_ratings.total_physical_attribute_rating()) + 
    float(common_skill_ratings.total_skill_rating()) + float(game_vision.get_rating()) + float(creativity.get_rating()))/9; // mean midfielder rating
}