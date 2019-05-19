
#include <iostream>
#include <memory>
#include <vector>

struct Team;

struct ScrumMaster {
    ScrumMaster(const std::string& name);
    void addTeam ( const std::weak_ptr<Team>& team );
       
private:
    std::vector<std::weak_ptr<Team>> assignedTeams;
    const std::string scrumMasterName;
};