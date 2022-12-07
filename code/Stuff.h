#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Stuff : public sf::Sprite
{
    public:
        Stuff(sf::Texture& b,Player& p)
        {
            b.loadFromFile("graphics/New Piskel.gif");
            setTexture(b);
            setPosition(p.getPosition().x, p.getPosition().y);
            setScale(3.0f, 3.0f);
        };
        void bulletSetPosition(Player& q) { setPosition(q.getPosition().x, q.getPosition().y);}
        float bulletSetSpeed() 
        {
            float bulletSpeed;
            bulletSpeed = (rand() % 10 * 100);
            return bulletSpeed;
        }
        void bulletTraj(Stuff& shot, sf::Time& y)
        {
            srand((int)time(0));
            shot.setPosition(shot.getPosition().x + (bulletSetSpeed() * y.asSeconds() * 5.0f), shot.getPosition().y);
        };
};

class environment : public sf::Sprite {
public:
    environment(sf::Texture& bg)
    {
        bg.loadFromFile("graphics/background.png");
        setTexture(bg);
        setPosition(0, 0);
        setScale(1.5f,1.5f);
        

    };

};
class Pregame : public sf::Sprite
{
    public:
    Pregame(sf::Texture& bg)
    {
        bg.loadFromFile("graphics/phonto.jpg");
        setTexture(bg);
        setPosition(0,0);

    }
};