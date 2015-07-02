#pragma once
#include<SFML\Graphics.hpp>
#include"CONSTANTS.h"
using namespace sf;

class Paddle: public Transformable
{
private:
	float x, y;
	float speed;
	int width, height;
	
	Texture texture;
	Sprite sprite;
	
public:
	Paddle(int width, int height);
	~Paddle();

	float getX();
	float getY();
	float getSpeed();
	int getWidth();
	Sprite getSprite();

	void setX(float);
	void setY(float);
	void setSpeed(float);
};

