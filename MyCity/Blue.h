#pragma once
#include "Common.h"
class Blue : public sf::Sprite
{
	public:
		Blue();
	private:
		const std::string FILE_PATH = "Light_Blue_Square.png";
		sf::Texture texture;
};