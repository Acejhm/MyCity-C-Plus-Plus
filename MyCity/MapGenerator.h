#pragma once
#include "Common.h"
#include "Tile.h"
using namespace std;

class MapGenerator
{
	public:
		vector<vector<int>> generateHeightmap(int, int, time_t);
		vector<vector<Tile>> assignTerrain(vector<vector<int>>);
};