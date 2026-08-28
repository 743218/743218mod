#include "../Module.h"

class KillAura : public Module {
public:
  KillAura();

  void onBaseTicK() override;
};
