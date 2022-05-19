#include "TeamCreator.h"
#include <iostream>

using namespace std;

TeamCreator::TeamCreator(PlayerPool &_selectable_players, FootballLeague &_football_league) {
    selectable_players = _selectable_players;
    football_league = _football_league;
}

void TeamCreator::create_user_team() {
    string input1;
    string input2;
    string input3;
    int user_team_index;
    int array_position;
    string user_team = football_league.get_user_team_name();
    string user_team_array[4] = {" ", " ", " ", " "};
    int starting_salary = 2000000;
    int remaining_salary = starting_salary;
    string player_position;
    string player_name;

    cout << "Enter Y to begin the Premier League Simulation: ";
    cin >> input1;

    if (input1 == "Y") {
        cout << "Starting Salary Cap: " << starting_salary << endl << endl;
        for (int i = 0; i < 8; i++) {
            cout << football_league.get_teams()[i].get_team_name() << endl;
        }
        cout << "Select the team you wish to manage: ";
        cin >> user_team;
        cout << "You have selected " << user_team << endl;
        while (user_team_array[0] == " " || user_team_array[1] == " " || user_team_array[2] == " " || user_team_array[3] == " ") {
            cout << "Striker, Midfielder, Defender, GoalKeeper" << endl;
            cout << "Enter the position of the player out of the above options: ";
            cin >> player_position;

            if (player_position == "Striker") {
                selectable_players.print_possible_player_selections(player_position);
                cout << "Enter the name of the player: ";
                cin >> player_name;
                cout << "what position in array is your player?" << endl;;
                cin >> array_position;
                user_team_array[0] = player_name;
                for (int i = 0; i < 4; i++) {
                    cout << user_team_array[i] << endl;
                }
                remaining_salary =  remaining_salary - selectable_players.get_striker_selections()[array_position].get_required_player_salary();
                cout << "Remaining Salary: " << remaining_salary << endl;
                cout << endl;
            }

            else if (player_position == "Midfielder") {
                selectable_players.print_possible_player_selections(player_position);
                cout << "Enter the name of the player: ";
                cin >> player_name;
                cout << "what position in array is your player?" << endl;;
                cin >> array_position;
                user_team_array[1] = player_name;
                for (int i = 0; i < 4; i++) {
                    cout << user_team_array[i] << endl;
                }
                remaining_salary =  remaining_salary - selectable_players.get_midfielder_selections()[array_position].get_required_player_salary();
                cout << "Remaining Salary: " << remaining_salary << endl;
                cout << endl;
            }

            else if (player_position == "Defender") {
                selectable_players.print_possible_player_selections(player_position);
                cout << "Enter the name of the player: ";
                cin >> player_name;
                cout << "what position in array is your player?" << endl;;
                cin >> array_position;
                user_team_array[2] = player_name;
                for (int i = 0; i < 4; i++) {
                    cout << user_team_array[i] << endl;
                }
                remaining_salary =  remaining_salary - selectable_players.get_defender_selections()[array_position].get_required_player_salary();
                cout << "Remaining Salary: " << remaining_salary << endl;
                cout << endl;
            }

            else if (player_position == "GoalKeeper") {
                selectable_players.print_possible_player_selections(player_position);
                cout << "Enter the name of the player: ";
                cin >> player_name;
                cout << "what position in array is your player?" << endl;;
                cin >> array_position;
                user_team_array[3] = player_name;
                for (int i = 0; i < 4; i++) {
                    cout << user_team_array[i] << endl;
                }
                remaining_salary =  remaining_salary - selectable_players.get_goalkeeper_selections()[array_position].get_required_player_salary();
                cout << "Remaining Salary: " << remaining_salary << endl;
                cout << endl;
            }

            else {
                cout << "Invalid input. Please try again." << endl;
            }
        }


        cout << "Congratulations! You have selected your team!" << endl;
        cout << "Are you satisfied with your current players? (Y/N): ";

        cin >> input3;
        if (input3 == "Y") {
            if (remaining_salary < 0) {
                cout << "Sorry you have exceeded your salary cap. Please try again." << endl;
                for (int i = 0; i < 4; i++) {
                    user_team_array[i] = " ";
                }
                while (user_team_array[0] == " " || user_team_array[1] == " " || user_team_array[2] == " " || user_team_array[3] == " ") {
                    cout << "Striker, Midfielder, Defender, GoalKeeper" << endl;
                    cout << "Enter the position of the player out of the above options: ";
                    cin >> player_position;

                    if (player_position == "Striker") {
                        selectable_players.print_possible_player_selections(player_position);
                        cout << "Enter the name of the player: ";
                        cin >> player_name;
                        user_team_array[0] = player_name;
                        for (int i = 0; i < 4; i++) {
                            cout << user_team_array[i] << endl;
                        }
                        remaining_salary =  remaining_salary - selectable_players.get_goalkeeper_selections()[array_position].get_required_player_salary();
                        cout << "Remaining Salary: " << remaining_salary << endl;
                        cout << endl;
                    }

                    else if (player_position == "Midfielder") {
                        selectable_players.print_possible_player_selections(player_position);
                        cout << "Enter the name of the player: ";
                        cin >> player_name;
                        user_team_array[1] = player_name;
                        for (int i = 0; i < 4; i++) {
                            cout << user_team_array[i] << endl;
                        }
                        remaining_salary =  remaining_salary - selectable_players.get_goalkeeper_selections()[array_position].get_required_player_salary();
                        cout << "Remaining Salary: " << remaining_salary << endl;
                        cout << endl;
                    }

                    else if (player_position == "Defender") {
                        selectable_players.print_possible_player_selections(player_position);
                        cout << "Enter the name of the player: ";
                        cin >> player_name;
                        user_team_array[2] = player_name;
                        for (int i = 0; i < 4; i++) {
                            cout << user_team_array[i] << endl;
                        }
                        cout << endl;
                    }

                    else if (player_position == "GoalKeeper") {
                        selectable_players.print_possible_player_selections(player_position);
                        cout << "Enter the name of the player: ";
                        cin >> player_name;
                        user_team_array[3] = player_name;
                        for (int i = 0; i < 4; i++) {
                            cout << user_team_array[i] << endl;
                        }
                        remaining_salary =  remaining_salary - selectable_players.get_goalkeeper_selections()[array_position].get_required_player_salary();
                        cout << "Remaining Salary: " << remaining_salary << endl;
                        cout << endl;
                    }

                    else {
                        cout << "Invalid input. Please try again." << endl;
                    }
                }
            }

            else {
                
            }
        }

        else if (input3 == "N") {
            cout << "Select the position of the player you wish to replace: ";
            cin >> player_position;
            if (player_position == "Striker") {
                selectable_players.print_possible_player_selections(player_position);
                cout << "Enter the name of the player: ";
                cin >> player_name;
                user_team_array[0] = player_name;
                for (int i = 0; i < 4; i++) {
                    cout << user_team_array[i] << endl;
                }
                cout << endl;
            }

            else if (player_position == "Midfielder") {
                selectable_players.print_possible_player_selections(player_position);
                cout << "Enter the name of the player: ";
                cin >> player_name;
                user_team_array[1] = player_name;
                for (int i = 0; i < 4; i++) {
                    cout << user_team_array[i] << endl;
                }
                cout << endl;
            }

            else if (player_position == "Defender") {
                selectable_players.print_possible_player_selections(player_position);
                cout << "Enter the name of the player: ";
                cin >> player_name;
                user_team_array[2] = player_name;
                for (int i = 0; i < 4; i++) {
                    cout << user_team_array[i] << endl;
                }
                cout << endl;
            }

            else if (player_position == "GoalKeeper") {
                selectable_players.print_possible_player_selections(player_position);
                cout << "Enter the name of the player: ";
                cin >> player_name;
                user_team_array[3] = player_name;
                for (int i = 0; i < 4; i++) {
                    cout << user_team_array[i] << endl;
                }
                cout << endl;
            }
        }
    }
}