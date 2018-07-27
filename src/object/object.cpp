#include "../../inc/common.h"
#include "../../inc/object/object.h"

void object::setObjectShape(sf::FloatRect objectSz)
{
    objectShape = objectSz;
}
sf::FloatRect object::getObjectShape()
{
    return objectShape;
}

void object::setObjectPos(sf::FloatRect objectPs)
{
    objectPos = objectPs;
}
sf::FloatRect object::getObjectPos()
{
    return objectPos;
}

void object::setObjectColor(sf::Color objectClr)
{
    objectColor = objectClr;
}
sf::Color object::getObjectColor()
{
    return objectColor;
}

void object::setObjectSprite(std::string objectSpr)
{
    objectSprite = objectSpr;
}
std::string object::getObjectSprite()
{
    return objectSprite;
}

void object::setIsObjectGravityOn(int isObjectGravOn)
{
    isObjectGravityOn = isObjectGravOn;
}
int object::getIsObjectGravityOn()
{
    return isObjectGravityOn;
}

void object::setObjectGravity(int objectGrav)
{
    objectGravity = objectGrav;
}
int object::getObjectGravity()
{
    return objectGravity;
}

void object::setObjectSpeed(int objectSpeed)
{
    objectSpeed = objectSpeed;
}
int object::getObjectSpeed()
{
    return objectSpeed;
}