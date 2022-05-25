#include "CommonSkillCollection.h"

CommonSkillCollection::CommonSkillCollection(){}

// when Common Skill collection object is created, it will take in the skills
CommonSkillCollection::CommonSkillCollection(Attribute _passing, Attribute _ball_control, Attribute _dribbling){
    passing = _passing;
    ball_control = _ball_control;
    dribbling = _dribbling;
}

// sets passing of player
Attribute CommonSkillCollection::get_passing(){return passing;}

// sets ball control of player       
Attribute CommonSkillCollection::get_ball_control(){return ball_control;}

// sets dribbling of player
Attribute CommonSkillCollection::get_dribbling(){return dribbling;}

// sets passing of player
void CommonSkillCollection::set_passing(Attribute _passing){passing = _passing;}

// sets ball control of player
void CommonSkillCollection::set_ball_control(Attribute _ball_control){ball_control = _ball_control;}

// sets dribbling of player
void CommonSkillCollection::set_dribbling(Attribute _dribbling){dribbling = _dribbling;}

// returns the sum of all three attribute ratings.
int CommonSkillCollection::total_skill_rating(){
     return passing.get_rating() + ball_control.get_rating() + dribbling.get_rating(); // sum of all three ratings
}
