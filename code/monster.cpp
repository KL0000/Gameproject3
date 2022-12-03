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
    x.setPosition(x.getPosition().x- ((rand()%10*100) * y.asSeconds()), x.getPosition().y);
}
Ninja::Ninja(sf::Texture& ninjaText)
{
    ninjaText.loadFromFile("graphics/bee.png");
    setTexture(ninjaText);
    setScale(0.5f,0.5f);
    setPosition(800,600);
}