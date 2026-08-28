#pragma once
#include "../../sdk/GameData.h"

class Module {
private:
  std::string moduleName;
  std::string moduleDescription;
  int key;
public:
  Module(std::string moduleName, ModuleCategory category, std::string description, int key = 0x0);
	~Module();

  void onDirextXScreenOverlay();
  void onClientTick();
};
