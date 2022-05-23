#include "Midfielder.h"
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

    Attribute game_vision(5);
    Attribute creativity(2);

    Midfielder Ben;
    Ben.set_name("Ben Cornish");
    Ben.set_common_skill_ratings(skills);
    Ben.set_physical_attribute_ratings(ability);
    Ben.set_creativity(creativity);
    Ben.set_game_vision(game_vision);
    Ben.set_required_player_salary(300000);

    if (Ben.get_name() != "Ben Cornish"){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_required_player_salary() != 300000){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_game_vision().get_rating() != 5){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_creativity().get_rating() != 2){
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
    
    if (Ben.mean_player_rating() < 5.8 || Ben.mean_player_rating() > 5.9){ 
        cout << "Error in test: " << test_num << endl;
    }

    // ENd of test 1

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

    Attribute game_vision_2(5);
    Attribute creativity_2(2);

    Midfielder Lauren;
    Lauren.set_name("Lauren Cornish");
    Lauren.set_common_skill_ratings(skills_2);
    Lauren.set_physical_attribute_ratings(ability_2);
    Lauren.set_game_vision(game_vision_2);
    Lauren.set_creativity(creativity_2);
    Lauren.set_required_player_salary(450000);

    Lauren.print_info();
    
    if (Lauren.mean_player_rating() < 5.8 || Lauren.mean_player_rating() > 5.9){ 
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

    Attribute game_vision_3(1);
    Attribute creativity_3(2);

    Midfielder Keshav;
    Keshav.set_name("Keshav");
    Keshav.set_common_skill_ratings(skills_3);
    Keshav.set_physical_attribute_ratings(ability_3);
    Keshav.set_creativity(creativity_3);
    Keshav.set_game_vision(game_vision_3);
    Keshav.set_required_player_salary(450000);

    Keshav.print_info();
    
    if (Keshav.mean_player_rating() < 4.1 || Keshav.mean_player_rating() > 4.2){ 
        cout << "Error in test: " << test_num << endl;
    }

    // End of test 3
    
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

    Attribute game_vision_4(8);
    Attribute creativity_4(9);

    Midfielder Jash;
    Jash.set_name("Jash");
    Jash.set_common_skill_ratings(skills_4);
    Jash.set_physical_attribute_ratings(ability_4);
    Jash.set_creativity(creativity_4);
    Jash.set_game_vision(game_vision_4);
    Jash.set_required_player_salary(450000);

    Jash.print_info();
    
    if (Jash.mean_player_rating() < 7.8 || Jash.mean_player_rating() > 7.9){ 
        cout << "Error in test: " << test_num << endl;
    }   

    return 0;
}