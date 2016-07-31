#include "Common.h"
#include "StateManager.h"
#include "Blue.h"
#include "Yellow.h"
int main(int argc, const char* argv[])
{
	//StateManager::changeState(StateManager::GameState::startup);
	sf::RenderWindow window;
	sf::Event event;
	srand(time(NULL));
	int random = rand() % 10 + 1;

	window.create(sf::VideoMode(1024, 768, 32), "Test");

	//if (random >= 5)
		//window.draw(Blue());
	//else
		//window.draw(Yellow());
	window.display();
	std::cout << "Random: " << random << "\n";
	while (true)
	{
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
			{
				window.close();
				break;
			}
			case sf::Event::MouseButtonPressed:
			{
				if (event.mouseButton.button == sf::Mouse::Button::Left)
				{
					int mouseX = event.mouseButton.x;
					int mouseY = event.mouseButton.y;
				}
			}
			}
		}
	}
	int number;
	std::cin >> number;
	std::cout << "Test";
	return 0;
}