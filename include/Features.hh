#pragma once
#include <string>

class Features
{
    private:
      std::string name;
      std::string skills;
      unsigned int level;
    public:
      Features(std::string name, std::string skills, unsigned int level);
      //std::string GetName() const;
      //std::string GetSkills() const;
      //unsigned int GetLevel() const;
      void printf();
};