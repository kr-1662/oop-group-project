#include "PhysicalAttributeCollection.h"

PhysicalAttributeCollection::PhysicalAttributeCollection(){
}
 
int PhysicalAttributeCollection:: total_physical_attribute_rating() {
    int sum = stamina.get_rating() + speed.get_rating() + strength.get_rating() + agility.get_rating();
    return sum;
}

PhysicalAttributeCollection::~PhysicalAttributeCollection()
{
}