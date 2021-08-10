#pragma once
#include "Bullet.h"
class Background
{
public:
	// Support background
	Background(Texture* targetTex, RenderWindow* window);

	~Background();

	// Update
	void UpdateMovingBack(RenderWindow* window, float dt, Vector2f scrollSpeed);

	// Helper function
	void DrawStatic(RenderWindow* window);
	void ChangeTex(Texture* After, RenderWindow* window);
	void DrawMoving(RenderWindow* window);

private:
	// Stable background
	Texture* backgroundTex;
	Sprite backSprite;

	// Move background
	Texture* movingBackTex;
	Sprite movingBack1Shape;
	Sprite movingBack2Shape;

	Vector2f scrollSpeed;

	float mult;
};