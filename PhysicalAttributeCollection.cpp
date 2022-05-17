#include "PhysicalAttributeCollection.h"

PhysicalAttributeCollection::PhysicalAttributeCollection(Attribute _stamina, Attribute _speed, Attribute _strength, Attribute _agility) : 
stamina(_stamina), speed(_speed), strength(_strength), agility(_agility) {}

PhysicalAttributeCollection::PhysicalAttributeCollection(){
<<<<<<< HEAD
    stamina.set_rating(0);
    speed.set_rating(0);
    strength.set_rating(0);
    agility.set_rating(0);
}

void PhysicalAttributeCollection::set_stamina(Attribute _stamina){stamina = _stamina;}
        
void PhysicalAttributeCollection::set_speed(Attribute _speed){speed = _speed;}

void PhysicalAttributeCollection::set_strength(Attribute _strength){strength = _strength;}

void PhysicalAttributeCollection::set_agility(Attribute _agility){agility = _agility;}
        
Attribute PhysicalAttributeCollection::get_stamina(){return stamina;}
        
Attribute PhysicalAttributeCollection::get_speed(){return speed;}

Attribute PhysicalAttributeCollection::get_strength(){return strength;}

Attribute PhysicalAttributeCollection::get_agility(){return agility;}
=======
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
>>>>>>> 01f1c0802e6ce1b162534316288651458f54ff73

int PhysicalAttributeCollection:: total_physical_attribute_rating() {
    double sum = stamina.get_rating() + speed.get_rating() + strength.get_rating() + agility.get_rating();
    double avg = sum/4;
    return avg;
}

PhysicalAttributeCollection::~PhysicalAttributeCollection(){}