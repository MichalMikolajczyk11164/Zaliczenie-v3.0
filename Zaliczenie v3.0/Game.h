#ifndef Game_H
#define Game_H

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game
{
private:
	void initWindow();
public:
	Game();
	virtual ~Game();
	
	void render();
	void update();
	void run();
	void updateEvents();

};

#endif // !Game_H