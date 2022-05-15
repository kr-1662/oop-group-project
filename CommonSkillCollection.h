#ifndef CommonSkillCollection_h
#define CommonSkillCollection_h

#include "Attribute.h"

class CommonSkillCollection: public Attribute
{
public:
    Attribute passing;
    Attribute ball_control;
    Attribute dribbling;
    CommonSkillCollection();
    int total_skill_rating();
    ~CommonSkillCollection();
};

#endif
