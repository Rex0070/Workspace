#include "Game.cpp"
#include <SFML/Audio.hpp>

int main()
{
	sf::Music music;
	music.setLoop(true);
	music.openFromFile("./Audio/Taebo.wav");
	music.setVolume(70);
	music.play();



	Game GameObj;

	return 0;
}