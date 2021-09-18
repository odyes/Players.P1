#include <iostream>
#include "Features.hh"
#include "Players.hh"

int main()
{
    std::cout<<"Player 1:"<<std::endl;
    Features* f1{new Features("Majanda", "Fly", 3)};
    f1->printf();
    std::cout<<std::endl;

    std::cout<<"Player 2:"<<std::endl;
    Features* f2{new Features("Sker", "Super hit", 6)};
    f2->printf();
    std::cout<<std::endl;

    std::cout<<"Player 3:"<<std::endl;
    Features* f3{new Features("MasterDragon", "Shot", 8)};
    f3->printf();
    std::cout<<std::endl;
    
    std::cin.get();
    return 0;
}
