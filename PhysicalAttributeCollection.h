#ifndef PhysicalAttributeCollection_h
#define PhysicalAttributeCollection_h

#include "Attribute.h"

<<<<<<< HEAD
class PhysicalAttributeCollection {
    private:
        Attribute stamina;
        Attribute speed;
        Attribute strength;
        Attribute agility;       
    
    public:
        PhysicalAttributeCollection();
        PhysicalAttributeCollection(Attribute _stamina, Attribute _speed, Attribute _strength, Attribute _agility);
        void set_stamina(Attribute _stamina);
        void set_speed(Attribute _speed);
        void set_strength(Attribute _strength);
        void set_agility(Attribute _agility);
        Attribute get_stamina();
        Attribute get_speed();
        Attribute get_strength();
        Attribute get_agility();
        int total_physical_attribute_rating();
        ~PhysicalAttributeCollection();
=======
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
>>>>>>> 01f1c0802e6ce1b162534316288651458f54ff73
};


#endif
