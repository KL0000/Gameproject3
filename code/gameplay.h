#pragma once

#include<iostream>
#include <SFML/Graphics.hpp>
#include "monster.h"
#include "Player.h"
#include "Stuff.h"
using namespace std;

///////////////////////////////////////////
bool monsterStart(Monster& q, sf::Time& dt);
void monsterEnd(Monster& q, sf::Time& dt);
bool outsideFrame(Monster& q, bool a);
////////////////////////////////////////////
bool monsterStart(Ninja& q, sf::Time& dt);
void monsterEnd(Ninja& q, sf::Time& dt);
bool outsideFrame(Ninja& q, bool a);
//////////////////////////////////////////
void setHitBox(Hitbox& a, Hitbox& b);
void hitboxPosM(Hitbox& a, Hitbox& b, Monster& p1,Stuff& b1);
void hitboxPosN(Hitbox& a, Hitbox& b, Ninja& p1,Stuff& b1);
///////////////////////////////////////////////
bool reset(Stuff& b1,Player& q);

