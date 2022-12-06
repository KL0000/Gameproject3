#pragma once
#include <iostream>
//#include "Monster.h"
#include <SFML/Graphics.hpp>


class Player : public sf::Sprite
{
public:
    Player();
    Player(sf::Texture& text);
	float p1Speed();
    void SetPosition(Player& x,sf::Time& y);
    void SetPositionY(Player& x, sf::Time& y);
    
 
    



};
////////////////////////////////////////////////////
class Hitbox :
    public sf::Sprite
{
public:
    /// sets the hitbox
    void setHitbox(const sf::FloatRect& hitbox) {
        m_hitbox = hitbox;
    }
    /// gets the hitbox (use this instead of getGlobalBounds())
    sf::FloatRect getGlobalHitbox() const {
        return getTransform().transformRect(m_hitbox);
    }
private:
    sf::FloatRect m_hitbox;
};
/// //////////////////////////////////////////////////




