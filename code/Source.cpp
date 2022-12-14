#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Stuff.h"
#include "gameplay.h"
#include "monster.h"
#include "loadscreen.h"
#include "Sounds.h"
using namespace std;
int main()
{
	sf::Clock clock;
	sf::Font font;
	sf::Texture firstBack,player,backg,bullet,monster,ninja;
	sf::Text message,scores;
	Pregame load(firstBack);
	Player p1(player);
	Monster monsterEnemy(monster);
	Ninja ninjaEnemy(ninja);
	bool monsterActive = false;
	bool ninjaActive = false;
	bool bulletActive = false;
	bool paused = true;
	int score;
	environment background(backg);
	Stuff ayo(bullet,p1);
	Hitbox hero, enemy1,enemy2;
	sf::Sound sonds;
	sf::SoundBuffer buff;
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Game");
	loadMessage(font,message,scores);
	laser(sonds,buff);
	while (window.isOpen())
	{
		sf::Time dt = clock.restart();
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){window.close();}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)){p1.SetPosition(p1,dt);}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)){p1.SetPositionY(p1, dt);}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){bulletActive = true; sonds.play();}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){paused = false; score = 0;}
		if(!paused){
		if(!bulletActive){ayo.bulletSetPosition(p1);}else{ayo.bulletTraj(ayo,dt);bulletActive = reset(ayo,p1);}
		if(!monsterActive){monsterActive = monsterStart(monsterEnemy,dt);}else{monsterEnd(monsterEnemy,dt);monsterActive = outsideFrame(monsterEnemy,monsterActive);}
		if(!ninjaActive){ninjaActive = monsterStart(ninjaEnemy,dt);}else{monsterEnd(ninjaEnemy,dt);ninjaActive = outsideFrame(ninjaEnemy,ninjaActive);}
		hitboxPosM(hero,enemy1,monsterEnemy,ayo);
		hitboxPosN(hero,enemy2,ninjaEnemy,ayo);
		setHitBox(hero,enemy1);
		setHitBox(hero,enemy2);
		const bool colliding1 = hero.getGlobalHitbox().intersects(enemy1.getGlobalHitbox());
		const bool colliding2 = hero.getGlobalHitbox().intersects(enemy2.getGlobalHitbox());
		if(colliding1){monsterActive = false; bulletActive = reset(ayo,p1); score++;}
		if(colliding2){ninjaActive = false;bulletActive = reset(ayo,p1);score++;}
		updateScore(scores,score);
		}
		sf::Event event;
		while (window.pollEvent(event)){}
		window.clear();
		if(!paused){window.draw(background);}
		window.draw(ayo);
		window.draw(p1);
		window.draw(monsterEnemy);
		window.draw(ninjaEnemy);
		window.draw(scores);
		if(paused){window.draw(load); window.draw(message);}
		window.display();
	}
	return 0;
}