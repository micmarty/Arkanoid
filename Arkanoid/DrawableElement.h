#pragma once
#include<SFML/Graphics.hpp>
#include"CONSTANTS.h"

using namespace sf;


//	BASE CLASS
class DrawableElement
{
protected:
	float x, y;
	int width, height;
	Texture texture;
	Sprite sprite;
public:
	DrawableElement();
	~DrawableElement();

	virtual float getX();
	virtual float getY();
	virtual int getWidth();
	virtual int getHeight();
	virtual Texture getTexture();
	virtual Sprite getSprite();

	virtual void setX(float);
	virtual void setY(float);

	
};
