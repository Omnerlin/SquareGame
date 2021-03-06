#pragma once
#include "Shield.h"
#include "Entity.h"
#include "ProjectileManager.h"

class Player
{
private:
	float moveSpeedModifier = 5;
	sf::Texture texture;
	float health = 100;
	bool alive = true;
	float fireCooldown = 0.20f; // In Seconds!
	float projectileDamage = 25.f;
	float injuredThreshold = 0.2f;
	float timeInjured = injuredThreshold;
	bool injured = false;
	
	int score = 0;

	sf::Color idleColor = sf::Color(160, 255, 170, 255);
	sf::Color hurtColor = sf::Color(200, 0, 0, 90);
public:
	float timeAlive = 0;
	Shield shield;
	float getTimeInjured();
	bool getInjured();
	void setInjured(bool injured);
	void setTimeInjured(float timeInjured);
	float getInjuredThreshold();
	float getProjectileDamage();
	void setProjectileDamage(float damage);
	void setScore(int score);
	int getScore();
	float timeSinceLastFire = 0.f;
	sf::RectangleShape shadow;
	ProjectileManager projectileManager;
	sf::Vector2f moveSpeed = sf::Vector2f(0.5, 0.5);
	sf::RectangleShape rect;
	sf::CircleShape reticle;
	sf::Sprite sprite;
	float getHealth();
	void setHealth(float health);
	float getFireCooldown();
	float getMoveSpeedMod();
	bool isAlive();
	Player();
	~Player();
};

