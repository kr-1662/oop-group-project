#include "Striker.h"
#include <iostream>

using namespace std;

Striker::Striker(/* args */)
{
}

void Striker::print_info() {
    cout << "Name: " << name << endl;
    cout << "Salary: " << required_player_salary << endl;
    cout << "Physical Attributes: " << physical_attribute_ratings.total_physical_attribute_rating() << endl;
    cout << "Common Skills: " << common_skill_ratings.total_skill_rating() << endl;
    cout << "Finishing: " << finishing.get_rating() << endl;
    cout << "Shot Power: " << shot_power.get_rating() << endl;
    cout << "Penalty: " << penalty.get_rating() << endl;
}

int Striker::total_player_rating() {
    return physical_attribute_ratings.total_physical_attribute_rating() + common_skill_ratings.total_skill_rating() + finishing.get_rating() + shot_power.get_rating() + penalty.get_rating();
}

Striker::~Striker()
{
}