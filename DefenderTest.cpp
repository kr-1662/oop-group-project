#include "Defender.h"
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

    Attribute tackling(5);
    Attribute marking(2);

    Defender Ben;
    Ben.set_name("Ben Cornish");
    Ben.set_common_skill_ratings(skills);
    Ben.set_physical_attribute_ratings(ability);
    Ben.set_marking(marking);
    Ben.set_tackling(tackling);
    Ben.set_required_player_salary(400000);

    if (Ben.get_name() != "Ben Cornish"){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_required_player_salary() != 400000){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_marking().get_rating() != 2){
        cout << "Error in test: " << test_num << endl;
    }
    if (Ben.get_tackling().get_rating() != 5){
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

    cout << Ben.get_tackling().get_rating() << endl;

    Ben.print_info();
    
    if (Ben.mean_player_rating() < 5.8 || Ben.mean_player_rating() > 5.9){ 
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

    Attribute tackling_2(5);
    Attribute marking_2(2);

    Defender Lauren;
    Lauren.set_name("Lauren Cornish");
    Lauren.set_common_skill_ratings(skills_2);
    Lauren.set_physical_attribute_ratings(ability_2);
    Lauren.set_marking(marking_2);
    Lauren.set_tackling(tackling_2);
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

    Attribute tackling_3(5);
    Attribute marking_3(2);

    Defender Keshav;
    Keshav.set_name("Keshav");
    Keshav.set_common_skill_ratings(skills_3);
    Keshav.set_physical_attribute_ratings(ability_3);
    Keshav.set_marking(marking_3);
    Keshav.set_tackling(tackling_3);
    Keshav.set_required_player_salary(450000);

    Keshav.print_info();
    
    if (Keshav.mean_player_rating() < 4.5 || Keshav.mean_player_rating() > 4.6){ 
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

    Attribute tackling_4(5);
    Attribute marking_4(2);

    Player* p = new Defender;
    Defender Jash;
    Jash.set_name("Jash");
    Jash.set_common_skill_ratings(skills_4);
    Jash.set_physical_attribute_ratings(ability_4);
    Jash.set_marking(marking_4);
    Jash.set_tackling(tackling_4);
    Jash.set_required_player_salary(450000);

    Jash.print_info();
    *p = Jash;
    p->print_info();
    
    if (p->mean_player_rating() < 6.7 || p->mean_player_rating() > 6.8){ 
        cout << "Error in test: " << test_num << endl;
    }

    return 0;
}