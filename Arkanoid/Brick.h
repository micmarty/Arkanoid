#pragma once
#include<SFML/Graphics.hpp>
#include"DrawableElement.h"
#include<string>

using namespace sf;
using namespace std;

class Brick: public DrawableElement
{
private:
	int hits_to_destroy;
	string arr_of_colors[8];

public:
	Brick(float x, float y, int hits, string color);
	~Brick();

	int getHitsToDestroy();

	void changeColor(string color);
};

