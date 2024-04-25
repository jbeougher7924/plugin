#include "PluginA.h"
#include <iostream>

std::string PluginA::getName() const
{
    return "PluginA";
}

void PluginA::execute()
{
    std::cout << "Hello from PluginA!" << std::endl;
}
