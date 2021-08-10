#pragma once
#include "Bullet.h"
#include "eBullets.h"	
class Enemy
{
public:
	// Enemy HP
	int HP;
	// Enemy HP max
	int HPMax;

	// Window witdth
	int range;

	// Bullet slip
	float bulletTimer;
	// Multiplier
	float mult;

	// HP Bar	
	RectangleShape ehp;
	RectangleShape ehpBack;

	// Enemy Texture
	Sprite shape;
	Texture* texture;

	Enemy(Texture* texture, Vector2u windowSize, float maxV, bool toRight);

	~Enemy();

	// function
	void UpdateHP();
	void Move(float dt);
	void Draw(RenderWindow& window);
	void Update(float dt);

private:
	int orient; // Default 1, toLeft -1, as a multiplier
	float acceleration;
	float drag;
	Vector2f currentV;
	float maxV;
};
