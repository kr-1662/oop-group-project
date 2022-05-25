#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
    name = "";      // default name
    required_player_salary = 0;     // default player salary
}

// sets name of player
void Player::set_name(string _name){name = _name;}

// sets required player salary     
void Player::set_physical_attribute_ratings(PhysicalAttributeCollection _physical_attribute_ratings){physical_attribute_ratings = _physical_attribute_ratings;}

// sets common skill ratings    
void Player::set_common_skill_ratings(CommonSkillCollection _common_skill_ratings){common_skill_ratings = _common_skill_ratings;}

// sets required player salary    
void Player::set_required_player_salary(float _required_player_salary){required_player_salary = _required_player_salary;}

// sets finishing rating
void Player::set_finishing(Attribute _finishing){finishing = _finishing;}

// sets shot power rating
void Player::set_shot_power(Attribute _shot_power){shot_power = _shot_power;}

// sets penalty rating
void Player::set_penalty(Attribute _penalty){penalty = _penalty;}

// sets game vision rating
void Player::set_game_vision(Attribute _game_vision){game_vision = _game_vision;}

// sets creativity rating    
void Player::set_creativity(Attribute _creativity){creativity = _creativity;}

// sets tackling rating
void Player::set_tackling(Attribute _tackling){tackling = _tackling;}

// sets marking rating
void Player::set_marking(Attribute _marking){marking = _marking;}

// sets distributing rating
void Player::set_distributing(Attribute _distributing){distributing = _distributing;}

// sets diving rating
void Player::set_diving(Attribute _diving){diving = _diving;}

// sets handling rating
void Player::set_handling(Attribute _handling){handling = _handling;}

// gets distribution rating
Attribute Player::get_distributing(){return distributing;}

// gets diving rating
Attribute Player::get_diving(){return diving;}

// gets handling rating
Attribute Player::get_handling(){return handling;}

// gets tackling rating
Attribute Player::get_tackling(){return tackling;}

// gets marking rating
Attribute Player::get_marking(){return marking;}

// gets game vision rating    
Attribute Player::get_game_vision(){return game_vision;}

// gets creativity rating   
Attribute Player::get_creativity(){return creativity;}

// gets finishing rating
Attribute Player::get_finishing(){return finishing;}

// gets shot power rating
Attribute Player::get_shot_power(){return shot_power;}

// gets penalty rating
Attribute Player::get_penalty(){return penalty;}

// gets name of player    
string Player::get_name(){return name;}

// gets physical attribute ratings   
PhysicalAttributeCollection Player::get_physical_attribute_ratings(){return physical_attribute_ratings;}

// gets common skill ratings    
CommonSkillCollection Player::get_common_skill_ratings(){return common_skill_ratings;}

// gets required player salary    
float Player::get_required_player_salary() const {return required_player_salary;}

// prints player details
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
