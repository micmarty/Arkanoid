#include "Brick.h"
#include<string>
using namespace std;

Brick::Brick(float x, float y, int hits, string color)
{
	this->x = x;
	this->y = y;
	
	width = 80;
	height = 40;
	
	hits_to_destroy = hits;

	arr_of_colors[0] = "red";
	arr_of_colors[1] = "blue";
	arr_of_colors[2] = "green";
	arr_of_colors[3] = "cyan";
	arr_of_colors[4] = "yellow";
	arr_of_colors[5] = "magenta";
	arr_of_colors[6] = "black";
	arr_of_colors[7] = "white";
	

	if (!texture.loadFromFile("R:\\Arkanoid\\Arkanoid\\Arkanoid\\brick.png", IntRect(0, 0, width, height)))
		exit;

	texture.setSmooth(true);
	sprite.setTexture(texture);

	sprite.setPosition(Vector2f(x, y));
	changeColor(color);
}

void Brick::changeColor(string color)
{
	int generated_color = rand() % 8;

	if (generated_color == 0)
		sprite.setColor(Color::Red);
	else if (generated_color == 1)
		sprite.setColor(Color::Blue);
	else if (generated_color == 2)
		sprite.setColor(Color::Green);
	else if (generated_color == 3)
		sprite.setColor(Color::Cyan);
	else if (generated_color == 4)
		sprite.setColor(Color::Yellow);
	else if (generated_color == 5)
		sprite.setColor(Color::Magenta);
	else if (generated_color == 6)
		sprite.setColor(Color::Black);
	else
		sprite.setColor(Color::White);
}
Brick::~Brick()
{

}