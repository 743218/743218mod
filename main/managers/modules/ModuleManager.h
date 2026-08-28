#pragma once
#include "Module.h"

class ModuleManager {
public:
	static inline std::vector<Module*> moduleList;

  static void initialize();
  static void shutDown();
};
