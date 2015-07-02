#include "DrawableElement.h"

DrawableElement::DrawableElement(){

}
DrawableElement::~DrawableElement(){

}
//	getters
float DrawableElement::getX(){ return x; }
float DrawableElement::getY(){ return y; }
int DrawableElement::getWidth(){ return width; }
int DrawableElement::getHeight(){ return height; }

Texture DrawableElement::getTexture(){ return texture; }
Sprite DrawableElement::getSprite(){ return sprite; }

//	setters
void DrawableElement::setX(float new_x){
	sprite.setPosition(Vector2f(new_x, y));
	x = new_x;
}
void DrawableElement::setY(float new_y){
	sprite.setPosition(Vector2f(x, new_y));
	y = new_y;
}