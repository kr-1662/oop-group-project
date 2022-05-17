#include<iostream>
#include<string>
#include<fstream>
#include "PlayerPool.h"

using namespace std;

PlayerPool::PlayerPool(){
    striker_selections = new Striker[8];
    midfielder_selections = new Midfielder[8]; 
    defender_selections = new Defender[8];
    goalkeeper_selections = new Goalkeeper[8]; 
}

void PlayerPool::read_in_striker(string filename){
    ifstream S_File(filename);
    
    string name;
    
    Attribute speed;
    Attribute stamina;
    Attribute strength;
    Attribute agility;
    Attribute passing;
    Attribute dribbling;
    Attribute ball_control;

    PhysicalAttributeCollection physical_skills;
    CommonSkillCollection technical_skills;
    
    int finishing_rating;
    int shot_power_rating;
    int penalty_rating;
    int speed_rating;
    int strength_rating;
    int stamina_rating;
    int agility_rating;
    int ball_control_rating;
    int passing_rating;
    int dribbling_rating;
    int cost;
    
    for (int i = 0; i < 8; i++){
        S_File >> name >> finishing_rating >> shot_power_rating >> penalty_rating >> speed_rating >> strength_rating >> stamina_rating >> agility_rating
        >> ball_control_rating >> passing_rating >> dribbling_rating >> cost;

        striker_selections[i].set_name(name);
        striker_selections[i].set_required_player_salary(cost);

        striker_selections[i].set_finishing(finishing_rating);
        striker_selections[i].set_shot_power(shot_power_rating);
        striker_selections[i].set_penalty(penalty_rating);

        speed.set_rating(speed_rating);
        strength.set_rating(strength_rating);
        stamina.set_rating(stamina_rating);
        agility.set_rating(agility_rating);

        physical_skills.set_speed(speed);
        physical_skills.set_strength(strength);
        physical_skills.set_stamina(stamina);
        physical_skills.set_agility(agility);

        striker_selections[i].set_physical_attribute_ratings(physical_skills);
    
        passing.set_rating(passing_rating);
        dribbling.set_rating(dribbling_rating);
        ball_control.set_rating(ball_control_rating);

        technical_skills.set_ball_control(ball_control);
        technical_skills.set_dribbling(dribbling);
        technical_skills.set_passing(passing);

        striker_selections[i].set_common_skill_ratings(technical_skills);
    }
}

void PlayerPool::read_in_midfielder(string filename){
    ifstream M_File(filename);
    
    string name;

    Attribute speed;
    Attribute stamina;
    Attribute strength;
    Attribute agility;
    Attribute passing;
    Attribute dribbling;
    Attribute ball_control;

    PhysicalAttributeCollection physical_skills;
    CommonSkillCollection technical_skills;
    
    int game_vision_rating;
    int creativity_rating;
    int speed_rating;
    int strength_rating;
    int stamina_rating;
    int agility_rating;
    int ball_control_rating;
    int passing_rating;
    int dribbling_rating;
    int cost;
    
    
    for (int i = 0; i < 8; i++){
        M_File >> name >> game_vision_rating >> creativity_rating >> speed_rating >> strength_rating >> stamina_rating >> agility_rating
        >> ball_control_rating >> passing_rating >> dribbling_rating >> cost;

        midfielder_selections[i].set_name(name);
        midfielder_selections[i].set_required_player_salary(cost);

        midfielder_selections[i].set_game_vision(game_vision_rating);
        midfielder_selections[i].set_creativity(creativity_rating);

        speed.set_rating(speed_rating);
        strength.set_rating(strength_rating);
        stamina.set_rating(stamina_rating);
        agility.set_rating(agility_rating);

        physical_skills.set_speed(speed);
        physical_skills.set_strength(strength);
        physical_skills.set_stamina(stamina);
        physical_skills.set_agility(agility);

        midfielder_selections[i].set_physical_attribute_ratings(physical_skills);
    
        passing.set_rating(passing_rating);
        dribbling.set_rating(dribbling_rating);
        ball_control.set_rating(ball_control_rating);

        technical_skills.set_ball_control(ball_control);
        technical_skills.set_dribbling(dribbling);
        technical_skills.set_passing(passing);

        midfielder_selections[i].set_common_skill_ratings(technical_skills);
    }

}

void PlayerPool::read_in_defender(string filename){
    ifstream D_File(filename);
    
    string name;

    Attribute speed;
    Attribute stamina;
    Attribute strength;
    Attribute agility;
    Attribute passing;
    Attribute dribbling;
    Attribute ball_control;

    PhysicalAttributeCollection physical_skills;
    CommonSkillCollection technical_skills;

    int marking_rating;
    int tackling_rating;
    int speed_rating;
    int strength_rating;
    int stamina_rating;
    int agility_rating;
    int ball_control_rating;
    int passing_rating;
    int dribbling_rating;
    int cost;
    
    for (int i = 0; i < 8; i++){
        D_File >> name >> marking_rating >> tackling_rating >> speed_rating >> strength_rating >> stamina_rating >> agility_rating
        >> ball_control_rating >> passing_rating >> dribbling_rating >> cost;

        defender_selections[i].set_name(name);
        defender_selections[i].set_required_player_salary(cost);

        defender_selections[i].set_marking(marking_rating);
        defender_selections[i].set_tackling(tackling_rating);

        speed.set_rating(speed_rating);
        strength.set_rating(strength_rating);
        stamina.set_rating(stamina_rating);
        agility.set_rating(agility_rating);

        physical_skills.set_speed(speed);
        physical_skills.set_strength(strength);
        physical_skills.set_stamina(stamina);
        physical_skills.set_agility(agility);

        defender_selections[i].set_physical_attribute_ratings(physical_skills);
    
        passing.set_rating(passing_rating);
        dribbling.set_rating(dribbling_rating);
        ball_control.set_rating(ball_control_rating);

        technical_skills.set_ball_control(ball_control);
        technical_skills.set_dribbling(dribbling);
        technical_skills.set_passing(passing);

        defender_selections[i].set_common_skill_ratings(technical_skills);
        
    }
}

void PlayerPool::read_in_goalkeeper(string filename){
    ifstream G_File(filename);
    
    string name;

    Attribute speed;
    Attribute stamina;
    Attribute strength;
    Attribute agility;
    Attribute passing;
    Attribute dribbling;
    Attribute ball_control;

    PhysicalAttributeCollection physical_skills;
    CommonSkillCollection technical_skills;

    int diving_rating;
    int distributing_rating;
    int handling_rating;
    int speed_rating;
    int strength_rating;
    int stamina_rating;
    int agility_rating;
    int ball_control_rating;
    int passing_rating;
    int dribbling_rating;
    int cost;

    
    for (int i = 0; i < 8; i++){
        G_File >> name >> diving_rating >> distributing_rating >> handling_rating >> speed_rating >> strength_rating >> stamina_rating >> agility_rating
        >> ball_control_rating >> passing_rating >> dribbling_rating >> cost;

        goalkeeper_selections[i].set_name(name);
        goalkeeper_selections[i].set_required_player_salary(cost);
        
        goalkeeper_selections[i].set_diving(diving_rating);
        goalkeeper_selections[i].set_handling(handling_rating);
        goalkeeper_selections[i].set_distributing(distributing_rating);

        speed.set_rating(speed_rating);
        strength.set_rating(strength_rating);
        stamina.set_rating(stamina_rating);
        agility.set_rating(agility_rating);

        physical_skills.set_speed(speed);
        physical_skills.set_strength(strength);
        physical_skills.set_stamina(stamina);
        physical_skills.set_agility(agility);

        goalkeeper_selections[i].set_physical_attribute_ratings(physical_skills);
    
        passing.set_rating(passing_rating);
        dribbling.set_rating(dribbling_rating);
        ball_control.set_rating(ball_control_rating);

        technical_skills.set_ball_control(ball_control);
        technical_skills.set_dribbling(dribbling);
        technical_skills.set_passing(passing);

        goalkeeper_selections[i].set_common_skill_ratings(technical_skills);
        
    }
}

void PlayerPool::print_possible_player_selections(string position){
    if (position == "Striker"){
        for (int i = 0; i < 8; i++){
            striker_selections[i].print_info();
        }
    }else if(position == "Midfielder"){
        for (int i = 0; i < 8; i++){
            midfielder_selections[i].print_info();
        }
    }else if(position == "Defender"){
        for (int i = 0; i < 8; i++){
            defender_selections[i].print_info();
        }
    }else{
        for (int i = 0; i < 8; i++){
            goalkeeper_selections[i].print_info();
        }
    }
}

Striker PlayerPool::select_striker(string name){
    for (int i = 0; i < 8; i++){
        if (striker_selections[i].get_name() == name){
            return striker_selections[i];
        }
    }
}

Midfielder PlayerPool::select_midfielder(string name){
    for (int i = 0; i < 8; i++){
        if (midfielder_selections[i].get_name() == name){
            return midfielder_selections[i];
        }
    }    
}
    
Defender PlayerPool::select_defender(string name){
    for (int i = 0; i < 8; i++){
        if (defender_selections[i].get_name() == name){
            return defender_selections[i];
        }
    }     
}
   
Goalkeeper PlayerPool::select_goalkeeper(string name){
    for (int i = 0; i < 8; i++){
        if (goalkeeper_selections[i].get_name() == name){
            return goalkeeper_selections[i];
        }
    }     
}

Striker* PlayerPool::get_striker_selections(){return striker_selections;}

Midfielder* PlayerPool::get_midfielder_selections(){return midfielder_selections;}
    
Defender* PlayerPool::get_defender_selections(){return defender_selections;}

Goalkeeper* PlayerPool::get_goalkeeper_selections(){return goalkeeper_selections;}

PlayerPool::~PlayerPool(){
   // delete [] striker_selections;
   // delete [] midfielder_selections;
   // delete [] defender_selections;
   // delete [] goalkeeper_selections;
}