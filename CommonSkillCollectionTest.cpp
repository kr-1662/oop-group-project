#include "CommonSkillCollection.h"
#include <iostream>

using namespace std;

int main() {
    {
        int test_num = 1;
        CommonSkillCollection skills;
        if (skills.get_ball_control().get_rating() != 0 || skills.get_dribbling().get_rating() != 0 || skills.get_passing().get_rating() != 0){
            cout << "Error in test: " << test_num << endl;
        }
        Attribute passing(5);
        Attribute dribbling(8);
        Attribute ball_control(4);
        skills.set_ball_control(ball_control);
        skills.set_dribbling(dribbling);
        skills.set_passing(passing);
        if (skills.total_skill_rating() != 17) {
            cout << "Error in test: " << test_num << endl;
        }
    }
    {
        int test_num = 2;
        Attribute passing(10);
        Attribute dribbling(4);
        Attribute ball_control(2);
        CommonSkillCollection skills(passing, ball_control, dribbling);
        if (skills.get_passing().get_rating() != 10) {
            cout << "Error in test: " << test_num << endl;
        }
        if (skills.get_ball_control().get_rating() != 2) {
            cout << "Error in test: " << test_num << endl;
        }
        if (skills.get_dribbling().get_rating() != 4) {
            cout << "Error in test: " << test_num << endl;
        }
    }
    return 0;
}