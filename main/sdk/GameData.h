#include <windows.h>

class Actor;
class LocalPlayer;
class GameMode;
class Level;

class GameData {
public:
  LocalPlayer* localPlayer;
  GameMode* gameMode;
  Level* level;
public:
  static inline LocalPlayer* getLocalPlayer() {
    return localPlayer;
  }

  static inline GameMode* getGameMode() {
    return gameMode;
  }

  static inline Level* getLevel() {
    return level;
  }
};

extern GameData gameData;
