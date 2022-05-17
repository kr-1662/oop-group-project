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


    player_Physicalattribute = new Attributes[32];
}

void PhysicalAttributeCollection:: read_in_Striker(string PhysicalAttributeCollection.txt){
    ifstream PA_File("PhysicalAttributeCollection.txt");
    for(int i=0;i<32;i++)
    {
       double stamina;
       double speed;
       double strength;
       double agility;
       PA_File >> stamina >> speed >> strength >> agility;

    }
}

void PhysicalAttributeCollection:: print_Player_attribute(){
    for(int i=0;i<32;i++)
    {
        player_Physicalattribute[i].get_stamina() << " " << player_Physicalattribute[i].get_speed()<< " " << player_Physicalattribute[i].get_strength()<<" "<< player_Physicalattribute[i].get_agility()<< endl;
    }

}

class PhysicalAttributeCollection: public Attribute
{
    private:
    Attribute* player_Physicalattribute;
    public:
    Attribute stamina;
    Attribute speed;
    Attribute strength;
    Attribute agility;
    PhysicalAttributeCollection();
    void print_Player_attribute();
    int total_physical_attribute_rating();
    ~PhysicalAttributeCollection();
