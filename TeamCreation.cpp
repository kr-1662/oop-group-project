#include "TeamCreation.h"
#include <iostream>

using namespace std;

TeamCreation::TeamCreation() {

}

void TeamCreation::create_user_team() {
    string input = " ";
    string input2 = " ";
    string input3 = " ";
    string player_name = " ";
    string player_position = " ";
    string team[4] = {" ", " ", " ", " "};
    int team_number;
    float Salary_requirement = 2000000;
    cout << "Enter Y to begin the premier league simulation:";
    cin >> input;

    if (input == "Y") {
        for (int i = 0; i < 8; i++) {
            cout << football_league.get_teams()[i] << endl;
        }
        cout << "Select a team you wish to manage:";
        cin >> team_number;
        if (team_number == football_league.get_user_team_index()) {
            cout << "You have selected " << football_league.get_teams()[team_number].get_team_name() << endl;
            for (int i = 0; i < 4; i++) {
                cout << "Enter the position of the player: ";
                cin >> player_position;
                selectable_players.print_possible_player_selections(player_position);
                while (input2 != "Y") {
                    cout << "Enter the name of the player you wish to add to your team:";
                    cin >> player_name;
                    cout << "Are you sure you want to add " << player_name << " to your team? Press Y to confirm:";
                    cin >> input2;
                    if (input2 != "N" || input2 != "Y") {
                        cout << "Please enter either Y or N":
                        cin >> input2;
                    }
                }
                selectable_players.select_player(player_position, player_name);
                football_league.get_teams()[i].add_player(i);
                cout << "You have added " << player_name << " to your team" << endl;
                for (int i = 0; i < 4; i++) {
                    team[i] = player_name;
                }
                cout << "Your remaining Salary is: " << Salary_requirement << endl;
                Salary_requirement -= selectable_players(player_name);
                cout << "Enter Y to finish choosing the team: ";
                cin >> input3;
                if (input3 == "Y") {
                    break;
                }

                else if (input3 == "N") {
                    continue;
                }

                else {
                    while (input3 != "Y" || input3 != "N")
                }
            }
    }
    if (Salary_requirement < 0) {
            cout << "You have exceeded your salary requirements" << endl;
            for (int i = 0; i < 4; i++) {
                team[i] = " ";
            }
            cout << "You have selected " << football_league.get_teams()[team_number].get_team_name() << endl;
            for (int i = 0; i < 4; i++) {
                cout << "Enter the position of the player: ";
                cin >> player_position;
                selectable_players.print_possible_player_selections(player_position);
                while (input2 != "Y") {
                    cout << "Enter the name of the player you wish to add to your team:";
                    cin >> player_name;
                    cout << "Are you sure you want to add " << player_name << " to your team? Press Y to confirm:";
                    cin >> input2;
                    if (input2 != "N" || input2 != "Y") {
                        cout << "Please enter either Y or N":
                        cin >> input2;
                    }
                }
                selectable_players.select_player(player_position, player_name);
                football_league.get_teams()[i].add_player(i);
                cout << "You have added " << player_name << " to your team" << endl;
                for (int i = 0; i < 4; i++) {
                    team[i] = " ";
                }
                cout << "Your remaining Salary is: " << Salary_requirement << endl;
                Salary_requirement -= _salary;
                cout << "Enter Y to finish choosing the player: ";
                cin >> input3;
                if (input3 == "Y") {
                    break;
                }
            }
        }

    else {
            cout << "You have successfully created your team" << endl;
        }
    }

}

TeamCreation::~TeamCreation() {

}
