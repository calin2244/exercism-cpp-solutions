#include "two_fer.h"

#include <string>

namespace two_fer
{
    std::string two_fer(std::string name)
    {
        if(name == "")
            return "One for you, one for me.";
        else return "One for " + name +", one for me.";
    }
} // namespace two_fer

