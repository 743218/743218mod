#pragma once
#include "../../sdk/GameData.h"
#include "ModuleCategory.h"

class Module {
private:
	std::string moduleName;
	std::string moduleDescription;
	int key;
	bool enabled;

public:
	Module(std::string moduleName, ModuleCategory category, std::string description, int key = 0x0);
	~Module();

	virtual void onDirextXScreenOverlay();
	virtual void onClientTick();

	static inline bool isEnabled() {
		return enabled;
	};

	static inline void setEnabled(bool value) {
		enabled = value;
	}

	static inline void toggle() {
		enabled = !enabled;
	}
};
