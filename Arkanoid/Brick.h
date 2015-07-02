#pragma once
#include<SFML/Graphics.hpp>
using namespace sf;

class Brick
{
private:
	float x, y;
	float speed;
	int width, height;

	int hits_to_destroy;

	Texture texture;
	Sprite sprite;

public:
	Brick(float x, float y, int hits);
	~Brick();

	float getX();
	float getY();
	float getSpeed();
	int getWidth();
	int getHitsToDestroy();
	Sprite getSprite();

	void setX(float);
	void setY(float);
	void setSpeed(float);

	
};

