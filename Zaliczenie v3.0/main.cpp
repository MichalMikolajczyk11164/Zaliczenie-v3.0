#include "Game.h"

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(800, 600), "RPG");
	Event event;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::KeyPressed:
				if (event.key.code == Keyboard::Escape)
					window.close();
				break;
			}
		}
		window.clear();
		window.display();
	}
	return 0;
}