#pragma once
#include "Bullet.h"

class Buff
{
public:
	Buff(Texture* texture, Vector2f pos);
	~Buff();

	// function Buff
	void Update(float speed, const float& dt);
	void Draw(RenderWindow* window);

	Sprite shape;
private:

	float mult;

};

