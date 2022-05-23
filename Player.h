#ifndef Player_h
#define Player_h

#include "PhysicalAttributeCollection.h"
#include "CommonSkillCollection.h"
#include <string>

using namespace std;

// Player is an abstract class in which the player types defender, goalkeeper, striker and midfielder are derived.

class Player {
    protected:
        string name;    // player name
        PhysicalAttributeCollection physical_attribute_ratings;     // player physical attribute ratings
        CommonSkillCollection common_skill_ratings;     // player common skills ratings
        // various other potentially important skill based attributes
        Attribute finishing;
        Attribute shot_power;
        Attribute penalty;
        Attribute game_vision;
        Attribute creativity;
        Attribute tackling;
        Attribute marking;
        Attribute distributing;
        Attribute diving;
        Attribute handling;
        float required_player_salary;
        
    public:
        Player();
        
        // various get/set functions
        void set_name(string _name);
        void set_physical_attribute_ratings(PhysicalAttributeCollection _physical_attribute_ratings);
        void set_common_skill_ratings(CommonSkillCollection _common_skill_ratings);
        void set_required_player_salary(float _required_player_salary);
        void set_finishing(Attribute _finishing);
        void set_shot_power(Attribute _shot_power);
        void set_penalty(Attribute _penalty);
        void set_game_vision(Attribute _game_vision);
        void set_creativity(Attribute _creativity);
        void set_tackling(Attribute _tackling);
        void set_marking(Attribute _marking);
        void set_distributing(Attribute _distributing);
        void set_diving(Attribute _diving);
        void set_handling(Attribute _handling);
        Attribute get_distributing();
        Attribute get_diving();
        Attribute get_handling();
        Attribute get_tackling();
        Attribute get_marking();
        Attribute get_game_vision();
        Attribute get_creativity();
        Attribute get_finishing();
        Attribute get_shot_power();
        Attribute get_penalty();
        string get_name();
        PhysicalAttributeCollection get_physical_attribute_ratings();
        CommonSkillCollection get_common_skill_ratings();
        float get_required_player_salary() const;
        
        // virtual function to print player information
        virtual void print_info();

        // pure virtual function for calculating mean player rating.
        virtual float mean_player_rating() = 0;
};

#endif