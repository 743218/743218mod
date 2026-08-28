#pragma once 
#include "../Module.h"

class Watermark : public Module {
private:
  Color color = Color(0.f, 200.f, 200.f);
public:
  Watermark();

  void onRender2DScreen() override;
};
