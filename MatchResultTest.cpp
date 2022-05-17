#include "MatchResult.h"
#include "Team.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    int test_num = 1;
    MatchResult m1;
    if (m1.get_loser_name() != "") {
        cout << "Error in test: " << test_num << endl;
    }
    test_num++;
    if (m1.get_winner_name() != "") {
        cout << "Error in test: " << test_num << endl;
    }
    test_num++;
    if (m1.get_losers_score() != 0) {
        cout << "Error in test: " << test_num << endl;
    }
    test_num++;
    if (m1.get_winners_score() != 0) {
        cout << "Error in test: " << test_num << endl;
    }
    m1.set_loser_name("Ben");
    m1.set_winner_name("Susan");
    m1.set_losers_score(0);
    m1.set_winners_score(3);
    m1.print_result();
}

