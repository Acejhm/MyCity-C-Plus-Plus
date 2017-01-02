#include "Common.h"
//#include "StateManager.h"
#include "Tile.h"

int main()
{
	std::cout << "Beginning of main" << std::endl;
	//StateManager::changeState(StateManager::GameState::startup);
	sf::RenderWindow window;
	sf::Event event;
	sf::Sprite beachSprite, oceanSprite, grassSprite, sandSprite, grassSandSprite;
	sf::Texture beachSpriteTexture, grassSpriteTexture, sandSpriteTexture,
		grassSandSpriteTexture, oceanSpriteTexture;
	sf::IntRect rectangle(3, 3, 102, 102);
	sf::Clock clock;
	const int OFFSET = 106;
	const int WINDOW_WIDTH = 1024;
	const int WINDOW_HEIGHT = 768;
	const int NUMBER_OF_SQUARES = WINDOW_WIDTH / OFFSET + WINDOW_HEIGHT / OFFSET;
	int counter = 1;

	std::cout << "Loading image...\n";

	beachSpriteTexture.loadFromFile("beach sprite sheet.png");
	oceanSpriteTexture.loadFromFile("ocean sprite sheet.png");
	grassSpriteTexture.loadFromFile("grass.png");
	sandSpriteTexture.loadFromFile("sand.png");
	grassSandSpriteTexture.loadFromFile("sand convert to grass tile.png");

	grassSprite.setTexture(grassSpriteTexture);
	sandSprite.setTexture(sandSpriteTexture);
	grassSandSprite.setTexture(grassSandSpriteTexture);
	oceanSprite.setTexture(oceanSpriteTexture);
	beachSprite.setTexture(beachSpriteTexture);

	window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT, 32), "Test");

	while (true)
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		Tile grassTile(Tile::grass, grassSpriteTexture, sf::Vector2f(100,100));

		

		if (clock.getElapsedTime().asMilliseconds() > 150.0f)
		{
			window.clear();
			window.draw(grassTile);
			window.display();
		}
		
	}
}