#include "KillAura.h"

KillAura::KillAura() : Module("KillAura", ModuleCategory::Combat, "Attack entities automatically.", 0x0) {
};

void KillAura::onBaseTick() {
  auto localPlayer = gameData.getLocalPlayer();
}
