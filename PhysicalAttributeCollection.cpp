#include "PhysicalAttributeCollection.h"

PhysicalAttributeCollection::PhysicalAttributeCollection(){};

// when Physical Attribute collection object is created, it will take in the attributes
PhysicalAttributeCollection::PhysicalAttributeCollection(Attribute _stamina, Attribute _speed, Attribute _strength, Attribute _agility) : 
stamina(_stamina), speed(_speed), strength(_strength), agility(_agility) {}

// sets stamina of player
void PhysicalAttributeCollection::set_stamina(Attribute _stamina){stamina = _stamina;}

// sets speed of player        
void PhysicalAttributeCollection::set_speed(Attribute _speed){speed = _speed;}

// sets strength of player
void PhysicalAttributeCollection::set_strength(Attribute _strength){strength = _strength;}

// sets agility of player
void PhysicalAttributeCollection::set_agility(Attribute _agility){agility = _agility;}
        
// returns stamina of player
Attribute PhysicalAttributeCollection::get_stamina(){return stamina;}

// returns speed of player        
Attribute PhysicalAttributeCollection::get_speed(){return speed;}

// returns strength of player
Attribute PhysicalAttributeCollection::get_strength(){return strength;}

// returns agility of player
Attribute PhysicalAttributeCollection::get_agility(){return agility;}

// returns the sum of all four attribute ratings.
int PhysicalAttributeCollection:: total_physical_attribute_rating() {
    return stamina.get_rating() + speed.get_rating() + strength.get_rating() + agility.get_rating();    // sum the physical attribute ratings together
}