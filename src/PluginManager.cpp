#include "PluginManager.h"
#include <iostream>

void PluginManager::addPlugin(std::unique_ptr<PluginInterface> &&plugin)
{
    plugins.push_back(std::move(plugin));
}

void PluginManager::executePlugins()
{
    for (const auto &plugin : plugins)
    {
        std::cout << "Executing plugin: " << plugin->getName() << std::endl;
        plugin->execute();
    }
}
