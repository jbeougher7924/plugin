#ifndef PLUGIN_MANAGER_H
#define PLUGIN_MANAGER_H

#include <vector>
#include <memory>
#include "PluginInterface.h"

class PluginManager
{
private:
    std::vector<std::unique_ptr<PluginInterface>> plugins;

public:
    void addPlugin(std::unique_ptr<PluginInterface> &&plugin);
    void executePlugins();
};

#endif // PLUGIN_MANAGER_H
