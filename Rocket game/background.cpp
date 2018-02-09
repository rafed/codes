#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "background.h"

Background::Background(sf::RenderWindow &receiveWindow):window(receiveWindow){

	// Background image
	if (!texture.loadFromFile("img/background.jpg")){
		std::cerr << "Error opening background image" << std::endl;
	}
	sf::Vector2u textureSize = texture.getSize(); //Get size of texture.

    float scaleX = (float) 1000 / textureSize.x;
    float scaleY = (float) 600 / textureSize.y;     //Calculate scale.
 
	sprite.setTexture(texture);
	sprite.setScale(scaleX, scaleY);      //Set scale.
	
	// Game Music
	if (!music.openFromFile("sound/background.wav")) {
	    std::cerr << "No music file found!" << std::endl;
	}
}

void Background::draw(){
	window.draw(sprite);
}

void Background::playMusic(){
	if(music.getStatus() == sf::SoundSource::Stopped)
		music.play();
}
