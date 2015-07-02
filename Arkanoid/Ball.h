#pragma once
#include<SFML\Graphics.hpp>
using namespace sf;

class Ball
{
private:
	float x, y;

	int diameter;

	Texture texture;
	Sprite sprite;

public:
	Ball();
	~Ball();

	float getX();
	float getY();
	int getDiameter();
	Sprite getSprite();

	void setX(float);
	void setY(float);
};

