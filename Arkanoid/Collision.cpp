#include "Collision.h"


Collision::Collision()
{
}


Collision::~Collision()
{
}

void Collision::BallPaddle(Ball *b, Paddle *p)
{	//	Check collision between ball and paddle
	if (p->getSprite().getGlobalBounds().intersects(b->getSprite().getGlobalBounds()))
	{

		speed current = b->getSpeed();	//	temporary variable
		if (b->getX() + b->getWidth()-1 > p->getX() && 
			b->getX() +1< p->getX() + p->getWidth()){
			b->setSpeed(speed(current.x_speed, -current.y_speed));	//	invert vertical movement direction
		}
		else
		{
			b->setSpeed(speed(-current.x_speed, current.y_speed));	//	invert horizontal movement direction
		}
	}
}