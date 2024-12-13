#include <iostream>
#include "Game.h"

using namespace std;

void firstGame() {

	Game game;

	while (game.isRunning()){

		// Update

		game.update();

		// Render

		game.render();
	}

} 