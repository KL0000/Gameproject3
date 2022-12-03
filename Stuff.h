#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Stuff : public sf::Sprite
{
    public:
        Stuff(sf::Texture& b,sf::Sprite p)
        {
            b.loadFromFile("graphics/New Piskel.gif");
            setTexture(b);
            setPosition(p.getPosition().x, p.getPosition().y);
            setScale(2.0f, 2.0f);
        };
        void bulletSetPosition(sf::Sprite q) { setPosition(q.getPosition().x, q.getPosition().y); }
      
        void bulletTraj(sf::Sprite& shot, sf::Time& y)
        {
           
                shot.setPosition(shot.getPosition().x + ((rand() % 10 * 100) * y.asSeconds() * 5.0f), shot.getPosition().y);
    

        };
};

class environment : public sf::Sprite {
public:
    environment(sf::Texture& bg)
    {
        bg.loadFromFile("graphics/backgroundSprite.jpg");
        setTexture(bg);
        setPosition(0, 0);
        setScale(1.9f, 1.8f);

    };

};