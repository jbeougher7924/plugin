#include "PluginInterface.h"
#include "PluginManager.h"
#include "PluginA.h"
#include <memory>

int main()
{
    PluginManager manager;

    // Create PluginA object and add it to the manager
    std::unique_ptr<PluginInterface> pluginA = std::make_unique<PluginA>();
    manager.addPlugin(std::move(pluginA));

    // Execute loaded plugins
    manager.executePlugins();

    return 0;
}
