#include "KillAura.h"

KillAura::KillAura() : Module("KillAura", ModuleCategory::Combat, "Attack entities automatically.", 0x0) {
};

void KillAura::onBaseTick() {
    auto localPlayer = gameData.getLocalPlayer();
    if (!localPlayer) return;

    for (auto actor : gameData.getActors()) {
        if (!actor) continue;
        if (!memory::canRead(actor)) continue;
        if (actor->getActorTypeComponent()->actorType != ActorType::Player) continue;
        if (actor->getPosition().distance(localPlayer->getPosition()) > 6.f) continue;
      
        gameData.getGameMode()->attack(actor);
        localPlayer->swing();
    }
}
