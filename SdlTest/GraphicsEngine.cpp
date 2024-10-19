#include "GraphicsEngine.hpp"


GraphicsEngine::GraphicsEngine() {

}


void GraphicsEngine::drawLine(SDL_Renderer* renderer, Point2d* startPoint, Point2d* endPoint, Color* color) {
	SDL_SetRenderDrawColor(renderer, color->red, color->green, color->blue, color->alpha);
	for (int i = 0; i < 300; i++)
	{
		SDL_RenderDrawPoint(renderer, i, i);
	}
}


GraphicsEngine* GE_CreateGraphicsEngine() {
	return new GraphicsEngine();
}