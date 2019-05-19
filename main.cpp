//WARNING ONLY FOR VALGRIND TRAINING USAGE

#include <memory>
#include <iostream>

#include "team.hpp"
#include "developer.hpp"
#include "scrumMaster.hpp"


int main ( ) {
    auto CppTeam1 = std::make_shared<Team>("CppTeam1");

    auto MateuszScrumMaster = std::make_shared<ScrumMaster>("Matuesz Grunwaldzki" );
    CppTeam1->assignScrumMaster(MateuszScrumMaster);

    auto TomekDev = std::make_shared<Developer>("Tomasz Kowalski");
    CppTeam1->addDev(TomekDev);

    auto KasiaDev = std::make_shared<Developer>("Katarzyna Strzegomska");
    CppTeam1->addDev(KasiaDev);

    return 0;
}