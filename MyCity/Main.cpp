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

	if(random >= 5)
		window.draw(Blue());
	else if (random < 5)
		window.draw(Yellow());
	window.display();
	std::cout << "Random: " << random << "\n";
	while(true)
	{
		while (window.pollEvent(event))
		{

		}
	}
}