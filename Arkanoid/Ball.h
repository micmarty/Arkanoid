#pragma once
#include<SFML\Graphics.hpp>
#include"DrawableElement.h"
using namespace sf;


struct speed{
	float x_speed;
	float y_speed;

	speed()
	{
		x_speed = 0;
		y_speed = 0;
	}
	speed(float x_new, float y_new)
	{
		x_speed = x_new;
		y_speed = y_new;
	}
};

class Ball: public DrawableElement
{
	speed b_speed;
public:
	Ball();
	~Ball();
	speed getSpeed();
	void randSpeed();
	void setSpeed(speed new_speed);
};

