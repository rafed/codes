#include <SFML/Graphics.hpp>

class Rocket
{
private:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::RenderWindow &window;
	
	int distance;
public:
	Rocket(sf::RenderWindow &receiveWindow);
	
	void draw();
	
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void shoot();
};
