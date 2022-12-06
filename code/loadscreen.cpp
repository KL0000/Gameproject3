#include "loadscreen.h"

void loadMessage(sf::Font& a,sf::Text& messageT,sf::Text& scoreT)
{
    a.loadFromFile("fonts/KOMIKAP_.ttf");
    messageT.setFont(a);
    scoreT.setFont(a);
    messageT.setString("Press Enter To Start");
    scoreT.setString("Score = 0");
    messageT.setCharacterSize(75);
    scoreT.setCharacterSize(100);
    messageT.setFillColor(sf::Color::White);
    scoreT.setFillColor(sf::Color::White);

    sf::FloatRect textRect = messageT.getLocalBounds();
    messageT.setOrigin(textRect.left + textRect.width/2.0f,textRect.top + textRect.height / 2.0f);
    messageT.setPosition(1920/2.0f,1080/2.0f);
    scoreT.setPosition(20,20);
}

void updateScore(sf::Text& a,int score)
{
    stringstream ss;
    ss << "Score = " << score;
    a.setString(ss.str());

}
