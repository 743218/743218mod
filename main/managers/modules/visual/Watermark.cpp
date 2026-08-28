#include "Watermark.h"

Watermark::Watermark() : Module("Watermark", Category::Visual, "Display text in the top left corner of the screen.", 0x0) {
  addSetting(new ColorSetting("Color", "The color you wish the watermark text to be.", &color, color, false, true));
};

void Watermark::onRender2DScreen() {
  if (!renderer.isD2DOverlayReady()) return;

  float textSize = 1.0f;
  
  std::string clientName = client.getClientName();
  std::string clientVersion = client.getClientVersion();
  std::string clientBuild = client.getClientReleaseVersion();
  
  auto d2d = renderer.getD2DRenderer();
  d2d->addText(Vector2(1.0f, 1.0f), clientName, color, textSize);
  float width = d2d->getTextWidth(clientName, textSize);
  d2d->addText(Vector2(1.0f + width, 1.0f), clientVersion + clientBuild, Color::light_gray, textSize);
}
