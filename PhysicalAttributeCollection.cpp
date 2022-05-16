#include "PhysicalAttributeCollection.h"

PhysicalAttributeCollection::PhysicalAttributeCollection(){
    player_Physicalattribute = new Attributes[32];
}

void PhysicalAttributeCollection:: read_in_Striker(string PhysicalAttributeCollection.txt){
    ifstream PA_File("PhysicalAttributeCollection.txt");
    for(int i=0;i<32;i++)
    {
       double stamina;
       double speed;
       double strength;
       double agility;
       PA_File >> stamina >> speed >> strength >> agility;

    }
}

void PhysicalAttributeCollection:: print_Player_attribute(){
    for(int i=0;i<32;i++)
    {
        player_Physicalattribute[i].get_stamina() << " " << player_Physicalattribute[i].get_speed()<< " " << player_Physicalattribute[i].get_strength()<<" "<< player_Physicalattribute[i].get_agility()<< endl;
    }

}

int PhysicalAttributeCollection:: total_physical_attribute_rating() {
    double sum = stamina.get_rating() + speed.get_rating() + strength.get_rating() + agility.get_rating();
    double avg = sum/4;
    return a;
}

PhysicalAttributeCollection::~PhysicalAttributeCollection()
{
}