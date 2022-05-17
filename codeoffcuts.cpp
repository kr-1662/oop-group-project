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

CommonSkillCollection::CommonSkillCollection()
{
    player_CommonSkillCollection = new skills[32];
}

void CommonSkillCollection:: read_in_Striker(string CommonSkillCollection.txt){
    ifstream PS_File("CommonSkillCollection.txt");
    for(int i=0;i<32;i++)
    {
       double passing; 
       double ball_control;
       double dribbling; 
       PS_File >> passing >> ball_control >> dribbling;
       
    }
}

private:
    Attribute* player_CommonSkillCollection;
public:
    Attribute passing;
    Attribute ball_control;
    Attribute dribbling;
    CommonSkillCollection();
    int total_skill_rating();
    ~CommonSkillCollection();



