#pragma once
#include <math.h>
#include <cstdlib>
#include <vector>
#include <string>
#include <iostream>
#include "SFML\Graphics.hpp"
#include "SFML\Window.hpp"
#include "SFML\System.hpp"
#include "SFML\Audio.hpp"


using namespace sf;

class Bullet
{
public:
	Sprite shape;
	Bullet(Texture* texture, Vector2f pos, Vector2f maxV, Vector2f acceleration, bool isLeftPlayer);
	~Bullet();

	void Move(const float& dt);

private:
	float mult;
	Vector2f maxV;
	Vector2f currentV;
	Vector2f acceleration;
	bool isLeftPlayer;
};

