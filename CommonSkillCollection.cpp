#include "CommonSkillCollection.h"

CommonSkillCollection::CommonSkillCollection()
{
    player_CommonSkillCollection = new skills[32];
}

void CommonSkillCollection:: read_in_Striker(string CommonSkillCollection.txt){
    ifstream PS_File("CommonSkillCollection.txt");
    for(int i=0;i<32;i++)
    {
       double passing; 
       double ball_control;
       double dribbling; 
       PS_File >> passing >> ball_control >> dribbling;
       
    }
}

void player_CommonSkillCollection:: print_Player_attribute(){
    for(int i=0;i<32;i++)
    {
        player_CommonSkillCollection[i].get_passing() << " " << player_CommonSkillCollection[i].get_ball_control()<< " " << player_CommonSkillCollection[i].get_dribbling()<< endl;
    }
    
}

int CommonSkillCollection::total_skill_rating() {
    double sum = passing.get_rating() + ball_control.get_rating() + dribbling.get_rating();
    double avg = sum/4;
    return avg;
}

CommonSkillCollection::~CommonSkillCollection()
{
}