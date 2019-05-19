//WARNING ONLY FOR VALGRIND TRAINING USAGE

#include "team.hpp"
#include "developer.hpp"
#include "scrumMaster.hpp"

Team::Team(const std::string& name)
    : teamName(name)
{ }

void Team::assignScrumMaster(std::shared_ptr<ScrumMaster> master)
{
    scrumMaster = master;
    //scrumMaster->addTeam(shared_from_this());
    scrumMaster->addTeam(std::weak_ptr<Team>(shared_from_this()));
}

void Team::addDev(std::shared_ptr<Developer> dev)
{
    dev->assignTeam(std::weak_ptr<Team>(shared_from_this())); 
    developers.push_back(dev);
}
