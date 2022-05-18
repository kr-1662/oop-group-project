#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
    name = "";
    required_player_salary = 0;
}

Player::Player(string _name, PhysicalAttributeCollection _physical_attribute_ratings, CommonSkillCollection _common_skill_ratings, float _salary){
    name = _name;
    physical_attribute_ratings = _physical_attribute_ratings;
    common_skill_ratings = _common_skill_ratings;
    required_player_salary = _salary;
}

void Player::set_name(string _name){name = _name;}
    
void Player::set_physical_attribute_ratings(PhysicalAttributeCollection _physical_attribute_ratings){physical_attribute_ratings = _physical_attribute_ratings;}
    
void Player::set_common_skill_ratings(CommonSkillCollection _common_skill_ratings){common_skill_ratings = _common_skill_ratings;}
    
void Player::set_required_player_salary(float _required_player_salary){required_player_salary = _required_player_salary;}
    
string Player::get_name(){return name;}
    
PhysicalAttributeCollection Player::get_physical_attribute_ratings(){return physical_attribute_ratings;}
    
CommonSkillCollection Player::get_common_skill_ratings(){return common_skill_ratings;}
    
float Player::get_required_player_salary(){return required_player_salary;}

void Player::print_info() {
    cout << "Name: " << name << endl;
    cout << "Salary: " << required_player_salary << endl;
    cout << "Stamina: " << physical_attribute_ratings.get_stamina().get_rating() << " ";
    cout << "|| Speed: " << physical_attribute_ratings.get_speed().get_rating() << " ";
    cout << "|| Strength: " << physical_attribute_ratings.get_strength().get_rating() << " ";
    cout << "|| Agility: " << physical_attribute_ratings.get_agility().get_rating() << endl;
    cout << "Passing: " << common_skill_ratings.get_passing().get_rating() << " ";
    cout << "|| Ball Control: " << common_skill_ratings.get_ball_control().get_rating() << " ";
    cout << "|| Dribbling: " << common_skill_ratings.get_dribbling().get_rating() << endl;
}

float Player::total_player_rating() {
    return (float(physical_attribute_ratings.total_physical_attribute_rating()) + float(common_skill_ratings.total_skill_rating()))/7;
}

Player::~Player(){}