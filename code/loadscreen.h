#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <sstream>
using namespace std;

void loadMessage(sf::Font& a,sf::Text& messageT,sf::Text& scoreT);

void updateScore(sf::Text& a,int score);