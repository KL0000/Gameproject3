#include "Sounds.h"



void laser(sf::Sound& a, sf::SoundBuffer& b)
{
    b.loadFromFile("sounds/pew.wav");
    a.setBuffer(b);
    a.setVolume(10.0f);
}