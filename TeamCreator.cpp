#include "TeamCreator.h"
#include <iostream>
#include <string>

using namespace std;

// constructor that takes in a pointer to a PlayerPool and a pointer to a FootballLeague
TeamCreator::TeamCreator(PlayerPool* _selectable_players, FootballLeague* _football_league) {
    selectable_players = _selectable_players;
    football_league = _football_league;
}

// intializes the user team
void TeamCreator::create_user_team() {
    char progression_input = ' ';
    int progression_flag = 0;
    string player_position;
    int starting_salary = 2000000;
    string user_team_names[4] = {"<Striker>", "<Midfielder>", "<Defender>", "<Goalkeeper>"};
    int positions_filled[4] = {0,0,0,0};
    bool is_team_full = false;
    int user_team_salaries[4] = {0,0,0,0};
    int remaining_salary = starting_salary;
    string player_name;

    while (progression_input != 'Y'){
        cout << "Enter Y to begin the Premier League Simulation: ";
        cin >> progression_input;
        cout << endl;
        if (progression_input != 'Y') {
            cout << "Not a valid input." << endl;
        }
    } 

    progression_input = ' ';   
        
    for (int i = 0; i < 8; i++) {
            cout << football_league->get_teams()[i].get_team_name() << endl;
        }
    cout << endl;
    
    football_league->set_user_team_name();
    football_league->reset_user_team();
        
    cout << "You have selected " << football_league->get_user_team_name() << endl << endl;

    cout << "The salary Cap for your team is " << starting_salary << ". Spend it wisely!" << endl << endl;
        
    bool is_team_created = false;
        
    while (is_team_created == false) {
        
        cout << "Striker, Midfielder, Defender, Goalkeeper" << endl << endl;
        cout << "Enter the position of the player out of the above options: ";
        cin >> player_position;
        cout << endl;

        if (player_position == "Striker") {
            selectable_players->print_possible_player_selections(player_position);
            cout << endl;
            cout << "Your remaining salary cap: " << remaining_salary << endl << endl;
            cout << "Enter the name of the player you wish to add to your team from the above list: ";
            cin >> player_name;
            
            while (progression_flag == 0){
                for (int i = 0; i < 8; i++){
                    if (selectable_players->get_striker_selections()[i].get_name() == player_name){
                        progression_flag = 1;
                    }
                }
                if (progression_flag == 0){
                    cout << "Not a valid name. Enter again: ";
                    cin >> player_name;
                }
            }
            progression_flag = 0;

            football_league->set_user_team_striker(selectable_players->select_striker(player_name));

            user_team_names[0] = player_name;
            positions_filled[0] = 1;
            remaining_salary =  remaining_salary + user_team_salaries[0];
            user_team_salaries[0] = football_league->get_team(football_league->get_user_team_name())->get_team_members()[0]->get_required_player_salary();
            remaining_salary =  remaining_salary - user_team_salaries[0];

            cout << endl;
            is_team_full = true;
            for (int i = 0; i < 4; i++) {
                    cout << user_team_names[i] << " | Player salary: " << user_team_salaries[i] << endl;
                    if (positions_filled[i] == 0){
                        is_team_full = false;
                    }
            }
            cout << endl;

            cout << "Your remaining salary cap is : " << remaining_salary << endl << endl; 

            while (progression_input != 'Y' && progression_input != 'N'){
                cout << "Is your team completed? (Y/N): ";
                cin >> progression_input;
                cout << endl;
                if (progression_input != 'Y' && progression_input != 'N') {
                    cout << "Not a valid input." << endl;
                }
            }

            if (progression_input == 'Y'){
                if (is_team_full && remaining_salary >= 0){
                    cout << "Congratulations you have finished creating your team!" << endl << endl;
                    is_team_created = true;
                }else{
                    cout << "Your team is not valid. Either it hasn't been completely filled or your total team cost is over the salary cap." << endl;
                    cout << "You need to alter your team." << endl << endl;
                }
            }
            progression_input = ' ';

        } else if (player_position == "Midfielder") {
            
            selectable_players->print_possible_player_selections(player_position);
            cout << endl;
            cout << "Your remaining salary cap: " << remaining_salary << endl;
            cout << "Enter the name of the player you wish to add to your team from the above list: ";
            cin >> player_name;
            
            while (progression_flag = 0){
                for (int i = 0; i < 8; i++){
                    if (selectable_players->get_midfielder_selections()[i].get_name() == player_name){
                        progression_flag = 1;
                    }
                }
                if (progression_flag == 0){
                    cout << "Not a valid name. Enter again: ";
                    cin >> player_name;
                }
            }
            progression_flag = 1;

            football_league->set_user_team_midfielder(selectable_players->select_midfielder(player_name));

            user_team_names[1] = player_name;
            positions_filled[1] = 1;
            remaining_salary =  remaining_salary + user_team_salaries[1];
            user_team_salaries[1] = football_league->get_team(football_league->get_user_team_name())->get_team_members()[1]->get_required_player_salary();
            remaining_salary =  remaining_salary - user_team_salaries[1];

            cout << endl;
            is_team_full = true;
            for (int i = 0; i < 4; i++) {
                    cout << user_team_names[i] << " | Player salary: " << user_team_salaries[i] << endl;
                    if (positions_filled[i] == 0){
                        is_team_full = false;
                    }
            }
            cout << endl;

            cout << "Your remaining salary cap is : " << remaining_salary << endl << endl; 

            while (progression_input != 'Y' && progression_input != 'N'){
                cout << "Is your team completed? (Y/N): ";
                cin >> progression_input;
                cout << endl;
                if (progression_input != 'Y' && progression_input != 'N') {
                    cout << "Not a valid input." << endl;
                }
            }

            if (progression_input == 'Y'){
                if (is_team_full && remaining_salary >= 0){
                    cout << "Congratulations you have finished creating your team!" << endl << endl;
                    is_team_created = true;
                }else{
                    cout << "Your team is not valid. Either it hasn't been completely filled or your total team cost is over the salary cap." << endl;
                    cout << "You need to alter your team." << endl << endl;
                }
            }
            progression_input = ' ';

        } else if (player_position == "Defender") {
            
            selectable_players->print_possible_player_selections(player_position);
            cout << endl;
            cout << "Your remaining salary cap: " << remaining_salary << endl;
            cout << "Enter the name of the player you wish to add to your team from the above list: ";
            cin >> player_name;
            
            while (progression_flag == 0){
                for (int i = 0; i < 8; i++){
                    if (selectable_players->get_defender_selections()[i].get_name() == player_name){
                        progression_flag = 1;
                    }
                }
                if (progression_flag == 0){
                    cout << "Not a valid name. Enter again: ";
                    cin >> player_name;
                }
            }
            progression_flag = 0;

            football_league->set_user_team_defender(selectable_players->select_defender(player_name));

            user_team_names[2] = player_name;
            positions_filled[2] = 1;
            remaining_salary =  remaining_salary + user_team_salaries[2];
            user_team_salaries[2] = football_league->get_team(football_league->get_user_team_name())->get_team_members()[2]->get_required_player_salary();
            remaining_salary =  remaining_salary - user_team_salaries[2];

            cout << endl;
            is_team_full = true;
            for (int i = 0; i < 4; i++) {
                    cout << user_team_names[i] << " | Player salary: " << user_team_salaries[i] << endl;
                    if (positions_filled[i] == 0){
                        is_team_full = false;
                    }
            }
            cout << endl;

            cout << "Your remaining salary cap is : " << remaining_salary << endl << endl; 

            while (progression_input != 'Y' && progression_input != 'N'){
                cout << "Is your team completed? (Y/N): ";
                cin >> progression_input;
                cout << endl;
                if (progression_input != 'Y' && progression_input != 'N') {
                    cout << "Not a valid input." << endl;
                }
            }

            if (progression_input == 'Y'){
                if (is_team_full && remaining_salary >= 0){
                    cout << "Congratulations you have finished creating your team!" << endl << endl;
                    is_team_created = true;
                }else{
                    cout << "Your team is not valid. Either it hasn't been completely filled or your total team cost is over the salary cap." << endl;
                    cout << "You need to alter your team." << endl << endl;
                }
            }
            progression_input = ' ';

        } else if (player_position == "Goalkeeper") {
            
            selectable_players->print_possible_player_selections(player_position);
            cout << endl;
            cout << "Your remaining salary cap: " << remaining_salary << endl;
            cout << "Enter the name of the player you wish to add to your team from the above list: ";
            cin >> player_name;
            
            while (progression_flag == 0){
                for (int i = 0; i < 8; i++){
                    if (selectable_players->get_goalkeeper_selections()[i].get_name() == player_name){
                        progression_flag = 1;
                    }
                }
                if (progression_flag == 0){
                    cout << "Not a valid name. Enter again: ";
                    cin >> player_name;
                }
            }
            progression_flag = 0;

            football_league->set_user_team_goalkeeper(selectable_players->select_goalkeeper(player_name));

            user_team_names[3] = player_name;
            positions_filled[3] = 1;
            remaining_salary =  remaining_salary + user_team_salaries[3];
            user_team_salaries[3] = football_league->get_team(football_league->get_user_team_name())->get_team_members()[3]->get_required_player_salary();
            remaining_salary =  remaining_salary - user_team_salaries[3];

            cout << endl;
            is_team_full = true;
            for (int i = 0; i < 4; i++) {
                    cout << user_team_names[i] << " | Player salary: " << user_team_salaries[i] << endl;
                    if (positions_filled[i] == 0){
                        is_team_full = false;
                    }
            }
            cout << endl;

            cout << "Your remaining salary cap is : " << remaining_salary << endl << endl; 

            while (progression_input != 'Y' && progression_input != 'N'){
                cout << "Is your team completed? (Y/N): ";
                cin >> progression_input;
                cout << endl;
                if (progression_input != 'Y' && progression_input != 'N') {
                    cout << "Not a valid input." << endl;
                }
            }

            if (progression_input == 'Y'){
                if (is_team_full && remaining_salary >= 0){
                    cout << "Congratulations you have finished creating your team!" << endl << endl;
                    is_team_created = true;
                }else{
                    cout << "Your team is not valid. Either it hasn't been completely filled or your total team cost is over the salary cap." << endl;
                    cout << "You need to alter your team." << endl << endl;
                }
            }
            progression_input = ' ';

        } else {
            cout << "Invalid input" << endl << endl;
        }
    }
}

        