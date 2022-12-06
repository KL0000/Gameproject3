#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>
using namespace std;

class Monster: public sf::Sprite
{
    public:
    Monster(sf::Texture& monsterText);
    void setPositionX(sf::Sprite& x,sf::Time& y);
    float setSpeed();
    float setHeight();
};


class Ninja:public sf::Sprite
{
    public: 
    Ninja(sf::Texture& NinjaText);
    void setPositionX(sf::Sprite& x,sf::Time& y);
    float setSpeed();
    float setHeight();
    
};