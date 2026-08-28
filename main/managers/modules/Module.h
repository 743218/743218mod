#pragma once
#include "../../sdk/GameData.h"
#include "ModuleCategory.h"

class Module {
private:
  std::string moduleName;
  std::string moduleDescription;
  int key;
public:
  Module(std::string moduleName, ModuleCategory category, std::string description, int key = 0x0);
	~Module();

  virtual void onDirextXScreenOverlay();
  virtual void onClientTick();
};
