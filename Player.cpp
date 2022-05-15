#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
    name = "";
    required_player_salary = 0;
}

Player::Player(string _name, float salary)
{
    name = _name;
    required_player_salary = salary;
}

void Player::print_info() {
    cout << "Name: " << name << endl;
    cout << "Salary: " << required_player_salary << endl;
    cout << "Physical Attributes: " << physical_attribute_ratings.total_physical_attribute_rating() << endl;
    cout << "Common Skills: " << common_skill_ratings.total_skill_rating() << endl;
}

int Player::total_player_rating() {
    return physical_attribute_ratings.total_physical_attribute_rating() + common_skill_ratings.total_skill_rating();
}

char Player::player_battle(Player * opponent) {
    if (this->total_player_rating() > opponent->total_player_rating()) {
        return 'W';
    }
     
    else if (this->total_player_rating() < opponent->total_player_rating()) {
        return 'L';
    } 
    
    else {
        return 'D';
    }
}

Player::~Player()
{
}