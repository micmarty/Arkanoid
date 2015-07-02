#pragma once
#include<SFML\Graphics.hpp>
#include"DrawableElement.h"

using namespace sf;

class Stage: public DrawableElement
{
public:
	Stage();
	~Stage();
};

