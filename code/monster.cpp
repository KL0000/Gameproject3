#include "monster.h"
Monster::Monster(sf::Texture& monsterText)
{
    monsterText.loadFromFile("graphics/alien.PNG");
    setTexture(monsterText);
    setScale(0.1f,0.1f);
    setPosition(800,500);
}
void Monster::setPositionX(sf::Sprite& x, sf::Time& y)
{
    
    x.setPosition(x.getPosition().x- (setSpeed() * y.asSeconds()), x.getPosition().y);
}
float Monster::setSpeed()
{
    float monSpeed;
    srand((int)time(0));
    monSpeed = (rand() % 10 * 50);
    return monSpeed;
}
float Monster::setHeight()
{
    float height = (rand()%500)+500;
    return height;
}
Ninja::Ninja(sf::Texture& ninjaText)
{
    ninjaText.loadFromFile("graphics/ugly.PNG");
    setTexture(ninjaText);
    setScale(0.05f,0.05f);
    setPosition(600,400);
}

void Ninja::setPositionX(sf::Sprite& x, sf::Time& y)
{
    x.setPosition(x.getPosition().x- (setSpeed() * y.asSeconds()), x.getPosition().y);
}
float Ninja::setSpeed()
{
    float ninSpeed;
    srand((int)time(0));
    ninSpeed = (rand() % 10 * 100);
    return ninSpeed;
}
float Ninja::setHeight()
{
    float height = (rand()%300)+400;
    return height;
}
