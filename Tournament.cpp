#include "Tournament.h"
#include "FixturePrinter.h"
#include "TournamentRound.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// constructor that takes in the football league
Tournament::Tournament(FootballLeague _football_league){
    football_league = _football_league;
}

// runs the tournament simulation
void Tournament::tournament_sim(){
    char progression_input = 'N'; // Stores input when user asked to progress simulation.
    
    // Quarterfinal fixture organisation
    int* team_index = new int[8]; // used to know which teams have organised fixtures already.
    for (int i = 0; i < 8; i++) {
        team_index[i] = i;
    }

    int* quarterfinals_fixture_team_indexes = new int[8]; // indexes of quarterfinal fixtures.
    
    srand(time(NULL));
    int rand_index = round(rand() % 8);

    for (int i = 0; i < 8; i++) {
        while (team_index[rand_index] == 9) {
            rand_index = round(rand() % 8);
        }
        team_index[rand_index] = 9;
        quarterfinals_fixture_team_indexes[i] = rand_index;
    }
    
    delete [] team_index;

    // Progress simulation?
    while (progression_input != 'Y'){
        cout << "Enter Y to show the quarterfinal fixtures: ";
        cin >> progression_input;
        cout << endl;
        if (progression_input != 'Y') {
            cout << "Not a valid input." << endl;
        }
    }    
        
    // Print out quarterfinal fixtures
    FixturePrinter quarterfinal_printer(football_league.get_teams(), quarterfinals_fixture_team_indexes, 4);
    quarterfinal_printer.print();

    // Progress simulation?
    progression_input = 'N';
    while (progression_input != 'Y'){
        cout << "Enter Y to play the quarterfinals: ";
        cin >> progression_input;
        cout << endl;
        if (progression_input != 'Y') {
            cout << "Not a valid input." << endl;
        }
    }   

    // Simulate quarterfinals
    TournamentRound quarterfinals(football_league.get_teams(), football_league.get_user_team_name(), quarterfinals_fixture_team_indexes, 4);
    Team* semifinalists = quarterfinals.play_tournament_round();
    quarterfinals.print_results();
    cout << endl;
    delete [] quarterfinals_fixture_team_indexes;
    
    if (quarterfinals.is_still_in_tournament()) {
        cout << "You won!";
    }else{
        cout << "You Lost! Better luck next time." << endl;
        cout << "End of simulation." << endl;
        return;
    }

    // Progress simulation?
    progression_input = 'N';
    while (progression_input != 'Y'){
        cout << "To advance to the semi-finals, enter Y: ";
        cin >> progression_input;
        cout << endl;
        if (progression_input != 'Y') {
            cout << "Not a valid input." << endl;
        }
    }  

    // Semifinal fixture organisation
    int* semifinals_fixture_team_indexes = new int[4]; // indexes of semifinal fixtures
    for (int i = 0; i < 4; i++) {
        semifinals_fixture_team_indexes[i] = i;
    }

    // Print out semifinal fixtures
    FixturePrinter semifinal_printer(semifinalists, semifinals_fixture_team_indexes, 2);
    semifinal_printer.print();

    // Progress simulation?
    progression_input = 'N';
    while (progression_input != 'Y'){
        cout << "Enter Y to play the semi-finals: ";
        cin >> progression_input;
        cout << endl;
        if (progression_input != 'Y') {
            cout << "Not a valid input." << endl;
        }
    }   

    // Simulate semi-finals
    TournamentRound semifinals(semifinalists, football_league.get_user_team_name(), semifinals_fixture_team_indexes, 2);
    Team* grandfinalists = semifinals.play_tournament_round();
    semifinals.print_results();
    cout << endl;
    delete [] semifinals_fixture_team_indexes;
    
    if (semifinals.is_still_in_tournament()) {
        cout << "You won!";
    }else{
        cout << "You Lost! Better luck next time." << endl;
        cout << "End of simulation." << endl;
        return;
    }

    // Progress simulation?
    progression_input = 'N';
    while (progression_input != 'Y'){
        cout << "To advance to the grand final, enter Y: ";
        cin >> progression_input;
        cout << endl;
        if (progression_input != 'Y') {
            cout << "Not a valid input." << endl;
        }
    } 

    // grand final fixture organisation
    int* grandfinal_fixture_team_indexes = new int[2]; // indexes of grand final fixtures
    for (int i = 0; i < 2; i++) {
        grandfinal_fixture_team_indexes[i] = i;
    }

    // Print out grand final fixture
    FixturePrinter grandfinal_printer(grandfinalists, grandfinal_fixture_team_indexes, 1);
    grandfinal_printer.print();

    // Progress simulation?
    progression_input = 'N';
    while (progression_input != 'Y'){
        cout << "Enter Y to play the grand final: ";
        cin >> progression_input;
        cout << endl;
        if (progression_input != 'Y') {
            cout << "Not a valid input." << endl;
        }
    }

    // Simulate grand final
    TournamentRound grandfinal(grandfinalists, football_league.get_user_team_name(), grandfinal_fixture_team_indexes, 1);
    Team* champion = grandfinal.play_tournament_round();
    grandfinal.print_results();
    cout << endl;
    
    if (grandfinal.is_still_in_tournament()) {
        cout << "Congratulations, you have lead " << champion->get_team_name();
        cout << " to Premier League glory!" << endl;
        cout << "End of simulation." << endl;

    }else{
        cout << "You Lost! Better luck next time." << endl;
        cout << "End of simulation." << endl;
        return;
    } 
}
