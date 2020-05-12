#include "Game.h"

/**
Inicjalizacja okna.
*/
void Game::initWindow()
{
	this->window = new RenderWindow(VideoMode(800, 600), "RPG");
}
/**
	Konstruktor i destruktor
*/
Game::Game()
{
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}

void Game::updateTime()
{
	this->time = timeClock.restart().asSeconds();

	system("cls");
	cout << time << "\n";
}

/**
	Ta funkcja odpowiada za renderowanie przedmiotów.
*/
void Game::render()
{
	this->window->clear();
	this->window->display();
}

void Game::update()
{
	this->updateEvents();
}

/**
	Uruchomienie okna.
*/
void Game::run()
{
	while (this->window->isOpen())
	{
		this->updateTime();
		this->update();
		this->render();
	}
}

void Game::updateEvents()
{

	while (this->window->pollEvent(event))
	{
		switch (event.type)
		{
		case Event::Closed:
			this->window->close();
			break;
		case Event::KeyPressed:
			if (event.key.code == Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}
