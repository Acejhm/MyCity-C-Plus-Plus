#include "MapGenerator.h"
#include "Common.h"
#include "Tile.h"
using namespace std;

vector<vector<int>> MapGenerator::generateHeightmap(int mapHeight, int mapWidth, time_t seed = time(NULL))
{
	srand(seed);

	vector<vector<int>> array2D(mapHeight);

	//Resize the width to be the right size.
	for(int i = 0; i < mapHeight; i++)
	{
		array2D[i].resize(mapWidth);
	}

	//Assign height-map values.
	for (int h = 0; h < mapHeight; h++)
	{
		for (int w = 0; w < mapWidth; w++)
		{
			array2D[h][w] = (rand() % 5);
		}
	}
	return array2D;
}

vector<vector<Tile>> MapGenerator::assignTerrain(vector<vector<int>> heightMapArray)
{
	int height = heightMapArray.size();
	int width = heightMapArray[0].size();

	static sf::Texture oceanSpriteTexture, beachSpriteTexture, grassSpriteTexture,
		grassSandSpriteTexture, sandSpriteTexture;
	oceanSpriteTexture.loadFromFile("ocean sprite sheet.png");
	grassSpriteTexture.loadFromFile("grass.png");
	sandSpriteTexture.loadFromFile("sand.png");
	grassSandSpriteTexture.loadFromFile("sand convert to grass tile.png");
	beachSpriteTexture.loadFromFile("beach sprite sheet.png");

	vector<vector<Tile>> tileArray(height);

	//Resize the width to be the right size.
	for (int i = 0; i < width; i++)
	{
		heightMapArray[i].resize(width);
	}

	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w < width; w++)
		{
			switch (heightMapArray[h][w])
			{
			case 0:
				tileArray[h][w].setTexture(oceanSpriteTexture, false);
			}
		}
	}
	return tileArray;
}