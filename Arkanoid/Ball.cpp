#include "Ball.h"
#include"CONSTANTS.h"

Ball::Ball()
{
	this->x = SCREEN_WIDTH / 2;
	this->y = 40;
	this->speed = 0.4;

	this->width = 30;
	this->height = 30;

	this->sprite = Sprite();
	this->texture = Texture();

	if (!texture.loadFromFile("R:\\Arkanoid\\Arkanoid\\Arkanoid\\ball.png", IntRect(0, 0, width, height )))
		exit;

	texture.setSmooth(true);
	sprite.setTexture(texture);
}

float Ball::getSpeed()
{
	return speed;
}
void Ball::randSpeed()
{
	speed=(rand()%10 )/10;
}
void Ball::setSpeed(float new_speed)
{
	speed = new_speed;
}
Ball::~Ball()
{
}

