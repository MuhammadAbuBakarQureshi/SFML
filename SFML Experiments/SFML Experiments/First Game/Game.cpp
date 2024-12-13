#include "Game.h"

void Game::initVariables() {

	this->window = nullptr;
}

void Game::initWindow() {

	this->video_mode.height = 400;
	this->video_mode.width = 400;
	this->window = new sf::RenderWindow(this->video_mode, "First Game", sf::Style::Default);
}

Game::Game() {

	initVariables();
	initWindow();
}

Game::~Game() {

	delete this->window;
}

const bool Game::isRunning() const {

	return this->window->isOpen();
}

void Game::pollEvent() {

	sf::Event evnt;

	while (this->window->pollEvent(evnt)) {

		switch (evnt.type)
		{
		case sf::Event::Closed:

			cout << "Window Closed" << endl;
			this->window->close();
			break;

		case sf::Event::KeyPressed:

			if (evnt.key.code == sf::Keyboard::Escape) {
				// another way of writing the same logic is
				// sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)
				cout << "Widnow closed" << endl;
				this->window->close();
				break;
			}
		}
	}
}

void Game::update() {

	this->pollEvent();
}

void Game::render() {

	this->window->clear(sf::Color::Magenta);
	this->window->display();
}