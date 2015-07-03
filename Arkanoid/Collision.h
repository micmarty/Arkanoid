#pragma once
#include <SFML/Graphics.hpp>
#include<SFML/Audio/Music.hpp>
#include"Paddle.h"
#include"Ball.h"
using namespace sf;

class Collision
{
public:
	Collision();
	~Collision();
	
	static void BallPaddle(Ball *b, Paddle *p);
};

