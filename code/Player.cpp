#include "Player.h"


Player::Player(sf::Texture& text)
{
	text.loadFromFile("graphics/spaceship1.PNG");
	setTexture(text);
	setPosition(100, 500);
	setScale(0.1f,0.1f);
	


}
float Player::p1Speed()
{
	float sped;
	sped = 5.0f * 100;
	return sped;
}


void Player::SetPosition(Player& x, sf::Time& y)
{

	x.setPosition(x.getPosition().x, x.getPosition().y - (p1Speed() * y.asSeconds()));
}
void Player::SetPositionY(Player& x, sf::Time& y)
{
	x.setPosition(x.getPosition().x, x.getPosition().y + (p1Speed() * y.asSeconds()));
}
/*void Player::shoot()
{

}
*/

