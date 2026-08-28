#include "ModuleManager.h"
#include "visual/Watermark.h"

void ModuleManager::initialize() {
  moduleList.push_back(new Watermark());
  initialized = true;
}

void ModuleManager::shutDown() {
  moduleList.clear();
  initialized = false;
}

void ModuleManager::onDirextXScreenOverlay() {
  if (!Client::isInitialized()) return;

  for (auto mod : moduleList) {
    if (!mod->isEnabled()) continue;
    mod->onDirectXScreenOverlay();
  }
}

void ModuleManager::onClientTick() {
  if (!Client::isInitialized()) return;

  for (auto mod : moduleList) {
    if (!mod->isEnabled()) continue;
    mod->onClientTick();
  }
}

void ModuleManager::onBaseTick() {
  if (!Client::isInitialized()) return;

  for (auto mod : moduleList) {
    if (!mod->isEnabled()) continue;
    mod->onBaseTick();
  }
}
