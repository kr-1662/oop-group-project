#ifndef CommonSkillCollection_h
#define CommonSkillCollection_h

#include "Attribute.h"

class CommonSkillCollection {
    private:
        Attribute passing;
        Attribute ball_control;
        Attribute dribbling;
    
    public:
        CommonSkillCollection();
        CommonSkillCollection(Attribute _passing, Attribute _ball_control, Attribute _dribbling);
        Attribute get_passing();
        Attribute get_ball_control();
        Attribute get_dribbling();
        void set_passing(Attribute _passing);
        void set_ball_control(Attribute _ball_control);
        void set_dribbling(Attribute _dribbling);
        int total_skill_rating();
        ~CommonSkillCollection();
};

#endif
