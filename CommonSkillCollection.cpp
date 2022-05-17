#include "CommonSkillCollection.h"

CommonSkillCollection::CommonSkillCollection(){
    /*passing.set_rating(0);
    ball_control.set_rating(0);
    dribbling.set_rating(0);*/
}

CommonSkillCollection::CommonSkillCollection(Attribute _passing, Attribute _ball_control, Attribute _dribbling){
    passing = _passing;
    ball_control = _ball_control;
    dribbling = _dribbling;
}

Attribute CommonSkillCollection::get_passing(){return passing;}
        
Attribute CommonSkillCollection::get_ball_control(){return ball_control;}

Attribute CommonSkillCollection::get_dribbling(){return dribbling;}

void CommonSkillCollection::set_passing(Attribute _passing){passing = _passing;}

void CommonSkillCollection::set_ball_control(Attribute _ball_control){ball_control = _ball_control;}

void CommonSkillCollection::set_dribbling(Attribute _dribbling){dribbling = _dribbling;}

int CommonSkillCollection::total_skill_rating(){
     return passing.get_rating() + ball_control.get_rating() + dribbling.get_rating(); 
}

CommonSkillCollection::~CommonSkillCollection(){}