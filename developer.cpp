//WARNING ONLY FOR VALGRIND TRAINING USAGE

#include "developer.hpp"
#include "team.hpp"

Developer::Developer(const std::string& name)
    : developerName(name)
{   }

void Developer::assignTeam (std::weak_ptr<Team> team) 
{
    assignedTeam = team;
}
