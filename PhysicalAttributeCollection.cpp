#include "PhysicalAttributeCollection.h"

PhysicalAttributeCollection::PhysicalAttributeCollection(){};

PhysicalAttributeCollection::PhysicalAttributeCollection(Attribute _stamina, Attribute _speed, Attribute _strength, Attribute _agility) : 
stamina(_stamina), speed(_speed), strength(_strength), agility(_agility) {}

void PhysicalAttributeCollection::set_stamina(Attribute _stamina){stamina = _stamina;}
        
void PhysicalAttributeCollection::set_speed(Attribute _speed){speed = _speed;}

void PhysicalAttributeCollection::set_strength(Attribute _strength){strength = _strength;}

void PhysicalAttributeCollection::set_agility(Attribute _agility){agility = _agility;}
        
Attribute PhysicalAttributeCollection::get_stamina(){return stamina;}
        
Attribute PhysicalAttributeCollection::get_speed(){return speed;}

Attribute PhysicalAttributeCollection::get_strength(){return strength;}

Attribute PhysicalAttributeCollection::get_agility(){return agility;}

int PhysicalAttributeCollection:: total_physical_attribute_rating() {
    return stamina.get_rating() + speed.get_rating() + strength.get_rating() + agility.get_rating();    // sum the physical attribute ratings together
}