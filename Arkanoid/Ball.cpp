#include "Ball.h"
#include"CONSTANTS.h"

Ball::Ball()
{
	this->x = SCREEN_WIDTH / 2;
	this->y = 0;

	b_speed = speed(-0.6, 0);
	randSpeed();
	this->width = 30;
	this->height = 30;

	this->sprite = Sprite();
	this->texture = Texture();

	if (!texture.loadFromFile("R:\\Arkanoid\\Arkanoid\\Arkanoid\\ball.png", IntRect(0, 0, width, height )))
		exit;

	texture.setSmooth(true);
	sprite.setTexture(texture);
}

speed Ball::getSpeed()
{
	return b_speed;
}
void Ball::randSpeed()
{
	b_speed = speed((rand() % 20 - 10) / 10.0f, (rand() % 10) / 10.0f);
}
void Ball::setSpeed(speed new_speed)
{
	b_speed = new_speed;
}
Ball::~Ball()
{
}

