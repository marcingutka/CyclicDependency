//WARNING ONLY FOR VALGRIND TRAINING USAGE

#include <iostream>
#include <memory>
#include <vector>

struct Team;

struct Developer {
    Developer(const std::string& name);
    void assignTeam (std::weak_ptr<Team> team);

private:
    std::weak_ptr<Team> assignedTeam;
    std::string developerName;
};