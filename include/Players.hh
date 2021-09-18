#include "Features.hh"
#include <iostream>

Features::Features(std::string name, std::string skills, unsigned int level)
{
    this->name=name;
    this->skills=skills;
    this->level=level;
}

void Features::printf()
{
    std::cout<<"Name: "<<name<< std::endl;
    std::cout<<"Skills: "<<skills<< std::endl;
    std::cout<<"Level: "<<level<<std::endl;
}