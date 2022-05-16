#ifndef PhysicalAttributeCollection_h
#define PhysicalAttributeCollection_h

#include "Attribute.h"

class PhysicalAttributeCollection: public Attribute
{
    private:
    Attribute* player_Physicalattribute;
    public:
    Attribute stamina;
    Attribute speed;
    Attribute strength;
    Attribute agility;
    PhysicalAttributeCollection();
    void print_Player_attribute();
    int total_physical_attribute_rating();
    ~PhysicalAttributeCollection();
};


#endif
