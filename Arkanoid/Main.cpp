#ifdef SFML_STATIC
#pragma comment(lib, "glew.lib")
#pragma comment(lib, "freetype.lib")
#pragma comment(lib, "jpeg.lib")
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "gdi32.lib")  
#endif // SFML_STATIC

#include <SFML/Graphics.hpp>
#include<SFML/Audio/Music.hpp>
#include<iostream>
#include"CONSTANTS.h"
#include"Paddle.h"
#include"Ball.h"
#include"Stage.h"
#include"Brick.h"
#include"Collision.h"

using namespace sf;
using namespace std;

int main()
{	
	//	Objects declaration
	srand(time(NULL));

	Paddle paddle(200,50);
	paddle.setX(paddle.getX());
	paddle.setY(paddle.getY());
	Ball ball;
	Stage level1;
	std::vector<Brick*> brick;
	for (int y = 0; y < 7; y++){
		for (int x = 0; x < 10; x++)
		{
			brick.push_back(new Brick(x*85+100,y*45+100,1,"red"));
		}
	}
	RenderWindow window(VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Arkanoid");
	
	Keyboard keyboard;
	
	//if (!music.openFromFile("musictheme.mp3"))
	//{
	//	exit;// error...
	//}
	//music.setPosition(0, 1, 10); // change its 3D position
	//music.setPitch(2);           // increase the pitch
	//music.setVolume(50);         // reduce the volume
	//music.setLoop(true);
	//music.play();
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
		
		Collision::BallPaddle(&ball, &paddle);
		
		ball.setX(ball.getX() + ball.getSpeed().x_speed);
		ball.setY(ball.getY() + ball.getSpeed().y_speed);
		
		// Clear scene, render elements
		window.clear();
		window.draw(level1.getSprite());
		window.draw(paddle.getSprite());
		window.draw(ball.getSprite());
		for(auto &b : brick){
			window.draw(b->getSprite());
		}

		window.display();
	}

	return 0;
}