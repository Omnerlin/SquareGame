#include "Projectile.h"

PROJECTILE_TYPES Projectile::getProjectileType()
{
	return this->type;
}

void Projectile::setProjectileType(PROJECTILE_TYPES type)
{
	this->type = type;
}

sf::Vector2f Projectile::getSpeedOffset()
{
	return speedOffset;
}

void Projectile::setSpeedOffset(sf::Vector2f offset)
{
	speedOffset = offset;
}

void Projectile::setDirection(sf::Vector2f & direction)
{
	this->direction = direction;
}

bool Projectile::getActive()
{
	return active;
}

void Projectile::setActive(bool active)
{
	this->active = active;
}

void Projectile::setSpeed(sf::Vector2f speed)
{
	this->speed = speed;
}

float Projectile::getBaseMoveSpeed()
{
	return baseMoveSpeed;
}

void Projectile::setBaseMoveSpeed(float speed)
{
	this->baseMoveSpeed = speed;
}

sf::Vector2f Projectile::getDirection()
{
	return direction;
}

sf::Vector2f Projectile::getSpeed()
{
	return speed;
}

Projectile::Projectile()
{
	rect.setSize(sf::Vector2f(16, 16));
	shadow.setSize(rect.getSize());
	shadow.setFillColor(sf::Color(0, 0, 0, 60));
}


Projectile::~Projectile()
{
}
