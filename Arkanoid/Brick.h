#pragma once
#include<SFML/Graphics.hpp>
#include"DrawableElement.h"
using namespace sf;

class Brick: public DrawableElement
{
private:
	int hits_to_destroy;

public:
	Brick(float x, float y, int hits);
	~Brick();

	int getHitsToDestroy();
};

