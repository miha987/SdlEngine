#ifndef GraphicsEngine_hpp
#define GraphicsEngine_hpp

#include "SDL.h"

class Color {
	public: 
		int red;
		int green;
		int blue;
		int alpha;

		Color() : Color(255, 255, 255, 255) {
			
		}

		Color(int red, int green, int blue, int alpha) {
			this->red = red;
			this->green = green;
			this->blue = blue;
			this->alpha = alpha;
		}
};

class Point2d {
	public:
		int x;
		int y;

		Point2d() {

		}

		Point2d(int x, int y) {
			this->x = x;
			this->y = y;
		}
};

class Point3d {
	public:
		int x;
		int y;
		int z;

		Point3d() {

		}

		Point3d(int x, int y, int z) {
			this->x = x;
			this->y = y;
			this->z = z;
		}
	};

class GraphicsEngine {
	public:
		GraphicsEngine();
		void drawLine(SDL_Renderer* renderer, Point2d* startPoint, Point2d* endPoint, Color* color);
};

GraphicsEngine* GE_CreateGraphicsEngine();
#endif // !GraphicsEngine_hpp
