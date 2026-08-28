#pragma once
#include <windows.h>
#include <string>

struct Color {
  	union
  	{
  		struct {
  			uint8_t r, g, b, a;
  		};
  		int arr[4];
  	};
  
  	Color(uint8_t red = 255, uint8_t green = 255, uint8_t blue = 255, uint8_t alpha = 255) {
  		this->r = red;
  		this->g = green;
  		this->b = blue;
  		this->a = alpha;
  	}
};
