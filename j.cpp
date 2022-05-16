#include<iostream>
#include<string>
#include<fstream>
#include "j.h"

using namespace std;

PlayerPool::PlayerPool()
{
    striker_selections = new Striker[8];
    midfielder_selections = new Midfielder[8]; 
    defender_selections = new Defender[8];
    goalkeeper_selections = new Goalkeeper[8]; 
}
void read_in_Striker(string Striker.txt){
    ifstream S_File("Striker.txt");
    S_File.open("Striker.txt");
    for(int i=0;i<8;i++)
    {
        string S_name;
        double Finishing;
        double shot_power;
        double Penalty;
        int S_Cost;
        S_File >> S_name >> Finishing >> shot_power >> Penalty >> S_Cost;
        cout <<  S_name << Finishing << shot_power << Penalty << S_Cost << endl;
        //striker_selections[i].set_S_name(S_name);
        //striker_selections[i].set_Finishing(Finishing);
        //striker_selections[i].set_shot_power(shot_power);
        //striker_selections[i].set_Penalty(penalty);
        //striker_selections[i].set_S_Cost(S_Cost);
    }
}

void read_in_Midfielder(string Midfielder.txt){
    ifstream M_File("Midfielder.txt");
    M_File.open("Midfielder.txt");
    for(int i=0;i<8;i++)
    {
        string M_name;
        double game_vision;
        double creativity;
        int M_Cost;
        M_File >> M_name >> game_vision >> creativity >> M_Cost;
        cout <<  M_name << game_vision << creativity  << M_Cost << endl;
        //midfielder_selections[i].set_M_name(M_name);
        //midfielder_selections[i].set_game_vision(game_vision);
        //midfielder_selections[i].set_creativity(creativity);
        //midfielder_selections[i].set_M_Cost(M_Cost);
    }
}

void read_in_Defender(string Defender.txt){
    ifstream D_File("Defender.txt");
    D_File.open("Defender.txt");
    for(int i=0;i<8;i++)
    {
        string D_name;
        double tackling;
        double marking;
        int D_Cost;
        D_File >> D_name >> tackling >> marking >> D_Cost;
        cout <<  D_name << tackling << marking  << D_Cost << endl;
        //defender_selections[i].set_D_name(D_name);
        //defender_selections[i].set_tackling(tackling);
        //defender_selections[i].set_marking(marking);
        //defender_selections[i].set_D_Cost(D_Cost);
    }
}

void read_in_GoalKeeper(string GoalKeeper.txt){
    ifstream G_File("GoalKeeper.txt");
    G_File.open("GoalKeeper.txt");
    for(int i=0;i<8;i++)
    {
        string G_name;
        double distributing;
        double diving;
        double handling;
        int G_Cost;
        G_File >> G_name >> distributing >> diving >> handling >> G_Cost;
        cout <<  G_name << distributing << diving  << handling << G_Cost << endl;
        //goalkeeper_selections[i].set_G_name(G_name);
        //goalkeeper_selections[i].set_distributing(distributing);
        //goalkeeper_selections[i].set_diving(diving);
        //goalkeeper_selections[i].set_handling(handling);
        //goalkeeper_selections[i].set_G_Cost(G_Cost);
    }
}

void print Striker(){
    for(int i=0;i<8;i++)
    {
        striker_selections[i].get_S_name() << "- " striker_selections[i].get_Finishing() << striker_selections[i].get_shot_power() << striker_selections[i].get_Penalty() << striker_selections[i].get_S_cost() << endl;
    }
}




