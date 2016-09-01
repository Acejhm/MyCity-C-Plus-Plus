#pragma once
#include "Common.h"
class StateManager
{
	public:
		enum GameState
		{
			mainMenu,
			paused,
			playing,
			exiting,
			loading,
			startup
		};
		static void changeState(GameState);
	private:
		static sf::RenderWindow window;
		static void startupGame();
		static sf::Event event;
		void startupMainMenu();
		static void loadGame();
};