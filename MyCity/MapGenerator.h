#pragma once
#include "Common.h"
using namespace std;

class MapGenerator
{
	public:
		vector<vector<int>> generateHeightmap(int, int, time_t);
		vector<vector<sf::Sprite>> assignTerrain(vector<vector<int>>);
};