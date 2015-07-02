#include "Ball.h"
#include"CONSTANTS.h"

Ball::Ball()
{
	this->x = SCREEN_WIDTH / 2;
	this->y = 40;

	this->diameter = 30;

	this->sprite = Sprite();
	this->texture = Texture();

	if (!texture.loadFromFile("R:\\Arkanoid\\Arkanoid\\Arkanoid\\ball.png", IntRect(0, 0, diameter, diameter )))
		exit;

	texture.setSmooth(true);
	sprite.setTexture(texture);
}


Ball::~Ball()
{
}

//	getters
float Ball::getX(){ return x; }
float Ball::getY(){ return y; }
int Ball::getDiameter(){ return diameter; }
Sprite Ball::getSprite(){ return sprite; }

//	setters
void Ball::setX(float new_x){
	sprite.setPosition(Vector2f(new_x, y));
	x = new_x;
}
void Ball::setY(float new_y){
	sprite.setPosition(Vector2f(x, new_y));
	y = new_y;
}