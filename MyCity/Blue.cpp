#include "Blue.h"

Blue::Blue()
{
	texture.loadFromFile(FILE_PATH);
	this->setTexture(texture);
}