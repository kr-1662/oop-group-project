#include "FootballLeague.h"

FootballLeague::FootballLeague(/* args */)
{
}

void FootballLeague::set_user_team(string team_name)
{
    user_selected_team_name = team_name;
    for (int i = 0; i < 8; i++)
    {
        if (football_league_teams[i].get_team_name() == team_name)
        {
            team_index = i;
        }
    }
}

FootballLeague::~FootballLeague()
{
}