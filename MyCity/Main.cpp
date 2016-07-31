#include "Common.h"
#include "StateManager.h"

int main(int argc, const char* argv[])
{
	//StateManager::changeState(StateManager::GameState::startup);
	sf::RenderWindow window;
	sf::Event event;
	sf::Sprite beachSprite, oceanSprite, grassSprite, sandSprite, grassSandSprite;
	sf::Texture beachSpriteTexture, grassSpriteTexture, sandSpriteTexture, 
				grassSandSpriteTexture, oceanSpriteTexture;
	sf::IntRect rectangle(3,3,102,102);
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
	
	srand(time(NULL));
	

	window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT, 32), "Test");

	for (int i = 1; i<=WINDOW_WIDTH; i++)
	{
		int random = rand() % 10 + 1;
		if (random >= 5)
		{
			window.draw(grassSprite);
		}

	}
	while(true)
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (clock.getElapsedTime().asMilliseconds() > 150.0f)
		{
			switch (counter)
			{
			case 1:
			{
				rectangle.left = 3;
				rectangle.top = 3;
				counter++;
				break;
			}
			case 2:
			case 3:
			{
				rectangle.left += OFFSET;
				counter++;
				break;
			}
			case 4:
			{
				rectangle.left = 3;
				rectangle.top += OFFSET;
				counter++;
			}
			case 5:
			case 6:
			{
				rectangle.left += OFFSET;
				counter = 1;
				break;
			}
			}
			beachSprite.setTextureRect(rectangle);
			clock.restart();
		}
		window.clear();
		window.draw(beachSprite);
		window.display();
	}
}