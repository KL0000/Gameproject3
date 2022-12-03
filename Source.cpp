#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "Monster.h"
#include "Player.h"
#include "Stuff.h"
#include "gameplay.h"
//#include "Alien.h"
//#include "Zombie.h"

using namespace std;



int main()
{
	//create window
	sf::Clock clock;
	sf::Texture player;
	sf::Texture backg;
	sf::Texture bullet;
	Player p1(player);
	environment background(backg);
	Stuff ayo(bullet,p1);
	Hitbox hero, enemy;

	
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Game");
	
	while (window.isOpen())
	{
		sf::Time dt = clock.restart();

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			p1.SetPosition(p1,dt);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			p1.SetPositionY(p1, dt);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		{
			ayo.bulletTraj(ayo, dt);
		}
		

		sf::Event event;
		while (window.pollEvent(event))
		{

		}
		window.clear();
		window.draw(background);
		window.draw(ayo);
		window.draw(p1);
		window.display();

	}
	return 0;
}