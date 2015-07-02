#include "Brick.h"


Brick::Brick(float x, float y, int hits)
{
	this->x = x;
	this->y = y;
	

	width = 80;
	height = 40;
	
	hits_to_destroy = hits;
	
	if (!texture.loadFromFile("R:\\Arkanoid\\Arkanoid\\Arkanoid\\brick.png", IntRect(0, 0, width, height)))
		exit;

	texture.setSmooth(true);
	sprite.setTexture(texture);

	sprite.setPosition(Vector2f(x, y));
}
Brick::~Brick()
{

}