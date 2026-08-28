#pragma once
#include "Module.h"

class ModuleManager {
private:
	bool initialized = false;
public:
	static inline std::vector<Module*> moduleList;

	static void initialize();
	static void shutDown();
};
