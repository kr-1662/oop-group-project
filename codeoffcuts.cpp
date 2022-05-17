char Player::player_battle(Player * opponent) {
    if (this->total_player_rating() > opponent->total_player_rating()) {
        return 'W';
    }
     
    else if (this->total_player_rating() < opponent->total_player_rating()) {
        return 'L';
    } 
    
    else {
        return 'D';
    }
}