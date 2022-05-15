#include <iostream>
#include <string>

using namespace std;

class Team {
    private: 
    string football_team_name;
    Player* team_members;
    float team_salary_requirement;

    public:
    Team();
    Team(string _football_team_name, Player* _team_members, float team_salary_requirement);
    
};