#pragma once
#include<SFML\Graphics.hpp>

using namespace sf;
class Stage
{
private:
	Sprite sprite;
	Texture texture;
public:
	Stage();
	~Stage();
	Sprite getBackground();
};

