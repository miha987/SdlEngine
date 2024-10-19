#include "Game.hpp"
//#include "GraphicsEngine.hpp"

Game* game = nullptr;

int main(int argc, char* argv[]) {

	game = new Game();

	game->init("SDL test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1400, 900, false);

	while (game->running()) {
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();

	return 0;
}