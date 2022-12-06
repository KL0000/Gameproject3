#include "monster.h"
Monster::Monster(sf::Texture& monsterText)
{
    monsterText.loadFromFile("graphics/monster.png");
    setTexture(monsterText);
    setScale(0.1f,0.1f);
    setPosition(800,500);
}
void Monster::setPositionX(sf::Sprite& x, sf::Time& y)
{
    srand((int)time(0));
    x.setPosition(x.getPosition().x- (setSpeed() * y.asSeconds()), x.getPosition().y);
}
float Monster::setSpeed()
{
    float monSpeed;
    
    monSpeed = (rand() % 10 * 50);
    return monSpeed;
}
float Monster::setHeight()
{
    srand((int)time(0)*10);
    float height = (rand()%500)+500;
    return height;
}
Ninja::Ninja(sf::Texture& ninjaText)
{
    ninjaText.loadFromFile("graphics/bee.png");
    setTexture(ninjaText);
    setScale(0.5f,0.5f);
    setPosition(600,400);
}

void Ninja::setPositionX(sf::Sprite& x, sf::Time& y)
{
    srand((int)time(0));
    x.setPosition(x.getPosition().x- (setSpeed() * y.asSeconds()), x.getPosition().y);
}
float Ninja::setSpeed()
{
    float ninSpeed;
    ninSpeed = (rand() % 10 * 100);
    return ninSpeed;
}
float Ninja::setHeight()
{
    srand((int)time(0)*15);
    float height = (rand()%300)+400;
    return height;
}
