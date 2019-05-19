//WARNING ONLY FOR VALGRIND TRAINING USAGE

#include <iostream>
#include <memory>
#include <vector>

struct ScrumMaster;
struct Developer;

struct Team : std::enable_shared_from_this<Team>
{
    Team(const std::string& name);
    void addDev(std::shared_ptr<Developer> dev);
    void assignScrumMaster(std::shared_ptr<ScrumMaster> master);
       
private:
    std::shared_ptr<ScrumMaster> scrumMaster;
    std::vector<std::shared_ptr<Developer>> developers;
    const std::string teamName;
};