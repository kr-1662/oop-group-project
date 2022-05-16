#include<iostream>
#include<string>
#include<fstream>
#include "PlayerPool.h"

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
    for(int i=0;i<8;i++)
    {
        string S_name;
        double Finishing;
        double shot_power;
        double Penalty;
        int S_Cost;
        S_File >> S_name >> Finishing >> shot_power >> Penalty >> S_Cost;
        cout <<  S_name << Finishing << shot_power << Penalty << S_Cost << endl; // testing
    }
}

void read_in_Midfielder(string Midfielder.txt){
    ifstream M_File("Midfielder.txt");
    for(int i=0;i<8;i++)
    {
        string M_name;
        double game_vision;
        double creativity;
        int M_Cost;
        M_File >> M_name >> game_vision >> creativity >> M_Cost;
        cout <<  M_name << game_vision << creativity  << M_Cost << endl; //testing
    }
}

void read_in_Defender(string Defender.txt){
    ifstream D_File("Defender.txt");
    for(int i=0;i<8;i++)
    {
        string D_name;
        double tackling;
        double marking;
        int D_Cost;
        D_File >> D_name >> tackling >> marking >> D_Cost;
        cout <<  D_name << tackling << marking  << D_Cost << endl;//testing
    }
}

void read_in_GoalKeeper(string GoalKeeper.txt){
    ifstream G_File("GoalKeeper.txt");
    for(int i=0;i<8;i++)
    {
        string G_name;
        double distributing;
        double diving;
        double handling;
        int G_Cost;
        G_File >> G_name >> distributing >> diving >> handling >> G_Cost;
        cout <<  G_name << distributing << diving  << handling << G_Cost << endl;//testing
    }
}

void print Striker(){
    for(int i=0;i<8;i++)
    {
        striker_selections[i].get_S_name() << "-" striker_selections[i].get_Finishing() << " " << striker_selections[i].get_shot_power() << " " << striker_selections[i].get_Penalty() << " " << striker_selections[i].get_S_Cost() << endl;
    }
}
void print Midfielder(){
    for(int i=0;i<8;i++)
    {
        midfielder_selections[i].get_M_name() << "-" midfielder_selections[i].get_game_vision() << " " << midfielder_selections[i].get_creativity() <<  " " << midfielder_selections[i].get_M_Cost() << endl;
    }
}
void print Defender(){
    for(int i=0;i<8;i++)
    {
        defender_selections[i].get_D_name() << "-" defender_selections[i].get_tackling() << " " << defender_selections[i].get_marking() << " " << defender_selections[i].get_D_Cost() << endl;
    }
}
void print Striker(){
    for(int i=0;i<8;i++)
    {
        goalkeeper_selections[i].get_G_name() << "-" goalkeeper_selections[i].get_distributing() << " " << goalkeeper_selections[i].get_diving() << " " << goalkeeper_selections[i].get_handling() << " " << goalkeeper_selections[i].get_G_Cost() << endl;
    }
}







