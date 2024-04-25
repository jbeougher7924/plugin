#ifndef PLUGIN_A_H
#define PLUGIN_A_H

#include "PluginInterface.h"

class PluginA : public PluginInterface
{
public:
    std::string getName() const override;
    void execute() override;
};

#endif // PLUGIN_A_H
