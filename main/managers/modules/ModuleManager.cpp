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
