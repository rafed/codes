#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <iostream>

#include "background.h"
#include "rocket.h"

int main()
{
	// Create Window
    sf::RenderWindow window(sf::VideoMode(1000, 600), "Rocket Rocket!----------Made by Rafed");
    window.setFramerateLimit(60);

	// Game objects
	Background background(window);
	Rocket rocket(window);

    while (window.isOpen())
    {
    	background.playMusic();
    
    	// Events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            	window.close();
        }
		
		// Key pressed
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
			rocket.moveLeft();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
			rocket.moveRight();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
			rocket.moveUp();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
			rocket.moveDown();
		}

		// Drawing
        window.clear(sf::Color::Black);
            
        background.draw();
        rocket.draw();
        
        window.display();
    }

    return 0;
}
