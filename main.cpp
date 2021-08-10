#include "Game.h"


int main()
{
	// Generate random seed
	srand(time(NULL));
	// Init window
	RenderWindow window(VideoMode(1920, 1080), "FISH WAR", Style::Fullscreen);

	sf::Image icon;
	icon.loadFromFile("Textures/icon.png");
	window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

	// Init textures
	Texture playerTex;
	playerTex.loadFromFile("Textures/boat.png");
	Texture enemyTex;
	enemyTex.loadFromFile("Textures/fish.png");
	Texture bulletTex;
	bulletTex.loadFromFile("Textures/kick.png");
	Texture logoText;
	logoText.loadFromFile("Textures/logo.png");
	Texture explosion;
	//explosion.loadFromFile("Textures/explosion.png");
	explosion.loadFromFile("Textures/Boom.png");

	// Menu background
	Texture backgroundMenu;
	backgroundMenu.loadFromFile("Textures/menu.png");
	// Moving background
	Texture movingBack;
	movingBack.loadFromFile("Textures/back2.png");

	float shootLapse = 0.35f;

	Texture bomber;
	bomber.loadFromFile("Textures/enemy.png");

	Texture addBullet;
	addBullet.loadFromFile("Textures/bullet.png");

	Texture addHP;
	addHP.loadFromFile("Textures/health.png");

	Texture bossTex;
	bossTex.loadFromFile("Textures/Boss.png");


	// Init game
	Game game(&window, &playerTex, &bulletTex, &enemyTex, &logoText, shootLapse,
		&backgroundMenu, &explosion, &movingBack, &bomber, &addBullet, &addHP);


	// Clock
	Clock clock;
	float deltaTime = 0.f;

	game.Run();
	return 0;
}
