#include "Common.h"
#include "StateManager.h"
#include "Blue.h"

void StateManager::changeState(GameState state)
{
	switch(state)
	{
	case mainMenu:
	{
		//startupMainMenu();
		//window.draw(Blue());
		//window.display();
		
		
		//while (window.pollEvent(event))
		//{
		//}
		break;
	}
	case startup:
	{
		startupGame();
		break;
	}
	case loading:
	{

	}
	case paused:
	{

	}
	case playing:
	{

	}
	case exiting:
	{

	}
	default:
	{

	}
	}
}
void StateManager::startupMainMenu()
{
	//changeState(loading);
	
}
void StateManager::startupGame()
{
	short HEIGHT = 1024;
	short WIDTH = 768;
	std::string TITLE = "My City";
	sf::RenderWindow window(sf::VideoMode(HEIGHT, WIDTH, 32), TITLE);
	changeState(mainMenu);
}