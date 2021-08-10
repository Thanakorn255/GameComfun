#include "Menu.h"

Menu::Menu(float width, float height)
{
	this->KeyTimer = 0.f;
	this->KeyLapse = 1.f;
	this->font.loadFromFile("Fonts/Dosis-Light.ttf");
	text[0].setFont(font);
	text[0].setFillColor(Color::Yellow);
	text[0].setString("New Game");
	text[0].setPosition(Vector2f(width / 2, height / (NUM_OF_LINE + 1) * 1));

	text[1].setFont(font);
	text[1].setFillColor(Color::Black);
	text[1].setString("2 Player");
	text[1].setPosition(Vector2f(width / 2, height / (NUM_OF_LINE + 1) * 2));

	text[2].setFont(font);
	text[2].setFillColor(Color::Black);
	text[2].setString("Highscore");
	text[2].setPosition(Vector2f(width / 2, height / (NUM_OF_LINE + 1) * 3));

	text[3].setFont(font);
	text[3].setFillColor(Color::Black);
	text[3].setString("Quit");
	text[3].setPosition(Vector2f(width / 2, height / (NUM_OF_LINE + 1) * 4));

	currentLineIndex = 0;
}

Menu::~Menu()
{
}

void Menu::Draw(RenderWindow* window)
{
	for (int i = 0; i < NUM_OF_LINE; i++)
	{
		window->draw(text[i]);
	}
}

void Menu::MoveUp()
{
	if (currentLineIndex > 0)
	{
		text[currentLineIndex].setFillColor(Color::Black);
		currentLineIndex--;
		text[currentLineIndex].setFillColor(Color::Yellow);
	}
}

void Menu::MovedDown()
{
	if (currentLineIndex < NUM_OF_LINE - 1)
	{
		text[currentLineIndex].setFillColor(Color::Black);
		currentLineIndex++;
		text[currentLineIndex].setFillColor(Color::Yellow);
	}
}

void Menu::MenuUpdate(float dt)
{
	KeyTimer += dt;
	if (Keyboard::isKeyPressed(Keyboard::Down) && KeyTimer > KeyLapse)
	{
		KeyTimer -= KeyLapse;
		MovedDown();
	}
}

int Menu::GetLine()
{
	return this->currentLineIndex;
}
