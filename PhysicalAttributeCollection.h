#ifndef PhysicalAttributeCollection_h
#define PhysicalAttributeCollection_h

#include "Attribute.h"

class PhysicalAttributeCollection: public Attribute
{
public:
    Attribute stamina;
    Attribute speed;
    Attribute strength;
    Attribute agility;
    PhysicalAttributeCollection();
    int total_physical_attribute_rating();
    ~PhysicalAttributeCollection();
};


#endif
