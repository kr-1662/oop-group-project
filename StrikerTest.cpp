#include "Striker.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

    int test_num = 1;
    CommonSkillCollection skills;
    skills.set_ball_control(3);
    skills.set_dribbling(6);
    skills.set_passing(9);

    PhysicalAttributeCollection ability;
    ability.set_agility(9);
    ability.set_speed(10);
    ability.set_stamina(7);
    ability.set_strength(2);

    Attribute finishing(5);
    Attribute shot_power(2);
    Attribute penalty(8);

    Striker Ben;
    Ben.set_name("Ben Cornish");
    Ben.set_common_skill_ratings(skills);
    Ben.set_physical_attribute_ratings(ability);
    Ben.set_finishing(finishing);
    Ben.set_shot_power(shot_power);
    Ben.set_penalty(penalty);
    Ben.set_required_player_salary(300000);

    if (Ben.get_name() != "Ben Cornish"){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_required_player_salary() != 300000){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_finishing().get_rating() != 5){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_shot_power().get_rating() != 2){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_penalty().get_rating() != 8){
        cout << "Error in test: " << test_num << endl;
    }   
    if (Ben.get_common_skill_ratings().get_ball_control().get_rating() != 3){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_common_skill_ratings().get_dribbling().get_rating() != 6){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_common_skill_ratings().get_passing().get_rating() != 9){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_physical_attribute_ratings().get_agility().get_rating() != 9){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_physical_attribute_ratings().get_speed().get_rating() != 10){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_physical_attribute_ratings().get_stamina().get_rating() != 7){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_physical_attribute_ratings().get_strength().get_rating() != 2){
        cout << "Error in test: " << test_num << endl;
    }

    Ben.print_info();
    
    if (Ben.mean_player_rating() < 6.05 || Ben.mean_player_rating() > 6.15){ 
        cout << "Error in test: " << test_num << endl;
    }

    // End of test 1

    test_num++;

    CommonSkillCollection skills_2;
    skills_2.set_ball_control(3);
    skills_2.set_dribbling(6);
    skills_2.set_passing(9);

    PhysicalAttributeCollection ability_2;
    ability_2.set_agility(9);
    ability_2.set_speed(10);
    ability_2.set_stamina(7);
    ability_2.set_strength(2);

    Attribute finishing_2(5);
    Attribute shot_power_2(2);
    Attribute penalty_2(8);

    Striker Lauren;
    Lauren.set_name("Lauren Cornish");
    Lauren.set_common_skill_ratings(skills_2);
    Lauren.set_physical_attribute_ratings(ability_2);
    Lauren.set_finishing(finishing_2);
    Lauren.set_penalty(penalty_2);
    Lauren.set_shot_power(shot_power_2);
    Lauren.set_required_player_salary(450000);

    Lauren.print_info();
    
    if (Lauren.mean_player_rating() < 6.05 || Lauren.mean_player_rating() > 6.15){ 
        cout << "Error in test: " << test_num << endl;
    }

    // End of test 2

    test_num++;

    CommonSkillCollection skills_3;
    skills_3.set_ball_control(3);
    skills_3.set_dribbling(4);
    skills_3.set_passing(9);

    PhysicalAttributeCollection ability_3;
    ability_3.set_agility(2);
    ability_3.set_speed(10);
    ability_3.set_stamina(4);
    ability_3.set_strength(2);

    Attribute finishing_3(1);
    Attribute shot_power_3(2);
    Attribute penalty_3(4);

    Striker Keshav;
    Keshav.set_name("Keshav");
    Keshav.set_common_skill_ratings(skills_3);
    Keshav.set_physical_attribute_ratings(ability_3);
    Keshav.set_finishing(finishing_3);
    Keshav.set_penalty(penalty_3);
    Keshav.set_shot_power(shot_power_3);
    Keshav.set_required_player_salary(450000);

    Keshav.print_info();
    
    if (Keshav.mean_player_rating() < 4.05 || Keshav.mean_player_rating() > 4.15){ 
        cout << "Error in test: " << test_num << endl;
    }

    // End of test 2
    
    test_num++;

    CommonSkillCollection skills_4;
    skills_4.set_ball_control(3);
    skills_4.set_dribbling(4);
    skills_4.set_passing(9);

    PhysicalAttributeCollection ability_4;
    ability_4.set_agility(10);
    ability_4.set_speed(10);
    ability_4.set_stamina(8);
    ability_4.set_strength(10);

    Attribute finishing_4(10);
    Attribute shot_power_4(7);
    Attribute penalty_4(9);

    Striker Jash;
    Jash.set_name("Jash");
    Jash.set_common_skill_ratings(skills_4);
    Jash.set_physical_attribute_ratings(ability_4);
    Jash.set_finishing(finishing_4);
    Jash.set_penalty(penalty_4);
    Jash.set_shot_power(shot_power_4);
    Jash.set_required_player_salary(450000);

    Jash.print_info();
    
    if (Jash.mean_player_rating() != 8){ 
        cout << "Error in test: " << test_num << endl;
    } 

    return 0;
}