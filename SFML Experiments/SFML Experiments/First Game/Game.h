#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

class Game {

private:

	sf::RenderWindow* window;
	sf::VideoMode video_mode;
	void initVariables();
	void initWindow();
	
public:

	Game();
	~Game();
	const bool isRunning() const;
	void pollEvent();
	void update();
	void render();
};