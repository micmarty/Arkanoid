#include "Stage.h"
#include"CONSTANTS.h"

Stage::Stage()
{
	this->sprite = Sprite();
	this->texture = Texture();

	if (!texture.loadFromFile("R:\\Arkanoid\\Arkanoid\\Arkanoid\\background.png", IntRect(0, 0, SCREEN_WIDTH, SCREEN_WIDTH)))
		exit;
	
	texture.setSmooth(true);
	sprite.setTexture(texture);
}


Stage::~Stage()
{
}