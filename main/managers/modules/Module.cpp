#include "Module.h"

Module::Module(std::string moduleName, ModuleCategory category, std::string description, int key) {
  this->moduleName = moduleName;
  this->moduleDescription = description;
  this->category = category;
  this->key = key;
}
