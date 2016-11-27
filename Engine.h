#pragma once
#include "GameLoop.h"

class Engine
{
private:
	sf::RenderWindow window;
	State *state = new GameLoop;
	sf::Clock engineClock;
	STATE_TYPE currentState;
public:
	void init();
	void update();

	Engine();
	~Engine();
};

