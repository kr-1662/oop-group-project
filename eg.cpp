#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int main()
{
    //void read_in_Striker(string Striker.txt){
    ifstream S_File("Striker.txt");
    //S_File.open("Striker.txt");
    for(int i=0;i<8;i++)
    {
        string S_name;
        double Finishing;
        double shot_power;
        double Penalty;
        int S_Cost;
        S_File >> S_name >> Finishing >> shot_power >> Penalty >> S_Cost;
        cout <<  S_name << Finishing << shot_power << Penalty << S_Cost << endl;
    }
    //S_File.close();
}
