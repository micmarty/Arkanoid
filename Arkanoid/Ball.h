#pragma once
#include<SFML\Graphics.hpp>
#include"DrawableElement.h"
using namespace sf;

class Ball: public DrawableElement
{
	float speed;
public:
	Ball();
	~Ball();
	float getSpeed();
	void randSpeed();
	void setSpeed(float new_speed);
};

