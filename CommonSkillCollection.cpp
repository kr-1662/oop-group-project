#include "CommonSkillCollection.h"

CommonSkillCollection::CommonSkillCollection()
{
}

int CommonSkillCollection::total_skill_rating() {
    int sum = passing.get_rating() + ball_control.get_rating() + dribbling.get_rating();
    return sum;
}

CommonSkillCollection::~CommonSkillCollection()
{
}