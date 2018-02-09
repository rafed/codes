#include <SFML/Graphics.hpp>
#include <iostream>

#include "rocket.h"

Rocket::Rocket(sf::RenderWindow &receiveWindow):window(receiveWindow){
	distance = 7;
	
	if (!texture.loadFromFile("img/rocket.png")){
		std::cerr << "Error opening rocket image" << std::endl;
	}
	texture.setSmooth(true);
	sprite.setTexture(texture);
	sprite.setOrigin(64, 64);
	sprite.setPosition(sf::Vector2f(500, 520));
}

void Rocket::draw(){
	window.draw(sprite);
}

void Rocket::moveUp(){
	sf::Vector2f v = sprite.getPosition();
	if(v.y > 0)
		sprite.move(0, -distance);
}

void Rocket::moveDown(){
	sf::Vector2f v = sprite.getPosition();
	if(v.y < 600)
		sprite.move(0, distance);
}

void Rocket::moveLeft(){
	sf::Vector2f v = sprite.getPosition();
	if(v.x > 0)
		sprite.move(2 * -distance, 0);
}

void Rocket::moveRight(){
	sf::Vector2f v = sprite.getPosition();
	if(v.x < 1000)
		sprite.move(2 * distance, 0);
}

void Rocket::shoot(){

}
