#include "Ball.h"
#include"CONSTANTS.h"

Ball::Ball()
{
	this->x = SCREEN_WIDTH / 2;
	this->y = 40;

	this->width = 30;
	this->height = 30;

	this->sprite = Sprite();
	this->texture = Texture();

	if (!texture.loadFromFile("R:\\Arkanoid\\Arkanoid\\Arkanoid\\ball.png", IntRect(0, 0, width, height )))
		exit;

	texture.setSmooth(true);
	sprite.setTexture(texture);
}


Ball::~Ball()
{
}

