#include "Paddle.h"


Paddle::Paddle(int width, int height)
{
	this->x = SCREEN_WIDTH / 2;
	this->y = SCREEN_HEIGHT - height;

	this->speed = 0.5;

	this->width = width;
	this->height = height;

	this->sprite = Sprite();
	this->texture = Texture();

	if (!texture.loadFromFile("R:\\Arkanoid\\Arkanoid\\Arkanoid\\smallPaddle.png", IntRect(0, 0, width, height)))
		exit;
	
	texture.setSmooth(true);
	sprite.setTexture(texture);
}


Paddle::~Paddle()
{
}

//	getters
float Paddle::getX(){ return x; }
float Paddle::getY(){ return y; }
float Paddle::getSpeed(){ return speed; }
int Paddle::getWidth(){ return width; }
Sprite Paddle::getSprite(){ return sprite; }

//	setters
void Paddle::setX(float new_x){
	sprite.setPosition(Vector2f(new_x, y));
	x = new_x;
}
void Paddle::setY(float new_y){
	sprite.setPosition(Vector2f(x, new_y));
	y = new_y;
}
void Paddle::setSpeed(float new_speed){ speed = new_speed; }