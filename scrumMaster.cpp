#include "scrumMaster.hpp"
#include "team.hpp"

ScrumMaster::ScrumMaster(const std::string& name)
:scrumMasterName(name)
{
}

void ScrumMaster::addTeam (const std::weak_ptr<Team>& team )
{
    assignedTeams.push_back(team);
}