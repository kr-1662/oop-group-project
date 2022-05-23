#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
    name = "";      // default name
    required_player_salary = 0;     // default player salary
}

void Player::set_name(string _name){name = _name;}
    
void Player::set_physical_attribute_ratings(PhysicalAttributeCollection _physical_attribute_ratings){physical_attribute_ratings = _physical_attribute_ratings;}
    
void Player::set_common_skill_ratings(CommonSkillCollection _common_skill_ratings){common_skill_ratings = _common_skill_ratings;}
    
void Player::set_required_player_salary(float _required_player_salary){required_player_salary = _required_player_salary;}

void Player::set_finishing(Attribute _finishing){finishing = _finishing;}

void Player::set_shot_power(Attribute _shot_power){shot_power = _shot_power;}

void Player::set_penalty(Attribute _penalty){penalty = _penalty;}

void Player::set_game_vision(Attribute _game_vision){game_vision = _game_vision;}
    
void Player::set_creativity(Attribute _creativity){creativity = _creativity;}

void Player::set_tackling(Attribute _tackling){tackling = _tackling;}

void Player::set_marking(Attribute _marking){marking = _marking;}

void Player::set_distributing(Attribute _distributing){distributing = _distributing;}

void Player::set_diving(Attribute _diving){diving = _diving;}

void Player::set_handling(Attribute _handling){handling = _handling;}

Attribute Player::get_distributing(){return distributing;}

Attribute Player::get_diving(){return diving;}

Attribute Player::get_handling(){return handling;}

Attribute Player::get_tackling(){return tackling;}

Attribute Player::get_marking(){return marking;}
    
Attribute Player::get_game_vision(){return game_vision;}
    
Attribute Player::get_creativity(){return creativity;}

Attribute Player::get_finishing(){return finishing;}

Attribute Player::get_shot_power(){return shot_power;}

Attribute Player::get_penalty(){return penalty;}
    
string Player::get_name(){return name;}
    
PhysicalAttributeCollection Player::get_physical_attribute_ratings(){return physical_attribute_ratings;}
    
CommonSkillCollection Player::get_common_skill_ratings(){return common_skill_ratings;}
    
float Player::get_required_player_salary() const {return required_player_salary;}

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
