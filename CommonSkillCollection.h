#ifndef CommonSkillCollection_h
#define CommonSkillCollection_h

#include "Attribute.h"

// A collection of three skill attributes that every type of player has. These are passing, ball control and dribbling.

class CommonSkillCollection {
    private:
        Attribute passing;
        Attribute ball_control;
        Attribute dribbling;
    
    public:
        CommonSkillCollection();
        CommonSkillCollection(Attribute _passing, Attribute _ball_control, Attribute _dribbling);
        
        // Various get/set functions
        Attribute get_passing();
        Attribute get_ball_control();
        Attribute get_dribbling();
        void set_passing(Attribute _passing);
        void set_ball_control(Attribute _ball_control);
        void set_dribbling(Attribute _dribbling);
        
        // Returns sum of all three attribute ratings 
        int total_skill_rating();
};

#endif
