#include "PlayerPool.h"

#include <iostream>
#include <string>

int main() {
    PlayerPool selectable_players;
    selectable_players.read_in_striker("Striker.txt");
    selectable_players.read_in_midfielder("Midfielder.txt");
    selectable_players.read_in_defender("Defender.txt");
    selectable_players.read_in_goalkeeper("Goalkeeper.txt");

    selectable_players.print_possible_player_selections("Striker");
    selectable_players.print_possible_player_selections("Defender");
    selectable_players.print_possible_player_selections("Midfielder");
    selectable_players.print_possible_player_selections("Goalkeeper");
    
    return 0;
}