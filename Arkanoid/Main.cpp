#ifdef SFML_STATIC
#pragma comment(lib, "glew.lib")
#pragma comment(lib, "freetype.lib")
#pragma comment(lib, "jpeg.lib")
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "gdi32.lib")  
#endif // SFML_STATIC

#include <SFML/Graphics.hpp>
#include<iostream>
#include"CONSTANTS.h"
#include"Paddle.h"
#include"Ball.h"
#include"Stage.h"
#include"Brick.h"

using namespace sf;
using namespace std;


int main()
{	
	//	Objects declaration
	
	Paddle paddle(200,50);
	Ball ball;
	Stage level1;
	Brick brick(0, 0, 2);
	RenderWindow window(VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Arkanoid");
	
	Keyboard keyboard;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			//	ruch paletki myszk¹ i klawiatura
			if (event.type == Event::MouseMoved)
			{
				paddle.setX(event.mouseMove.x - paddle.getWidth()/2);
			}
		}
		
		if (paddle.getSprite().getGlobalBounds().intersects(ball.getSprite().getGlobalBounds()))
		{
			cout << "Collision" << endl;
			ball.setY(ball.getY() - 600);
		}
		else
			ball.setY(ball.getY() + 0.3);

		window.clear(Color::White);
		
		window.draw(level1.getSprite());
		window.draw(paddle.getSprite());
		window.draw(ball.getSprite());
		window.draw(brick.getSprite());
		window.display();
	}

	return 0;
}