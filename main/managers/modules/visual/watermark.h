#include "../Module.h"

class Watermark : public Module {
public:
  Watermark();

  void onRenderScreen() override;
};
