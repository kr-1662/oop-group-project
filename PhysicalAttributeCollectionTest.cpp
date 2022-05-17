#include "PhysicalAttributeCollection.h"
#include <iostream>

using namespace std;

int main() {
    {
        int test_num = 1;
        PhysicalAttributeCollection skills;
        if (skills.get_stamina().get_rating() != 0 || skills.get_speed().get_rating() != 0 || skills.get_strength().get_rating() != 0 || skills.get_agility().get_rating() != 0){
            cout << "Error in test: " << test_num << endl;
        }
        Attribute stamina(5);
        Attribute speed(8);
        Attribute strength(4);
        Attribute agility(9);
        skills.set_stamina(stamina);
        skills.set_speed(speed);
        skills.set_strength(strength);
        skills.set_agility(agility);
        if (skills.total_physical_attribute_rating() != 26) {
            cout << "Error in test: " << test_num << endl;
        }
    }
    {
        int test_num = 2;
        Attribute stamina(2);
        Attribute speed(1);
        Attribute strength(0);
        Attribute agility(10);
        PhysicalAttributeCollection skills(stamina, speed, strength, agility);
        if (skills.get_stamina().get_rating() != 2) {
            cout << "Error in test: " << test_num << endl;
        }
        if (skills.get_speed().get_rating() != 1) {
            cout << "Error in test: " << test_num << endl;
        }
        if (skills.get_strength().get_rating() != 0) {
            cout << "Error in test: " << test_num << endl;
        }
        if (skills.get_agility().get_rating() != 10) {
            cout << "Error in test: " << test_num << endl;
        }
    }
    return 0;
}