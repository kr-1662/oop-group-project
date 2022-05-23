#ifndef PhysicalAttributeCollection_h
#define PhysicalAttributeCollection_h

#include "Attribute.h"

// A class containing four physical attributes that are common to every player. These are stamina, speed, strength and agility.

class PhysicalAttributeCollection {
    private:
        Attribute stamina;
        Attribute speed;
        Attribute strength;
        Attribute agility;       
    
    public:
        PhysicalAttributeCollection();
        PhysicalAttributeCollection(Attribute _stamina, Attribute _speed, Attribute _strength, Attribute _agility);
        
        // various get/set functions
        void set_stamina(Attribute _stamina);
        void set_speed(Attribute _speed);
        void set_strength(Attribute _strength);
        void set_agility(Attribute _agility);
        Attribute get_stamina();
        Attribute get_speed();
        Attribute get_strength();
        Attribute get_agility();

        // returns the sum of all four attribute ratings.
        int total_physical_attribute_rating();
};


#endif
