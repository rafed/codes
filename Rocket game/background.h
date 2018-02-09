#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Background
{
private:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::RenderWindow &window;
	
	sf::Music music;
public:
	Background(sf::RenderWindow &receiveWindow);
	
	void draw();
	void playMusic();
};
