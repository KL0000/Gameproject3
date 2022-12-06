#include "gameplay.h"


bool monsterStart(Monster& q, sf::Time& dt)
{
			q.setPosition(2000,q.setHeight());
			bool a = true;
            return a;
}
void monsterEnd(Monster& q, sf::Time& dt)
{
        q.setPositionX(q,dt);
}
bool outsideFrame(Monster& q, bool a)
{
    if(q.getPosition().x < -100)
        {
            a = false;
        }
    return a;
}

bool monsterStart(Ninja& q, sf::Time& dt)
{
			q.setPosition(2000,q.setHeight());
			bool a = true;
            return a;
}
void monsterEnd(Ninja& q, sf::Time& dt)
{
        q.setPositionX(q,dt);
}
bool outsideFrame(Ninja& q, bool a)
{
    if(q.getPosition().x < -100)
        {
            a = false;
        }
    return a;
}

void setHitBox(Hitbox& a, Hitbox& b)
{
    a.setHitbox({15.f,15.f,25.f,25.f});
    b.setHitbox({15.f,15.f,25.f,25.f});
}
void hitboxPosM(Hitbox& a, Hitbox& b, Monster& m1,Stuff& b1)
{
    a.setPosition(b1.getPosition().x,b1.getPosition().y);
    b.setPosition(m1.getPosition().x,m1.getPosition().y);
}
void hitboxPosN(Hitbox& a, Hitbox& b, Ninja& n1,Stuff& b1)
{
    a.setPosition(b1.getPosition().x,b1.getPosition().y);
    b.setPosition(n1.getPosition().x,n1.getPosition().y);
}

bool reset(Stuff& b1,bool x,Player& q)
{
    if(b1.getPosition().x > 1080|| x == true)
    {
        b1.bulletSetPosition(q);
        
    }
return false;
}
