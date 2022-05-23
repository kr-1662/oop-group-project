#include "Goalkeeper.h"
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

    Attribute distributing(5);
    Attribute diving(2);
    Attribute handling(8);

    Goalkeeper Ben;
    Ben.set_name("Ben Cornish");
    Ben.set_common_skill_ratings(skills);
    Ben.set_physical_attribute_ratings(ability);
    Ben.set_distributing(distributing);
    Ben.set_diving(diving);
    Ben.set_handling(handling);
    Ben.set_required_player_salary(300000);

    if (Ben.get_name() != "Ben Cornish"){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_required_player_salary() != 300000){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_distributing().get_rating() != 5){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_diving().get_rating() != 2){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_handling().get_rating() != 8){
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
    
    if (Ben.mean_player_rating() < 6.05 || Ben.mean_player_rating() > 6.15) {
        cout << "Error in test: " << test_num << endl;
        cout << Ben.mean_player_rating();
    }

    // end of test 1

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

    Attribute distributing_2(5);
    Attribute diving_2(2);
    Attribute handling_2(8);

    Goalkeeper Lauren;
    Lauren.set_name("Lauren Cornish");
    Lauren.set_common_skill_ratings(skills_2);
    Lauren.set_physical_attribute_ratings(ability_2);
    Lauren.set_distributing(distributing_2);
    Lauren.set_diving(diving_2);
    Lauren.set_handling(handling_2);
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

    Attribute distributing_3(2);
    Attribute diving_3(2);
    Attribute handling_3(2);

    Goalkeeper Keshav;
    Keshav.set_name("Keshav");
    Keshav.set_common_skill_ratings(skills_3);
    Keshav.set_physical_attribute_ratings(ability_3);
    Keshav.set_diving(diving_3);
    Keshav.set_distributing(distributing_3);
    Keshav.set_handling(handling_3);
    Keshav.set_required_player_salary(450000);

    Keshav.print_info();
    
    if (Keshav.mean_player_rating() !=4){ 
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

    Attribute distributing_4(10);
    Attribute diving_4(10);
    Attribute handling_4(10);

    Goalkeeper Jash;
    Jash.set_name("Jash");
    Jash.set_common_skill_ratings(skills_4);
    Jash.set_physical_attribute_ratings(ability_4);
    Jash.set_diving(diving_4);
    Jash.set_distributing(distributing_4);
    Jash.set_handling(handling_4);
    Jash.set_required_player_salary(450000);

    Jash.print_info();
    
    if (Jash.mean_player_rating() < 8.35 || Jash.mean_player_rating() > 8.45){ 
        cout << "Error in test: " << test_num << endl;
    }   

    return 0;
}