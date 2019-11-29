#include <SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "stdlib.h"
#include <string>
#include <sstream>
#include <math.h>
#include <iostream>
#include <vector>
#include <string>
#include "Collision.h"




bool hpbuttom=false;
bool HPposion;
bool modedef, modeatk;
bool Start = true;
bool menu = true;
bool menuIngame = false;
int p = 1;
int close = 0;
int y = 0;
int animationFrame = 0;
int animationattack = 0;
int dragonanimationFram = 0;
int dragonviolet = 0;
int countscore = 0;
int cout1 = 0,cout2=0;
float debouce,debouce2;
int scoreHP = 0;








int HPmodedef=0;
int HPmodeatk = 10000;

float MyHP = 0;


int Xlevel1OR1;

int Xlevel1OR2;

int Xlevel1OR3;

int Xlevel1OR4;

int Xlevel1OR5;

int Xlevel1OR6;

int Xlevel1OR7;

int Xlevel1OR8;

int Xlevel1OR9;

int Xlevel1OR10;



///////level2

int Xlevel2OR1;

int Xlevel2OR2;

int Xlevel2OR3;

int Xlevel2OR4;

int Xlevel2OR5;

int Xlevel2OR6;

int Xlevel2OR7;

int Xlevel2OR8;

int Xlevel2OR9;

int Xlevel2OR10;





///////level3
int Xlevel3OR1;

int Xlevel3OR2;

int Xlevel3OR3;

int Xlevel3OR4;

int Xlevel3OR5;

int Xlevel3OR6;

int Xlevel3OR7;

int Xlevel3OR8;


//.........................Posion
int posionFOR1;
int posionFOR2;
int posionFOR3;



int atk1;

int def1;





//...........................................random posion
int randomposionfor1()
{
	int randomposionfor1[7] = {  110, 150,250,500,450,650,750 };

	posionFOR1 = rand() % 7;

	return randomposionfor1[posionFOR1];
}

int randomposionfor2()
{
	int randomposionfor2[7] = { 110, 150,250,500,450,650,750 };

	posionFOR2 = rand() % 7;

	return randomposionfor2[posionFOR2];
}

int randomposionfor3()
{
	int randomposionfor3[11] = {-200, 110, 150,-200,250,500,450,-500,650,-500,750 };

	posionFOR3 = rand() % 11;

	return randomposionfor3[posionFOR3];
}


int randomatk1()
{
	int randomatk1[30] = { -200,-200,-200,-200,-200 ,-200,-200,-200,-200,-200,-200,-200,-200,-200,-200 ,-200,-200,-200,-200,-200, -110,150,-200,250,-500,450,-500,650,-500,750 };

	atk1 = rand() % 30;

	return randomatk1[atk1];
}

int randomdef1()
{
	int randomdef1[5] = { 150,250,450,650,750 };

	def1 = rand() % 5;

	return randomdef1[def1];
}






///......................................................Random Monster level1...............................................


int randomlevel1OR1X()
{
	int randomlevel1OR1enyme[4] = {-150,1280,-200,1200 };

	Xlevel1OR1 = rand() % 4;

	return randomlevel1OR1enyme[Xlevel1OR1];
}

int randomlevel1OR2X()
{
	int randomlevel1OR2enyme[4] = { -150,1280,-200,1200 };

	Xlevel1OR2 = rand() % 4;

	return randomlevel1OR2enyme[Xlevel1OR2];
}

int randomlevel1OR3X()
{
	int randomlevel1OR3enyme[4] = { -150,1280,-200,1200 };
	
	Xlevel1OR3 = rand() % 4;

	return randomlevel1OR3enyme[Xlevel1OR3];
}

int randomlevel1OR4X()
{
	int randomlevel1OR4enyme[4] = { -150,1280,-200,1200 };

	Xlevel1OR4 = rand() % 4;

	return randomlevel1OR4enyme[Xlevel1OR4];
}

int randomlevel1OR5X()
{
	int randomlevel1OR5enyme[4] = { -150,1280,-200,1200 };

	Xlevel1OR5 = rand() % 4;

	return randomlevel1OR5enyme[Xlevel1OR5];
}

int randomlevel1OR6X()
{
	int randomlevel1OR6enyme[4] = { -150,1280,-200,1200 };

	Xlevel1OR6 = rand() % 4;

	return randomlevel1OR6enyme[Xlevel1OR6];
}

int randomlevel1OR7X()
{
	int randomlevel1OR7enyme[4] = { -150,1280,-200,1200 };

	Xlevel1OR7 = rand() % 4;

	return randomlevel1OR7enyme[Xlevel1OR7];
}

int randomlevel1OR8X()
{
	int randomlevel1OR8enyme[4] = { -150,1280,-200,1200 };

	Xlevel1OR8 = rand() % 4;

	return randomlevel1OR8enyme[Xlevel1OR8];
}

int randomlevel1OR9X()
{
	int randomlevel1OR9enyme[4] = { -150,1280,-200,1200 };

	Xlevel1OR9 = rand() % 4;

	return randomlevel1OR9enyme[Xlevel1OR9];
}

int randomlevel1OR10X()
{
	int randomlevel1OR10enyme[4] = { -150,1280,-200,1200 };

	Xlevel1OR10 = rand() % 4;

	return randomlevel1OR10enyme[Xlevel1OR10];
}

/////..........................................................Random monter level2 ....................................


int randomlevel2OR1X()
{
	int randomlevel2OR1enyme[4] = { -200,1280,-250,1200 };

	Xlevel2OR1 = rand() % 4;

	return randomlevel2OR1enyme[Xlevel2OR1];
}

int randomlevel2OR2X()
{
	int randomlevel2OR2enyme[4] = { -200,1280, -250,1200 };

	Xlevel2OR2 = rand() % 4;

	return randomlevel2OR2enyme[Xlevel2OR2];
}

int randomlevel2OR3X()
{
	int randomlevel2OR3enyme[4] = { -200,1280, -250,1200 };

	Xlevel2OR3 = rand() % 4;

	return randomlevel2OR3enyme[Xlevel2OR3];
}

int randomlevel2OR4X()
{
	int randomlevel2OR4enyme[4] = { -200,1280, -250,1200 };

	Xlevel2OR4 = rand() % 4;

	return randomlevel2OR4enyme[Xlevel2OR4];
}

int randomlevel2OR5X()
{
	int randomlevel2OR5enyme[4] = { -200,1280, -250,1200 };

	Xlevel2OR5 = rand() % 4;

	return randomlevel2OR5enyme[Xlevel2OR5];
}

int randomlevel2OR6X()
{
	int randomlevel2OR6enyme[4] = { -200,1280, -250,1200 };

	Xlevel2OR6 = rand() % 4;

	return randomlevel2OR6enyme[Xlevel2OR6];
}

int randomlevel2OR7X()
{
	int randomlevel2OR7enyme[4] = { -200,1280, -250,1200 };

	Xlevel2OR7 = rand() % 4;

	return randomlevel2OR7enyme[Xlevel2OR7];
}

int randomlevel2OR8X()
{
	int randomlevel2OR8enyme[4] = { -200,1280, -250,1200 };

	Xlevel2OR8 = rand() % 4;

	return randomlevel2OR8enyme[Xlevel2OR8];
}

int randomlevel2OR9X()
{
	int randomlevel2OR9enyme[4] = { -200,1280, -250,1200 };

	Xlevel2OR9 = rand() % 4;

	return randomlevel2OR9enyme[Xlevel2OR9];
}

int randomlevel2OR10X()
{
	int randomlevel2OR10enyme[4] = { -200,1280, -250,1200 };

	Xlevel2OR10 = rand() % 4;

	return randomlevel2OR10enyme[Xlevel2OR10];
}


//.......................................................Random monster level3......................................


int randomlevel3OR1X()
{
	int randomlevel3OR1enyme[4] = { -200,1280,-200,1280 };

	Xlevel3OR1 = rand() % 4;

	return randomlevel3OR1enyme[Xlevel3OR1];
}

int randomlevel3OR2X()
{
	int randomlevel3OR2enyme[4] = { -200,1280,-200,1280 };

	Xlevel3OR2 = rand() % 4;

	return randomlevel3OR2enyme[Xlevel3OR2];
}

int randomlevel3OR3X()
{
	int randomlevel3OR3enyme[4] = { -200,1280,-200,1280 };

	Xlevel3OR3 = rand() % 4;

	return randomlevel3OR3enyme[Xlevel3OR3];
}

int randomlevel3OR4X()
{
	int randomlevel3OR4enyme[4] = { -200,1280,-200,1280 };

	Xlevel3OR4 = rand() % 4;

	return randomlevel3OR4enyme[Xlevel3OR4];
}

int randomlevel3OR5X()
{
	int randomlevel3OR5enyme[2] = { -200,1280 };

	Xlevel3OR5 = rand() % 2;

	return randomlevel3OR5enyme[Xlevel3OR5];
}

int randomlevel3OR6X()
{
	int randomlevel3OR6enyme[2] = { -200,1280 };

	Xlevel3OR6 = rand() % 2;

	return randomlevel3OR6enyme[Xlevel3OR6];
}

int randomlevel3OR7X()
{
	int randomlevel3OR7enyme[2] = { -200,1280 };

	Xlevel3OR7 = rand() % 2;

	return randomlevel3OR7enyme[Xlevel3OR7];
}

int randomlevel3OR8X()
{
	int randomlevel3OR8enyme[2] = { -200,1280 };

	Xlevel3OR8 = rand() % 2;

	return randomlevel3OR8enyme[Xlevel3OR8];
}

int main()
{



	srand(time(NULL));




	//....................................................SetScore...............................................................
	sf::Font fontcombo;
	fontcombo.loadFromFile("ABCD.ttf");
	std::ostringstream score;
	sf::Text Score;
	Score.setCharacterSize(30);
	Score.setPosition({ 800.f,20.f });
	Score.setString(score.str());
	Score.setFont(fontcombo);







	//.....................................................SetWindow...............................................................

	sf::RenderWindow window(sf::VideoMode(1080, 720), "Game from scratch!", sf::Style::Titlebar);
	sf::View view1(sf::FloatRect(200.f, 200.f, 300.f, 200.f));
	sf::View view2(sf::Vector2f(350.f, 300.f), sf::Vector2f(300.f, 200.f));







	//.....................................................Blackground..............................................................

	sf::Event event;
	sf::Texture texture;
	texture.loadFromFile("blackground/map2.jpg");//blackground
	sf::Sprite ground(texture);
	ground.setScale(1.0f, 1.0f);
	ground.setPosition(0.0f, 0.0f);


	//..........................Menu in game...............................................
	sf::Texture menuingame;
	menuingame.loadFromFile("blackground/m1.png");
	sf::Sprite Menuingame(menuingame);
	Menuingame.setScale(1.0f, 1.0f);
	Menuingame.setPosition(0.0f, 0.0f);

	sf::Texture backto;
	backto.loadFromFile("blackground/m2.png");
	sf::Sprite Backto(backto);
	Backto.setScale(1.0f, 1.0f);
	Backto.setPosition(0.0f, 0.0f);



	sf::Texture exit;
	exit.loadFromFile("blackground/m3.png");
	sf::Sprite Exit(exit);
	Exit.setScale(1.0f, 1.0f);
	Exit.setPosition(0.0f, 0.0f);


	//**************************item........................

	sf::Texture Posion;
	Posion.loadFromFile("item/Posion.png");
	sf::Sprite posion(Posion);
	posion.setScale(3.0f, 3.0f);
	posion.setPosition(randomposionfor1(), 500);


	sf::Sprite posionwith2(Posion);
	posionwith2.setScale(3.0f, 3.0f);
	posionwith2.setPosition(randomposionfor2(), 500);


	sf::Sprite posionwith3(Posion);
	posionwith3.setScale(3.0f, 3.0f);
	posionwith3.setPosition(randomposionfor3(), 500);








	sf::Sprite posion2(Posion);
	posion2.setScale(3.0f, 3.0f);

	


	sf::Sprite posion3(Posion);
	posion3.setScale(3.0f, 3.0f);


	sf::Sprite posion4(Posion);
	posion4.setScale(3.0f, 3.0f);

	


	

	sf::Texture Atk;
	Atk.loadFromFile("item/Buffatk.png");
	sf::Sprite atk(Atk);
	atk.setScale(3.0f, 3.0f);
	atk.setPosition(randomatk1(), 500);


	sf::Texture Def;
	Def.loadFromFile("item/BuffDEF.png");
	sf::Sprite def(Def);
	def.setScale(3.0f, 3.0f);
	def.setPosition(randomdef1(), 500);

	//.........................................................Menu...................................................................

	sf::Texture blackMenu;
	blackMenu.loadFromFile("blackground/map2.jpg");//backMenu
	sf::Sprite Menu(blackMenu);
	Menu.setScale(1.0f, 1.0f);
	Menu.setPosition(0.0f, 0.0f);

	sf::Texture mode00;
	mode00.loadFromFile("blackground/mode0.png");
	sf::Sprite mode(mode00);
	mode.setScale(1.0f, 1.0f);
	mode.setPosition(50.0f, 100.0f);


	sf::Texture mode11;
	mode11.loadFromFile("blackground/mode1.png");
	sf::Sprite mode1(mode11);
	mode1.setScale(1.0f, 1.0f);
	mode1.setPosition(50.0f, 100.0f);


	sf::Texture mode22;
	mode22.loadFromFile("blackground/mode2.png");
	sf::Sprite mode2(mode22);
	mode2.setScale(1.0f, 1.0f);
	mode2.setPosition(50.0f, 100.0f);

	sf::Texture mode33;
	mode33.loadFromFile("blackground/mode3.png");
	sf::Sprite mode3(mode33);
	mode3.setScale(1.0f, 1.0f);
	mode3.setPosition(50.0f, 100.0f);





	//.........................................................sprite knight.................................................

	sf::Texture playerTexture;
	if (!playerTexture.loadFromFile("knight/knight.png"))
	{
		std::cout << "Load failed" << std::endl;
	}

	sf::Sprite shapeSprite;
	shapeSprite.setTexture(playerTexture);

	int spriteSizeX = playerTexture.getSize().x / 4;
	int spriteSizeY = playerTexture.getSize().y / 5;

	shapeSprite.setTextureRect(sf::IntRect(0, 0, spriteSizeX, spriteSizeY));
	sf::Vector2f spawnPoint = { 450.f, 480.f };
	shapeSprite.setPosition(spawnPoint);
	
	
	

	

	//...........................................................MonsterLEVEL1..................................................
	sf::Texture Mlevel1;
	if (!Mlevel1.loadFromFile("Enemy/monster3.png"))
	{
		std::cout << "Load failed1" << std::endl;
	}



	sf::Sprite level1;
	level1.setTexture(Mlevel1);
	int Mlevel1SizeX = Mlevel1.getSize().x / 4;
	int Mlevel1SizeY = Mlevel1.getSize().y / 4;
	level1.setTextureRect(sf::IntRect(0, 0, Mlevel1SizeX, Mlevel1SizeY));
	level1.setPosition(randomlevel1OR1X(), 470.f);

	float MyHPmon1 = 20000;
	sf::RectangleShape HPmon1(sf::Vector2f(MyHPmon1 / 250.0f, 30));
	HPmon1.setPosition(sf::Vector2f(70, 46));
	HPmon1.setFillColor(sf::Color::Red);
	HPmon1.setSize(sf::Vector2f(MyHPmon1 / 320.f, 5));



	
	
	sf::Sprite level11;
	level11.setTexture(Mlevel1);
	int Mlevel11SizeX = Mlevel1.getSize().x / 4;
	int Mlevel11SizeY = Mlevel1.getSize().y / 4;
	level11.setTextureRect(sf::IntRect(0, 0, Mlevel11SizeX, Mlevel11SizeY));
	level11.setPosition(randomlevel1OR2X(), 470.f);


	float MyHPmon11 = 20000;
	sf::RectangleShape HPmon11(sf::Vector2f(MyHPmon11 / 250.0f, 30));
	HPmon11.setPosition(sf::Vector2f(70, 46));
	HPmon11.setFillColor(sf::Color::Red);
	HPmon11.setSize(sf::Vector2f(MyHPmon11 / 320.f, 5));




	
	sf::Sprite level12;
	level12.setTexture(Mlevel1);
	int Mlevel12SizeX = Mlevel1.getSize().x / 4;
	int Mlevel12SizeY = Mlevel1.getSize().y / 4;
	level12.setTextureRect(sf::IntRect(0, 0, Mlevel12SizeX, Mlevel12SizeY));
	level12.setPosition(randomlevel1OR3X(), 470.f);


	float MyHPmon12 = 20000;
	sf::RectangleShape HPmon12(sf::Vector2f(MyHPmon12 / 250.0f, 30));
	HPmon12.setPosition(sf::Vector2f(70, 46));
	HPmon12.setFillColor(sf::Color::Red);
	HPmon12.setSize(sf::Vector2f(MyHPmon12 / 320.f, 5));


	
	sf::Sprite level13;
	level13.setTexture(Mlevel1);
	int Mlevel13SizeX = Mlevel1.getSize().x / 4;
	int Mlevel13SizeY = Mlevel1.getSize().y / 4;
	level13.setTextureRect(sf::IntRect(0, 0, Mlevel13SizeX, Mlevel13SizeY));
	level13.setPosition(randomlevel1OR4X(), 470.f);


	float MyHPmon13 = 20000;
	sf::RectangleShape HPmon13(sf::Vector2f(MyHPmon13 / 250.0f, 30));
	HPmon13.setPosition(sf::Vector2f(70, 46));
	HPmon13.setFillColor(sf::Color::Red);
	HPmon13.setSize(sf::Vector2f(MyHPmon13 / 320.f, 5));





	
	sf::Sprite level14;
	level14.setTexture(Mlevel1);
	int Mlevel14SizeX = Mlevel1.getSize().x / 4;
	int Mlevel14SizeY = Mlevel1.getSize().y / 4;
	level14.setTextureRect(sf::IntRect(0, 0, Mlevel14SizeX, Mlevel14SizeY));
	level14.setPosition(randomlevel1OR5X(), 470.f);


	float MyHPmon14 = 20000;
	sf::RectangleShape HPmon14(sf::Vector2f(MyHPmon14 / 250.0f, 30));
	HPmon14.setPosition(sf::Vector2f(70, 46));
	HPmon14.setFillColor(sf::Color::Red);
	HPmon14.setSize(sf::Vector2f(MyHPmon14 / 320.f, 5));




	
	sf::Sprite level15;
	level15.setTexture(Mlevel1);
	int Mlevel15SizeX = Mlevel1.getSize().x / 4;
	int Mlevel15SizeY = Mlevel1.getSize().y / 4;
	level15.setTextureRect(sf::IntRect(0, 0, Mlevel15SizeX, Mlevel15SizeY));
	level15.setPosition(randomlevel1OR6X(), 470.f);


	float MyHPmon15 = 20000;
	sf::RectangleShape HPmon15(sf::Vector2f(MyHPmon15 / 250.0f, 30));
	HPmon15.setPosition(sf::Vector2f(70, 46));
	HPmon15.setFillColor(sf::Color::Red);
	HPmon15.setSize(sf::Vector2f(MyHPmon15 / 320.f, 5));




	sf::Sprite level16;
	level16.setTexture(Mlevel1);
	int Mlevel16SizeX = Mlevel1.getSize().x / 4;
	int Mlevel16SizeY = Mlevel1.getSize().y / 4;
	level16.setTextureRect(sf::IntRect(0, 0, Mlevel16SizeX, Mlevel16SizeY));
	level16.setPosition(randomlevel1OR7X(), 470.f);


	float MyHPmon16 = 20000;
	sf::RectangleShape HPmon16(sf::Vector2f(MyHPmon16 / 250.0f, 30));
	HPmon16.setPosition(sf::Vector2f(70, 46));
	HPmon16.setFillColor(sf::Color::Red);
	HPmon16.setSize(sf::Vector2f(MyHPmon16 / 320.f, 5));




	
	sf::Sprite level17;
	level17.setTexture(Mlevel1);
	int Mlevel17SizeX = Mlevel1.getSize().x / 4;
	int Mlevel17SizeY = Mlevel1.getSize().y / 4;
	level17.setTextureRect(sf::IntRect(0, 0, Mlevel17SizeX, Mlevel17SizeY));
	level17.setPosition(randomlevel1OR8X(), 470.f);


	float MyHPmon17 = 20000;
	sf::RectangleShape HPmon17(sf::Vector2f(MyHPmon17 / 250.0f, 30));
	HPmon17.setPosition(sf::Vector2f(70, 46));
	HPmon17.setFillColor(sf::Color::Red);
	HPmon17.setSize(sf::Vector2f(MyHPmon17 / 320.f, 5));




	
	sf::Sprite level18;
	level18.setTexture(Mlevel1);
	int Mlevel18SizeX = Mlevel1.getSize().x / 4;
	int Mlevel18SizeY = Mlevel1.getSize().y / 4;
	level18.setTextureRect(sf::IntRect(0, 0, Mlevel18SizeX, Mlevel18SizeY));
	level18.setPosition(randomlevel1OR9X(), 470.f);


	float MyHPmon18 = 20000;
	sf::RectangleShape HPmon18(sf::Vector2f(MyHPmon18 / 250.0f, 30));
	HPmon18.setPosition(sf::Vector2f(70, 46));
	HPmon18.setFillColor(sf::Color::Red);
	HPmon18.setSize(sf::Vector2f(MyHPmon18 / 320.f, 5));



	
	sf::Sprite level19;
	level19.setTexture(Mlevel1);
	int Mlevel19SizeX = Mlevel1.getSize().x / 4;
	int Mlevel19SizeY = Mlevel1.getSize().y / 4;
	level19.setTextureRect(sf::IntRect(0, 0, Mlevel19SizeX, Mlevel19SizeY));
	level19.setPosition(randomlevel1OR10X(), 470.f);


	float MyHPmon19 = 20000;
	sf::RectangleShape HPmon19(sf::Vector2f(MyHPmon19 / 250.0f, 30));
	HPmon19.setPosition(sf::Vector2f(70, 46));
	HPmon19.setFillColor(sf::Color::Red);
	HPmon19.setSize(sf::Vector2f(MyHPmon19 / 320.f, 5));




	//...........................................................monster level2...................................................
	sf::Texture Mlevel2;
	if (!Mlevel2.loadFromFile("Enemy/dragonred.png"))
	{
		std::cout << "Load failed1" << std::endl;
	}
	sf::Sprite level2;
	level2.setTexture(Mlevel2);
	int Mlevel2SizeX = Mlevel2.getSize().x / 4;
	int Mlevel2SizeY = Mlevel2.getSize().y / 4;
	level2.setTextureRect(sf::IntRect(0, 0, Mlevel2SizeX, Mlevel2SizeY));
	level2.setPosition(randomlevel2OR1X(), 400.f);
	
	float MyHPmon2 = 30000;
	sf::RectangleShape HPmon2(sf::Vector2f(MyHPmon2 / 250.0f, 30));
	HPmon2.setPosition(sf::Vector2f(70, 46));
	HPmon2.setFillColor(sf::Color::Blue);
	HPmon2.setSize(sf::Vector2f(MyHPmon2 / 320.f, 5));


	sf::Sprite level21;
	level21.setTexture(Mlevel2);
	int Mlevel21SizeX = Mlevel2.getSize().x / 4;
	int Mlevel21SizeY = Mlevel2.getSize().y / 4;
	level21.setTextureRect(sf::IntRect(0, 0, Mlevel21SizeX, Mlevel21SizeY));
	level21.setPosition(randomlevel2OR2X(), 400.f);

	float MyHPmon21 = 30000;
	sf::RectangleShape HPmon21(sf::Vector2f(MyHPmon21 / 250.0f, 30));
	HPmon21.setPosition(sf::Vector2f(70, 46));
	HPmon21.setFillColor(sf::Color::Blue);
	HPmon21.setSize(sf::Vector2f(MyHPmon21 / 320.f, 5));



	sf::Sprite level22;
	level22.setTexture(Mlevel2);
	int Mlevel22SizeX = Mlevel2.getSize().x / 4;
	int Mlevel22SizeY = Mlevel2.getSize().y / 4;
	level22.setTextureRect(sf::IntRect(0, 0, Mlevel22SizeX, Mlevel22SizeY));
	level22.setPosition(randomlevel2OR3X(), 400.f);

	float MyHPmon22 = 30000;
	sf::RectangleShape HPmon22(sf::Vector2f(MyHPmon22 / 250.0f, 30));
	HPmon22.setPosition(sf::Vector2f(70, 46));
	HPmon22.setFillColor(sf::Color::Blue);
	HPmon22.setSize(sf::Vector2f(MyHPmon22 / 320.f, 5));

	
	sf::Sprite level23;
	level23.setTexture(Mlevel2);
	int Mlevel23SizeX = Mlevel2.getSize().x / 4;
	int Mlevel23SizeY = Mlevel2.getSize().y / 4;
	level23.setTextureRect(sf::IntRect(0, 0, Mlevel23SizeX, Mlevel23SizeY));
	level23.setPosition(randomlevel2OR4X(), 400.f);

	float MyHPmon23 = 30000;
	sf::RectangleShape HPmon23(sf::Vector2f(MyHPmon23 / 250.0f, 30));
	HPmon23.setPosition(sf::Vector2f(70, 46));
	HPmon23.setFillColor(sf::Color::Blue);
	HPmon23.setSize(sf::Vector2f(MyHPmon23 / 320.f, 5));



	sf::Sprite level24;
	level24.setTexture(Mlevel2);
	int Mlevel24SizeX = Mlevel2.getSize().x / 4;
	int Mlevel24SizeY = Mlevel2.getSize().y / 4;
	level24.setTextureRect(sf::IntRect(0, 0, Mlevel24SizeX, Mlevel24SizeY));
	level24.setPosition(randomlevel2OR5X(), 400.f);

	float MyHPmon24 = 30000;
	sf::RectangleShape HPmon24(sf::Vector2f(MyHPmon24 / 250.0f, 30));
	HPmon24.setPosition(sf::Vector2f(70, 46));
	HPmon24.setFillColor(sf::Color::Blue);
	HPmon24.setSize(sf::Vector2f(MyHPmon24 / 320.f, 5));
	


	sf::Sprite level25;
	level25.setTexture(Mlevel2);
	int Mlevel25SizeX = Mlevel2.getSize().x / 4;
	int Mlevel25SizeY = Mlevel2.getSize().y / 4;
	level25.setTextureRect(sf::IntRect(0, 0, Mlevel25SizeX, Mlevel25SizeY));
	level25.setPosition(randomlevel2OR6X(), 400.f);

	float MyHPmon25 = 30000;
	sf::RectangleShape HPmon25(sf::Vector2f(MyHPmon25 / 250.0f, 30));
	HPmon25.setPosition(sf::Vector2f(70, 46));
	HPmon25.setFillColor(sf::Color::Blue);
	HPmon25.setSize(sf::Vector2f(MyHPmon21 / 320.f, 5));

	
	sf::Sprite level26;
	level26.setTexture(Mlevel2);
	int Mlevel26SizeX = Mlevel2.getSize().x / 4;
	int Mlevel26SizeY = Mlevel2.getSize().y / 4;
	level26.setTextureRect(sf::IntRect(0, 0, Mlevel26SizeX, Mlevel26SizeY));
	level26.setPosition(randomlevel2OR7X(), 400.f);

	float MyHPmon26 = 30000;
	sf::RectangleShape HPmon26(sf::Vector2f(MyHPmon26 / 250.0f, 30));
	HPmon26.setPosition(sf::Vector2f(70, 46));
	HPmon26.setFillColor(sf::Color::Blue);
	HPmon26.setSize(sf::Vector2f(MyHPmon26 / 320.f, 5));


	sf::Sprite level27;
	level27.setTexture(Mlevel2);
	int Mlevel27SizeX = Mlevel2.getSize().x / 4;
	int Mlevel27SizeY = Mlevel2.getSize().y / 4;
	level27.setTextureRect(sf::IntRect(0, 0, Mlevel27SizeX, Mlevel27SizeY));
	level27.setPosition(randomlevel2OR8X(), 400.f);

	float MyHPmon27 = 30000;
	sf::RectangleShape HPmon27(sf::Vector2f(MyHPmon27 / 250.0f, 30));
	HPmon27.setPosition(sf::Vector2f(70, 46));
	HPmon27.setFillColor(sf::Color::Blue);
	HPmon27.setSize(sf::Vector2f(MyHPmon27 / 320.f, 5));


	sf::Sprite level28;
	level28.setTexture(Mlevel2);
	int Mlevel28SizeX = Mlevel2.getSize().x / 4;
	int Mlevel28SizeY = Mlevel2.getSize().y / 4;
	level28.setTextureRect(sf::IntRect(0, 0, Mlevel28SizeX, Mlevel28SizeY));
	level28.setPosition(randomlevel2OR9X(), 400.f);

	float MyHPmon28 = 30000;
	sf::RectangleShape HPmon28(sf::Vector2f(MyHPmon28 / 250.0f, 30));
	HPmon28.setPosition(sf::Vector2f(70, 46));
	HPmon28.setFillColor(sf::Color::Blue);
	HPmon28.setSize(sf::Vector2f(MyHPmon28 / 320.f, 5));




	sf::Sprite level29;
	level29.setTexture(Mlevel2);
	int Mlevel29SizeX = Mlevel2.getSize().x / 4;
	int Mlevel29SizeY = Mlevel2.getSize().y / 4;
	level29.setTextureRect(sf::IntRect(0, 0, Mlevel29SizeX, Mlevel29SizeY));
	level29.setPosition(randomlevel2OR10X(), 400.f);

	float MyHPmon29 = 30000;
	sf::RectangleShape HPmon29(sf::Vector2f(MyHPmon29 / 250.0f, 30));
	HPmon29.setPosition(sf::Vector2f(70, 46));
	HPmon29.setFillColor(sf::Color::Blue);
	HPmon29.setSize(sf::Vector2f(MyHPmon29 / 320.f, 5));


	
	//.............................................................monterlevel 3................................................
		
		
		sf::Texture Mlevel3;
		if (!Mlevel3.loadFromFile("Enemy/yak1.png"))
		{
			std::cout << "Load failed1" << std::endl;
		}
		sf::Sprite level3;
		level3.setTexture(Mlevel3);
		int Mlevel3SizeX = Mlevel3.getSize().x / 4;
		int Mlevel3SizeY = Mlevel3.getSize().y / 4;
		level3.setTextureRect(sf::IntRect(0, 0, Mlevel3SizeX, Mlevel3SizeY));
		level3.setPosition(randomlevel3OR1X(), 400.f);
	
	
		float MyHPmon3 = 40000;
		sf::RectangleShape HPmon3(sf::Vector2f(MyHPmon3 / 250.0f, 30));
		HPmon3.setPosition(sf::Vector2f(70, 46));
		HPmon3.setFillColor(sf::Color::Green);
		HPmon3.setSize(sf::Vector2f(MyHPmon3 / 320.f, 5));

		



	sf::Sprite level31;
	level31.setTexture(Mlevel3);
	int Mlevel31SizeX = Mlevel3.getSize().x / 4;
	int Mlevel31SizeY = Mlevel3.getSize().y / 4;
	level31.setTextureRect(sf::IntRect(0, 0, Mlevel31SizeX, Mlevel31SizeY));
	level31.setPosition(randomlevel3OR2X(), 400.f);


	float MyHPmon31 = 40000;
	sf::RectangleShape HPmon31(sf::Vector2f(MyHPmon31 / 250.0f, 30));
	HPmon31.setPosition(sf::Vector2f(70, 46));
	HPmon31.setFillColor(sf::Color::Green);
	HPmon31.setSize(sf::Vector2f(MyHPmon31 / 320.f, 5));



	
	sf::Sprite level32;
	level32.setTexture(Mlevel3);
	int Mlevel32SizeX = Mlevel3.getSize().x / 4;
	int Mlevel32SizeY = Mlevel3.getSize().y / 4;
	level32.setTextureRect(sf::IntRect(0, 0, Mlevel32SizeX, Mlevel32SizeY));
	level32.setPosition(randomlevel3OR3X(), 400.f);


	float MyHPmon32 = 40000;
	sf::RectangleShape HPmon32(sf::Vector2f(MyHPmon32 / 250.0f, 30));
	HPmon32.setPosition(sf::Vector2f(70, 46));
	HPmon32.setFillColor(sf::Color::Green);
	HPmon32.setSize(sf::Vector2f(MyHPmon32 / 320.f, 5));



	

	sf::Sprite level33;
	level33.setTexture(Mlevel3);
	int Mlevel33SizeX = Mlevel3.getSize().x / 4;
	int Mlevel33SizeY = Mlevel3.getSize().y / 4;
	level33.setTextureRect(sf::IntRect(0, 0, Mlevel33SizeX, Mlevel33SizeY));
	level33.setPosition(randomlevel3OR4X(), 400.f);


	float MyHPmon33 = 40000;
	sf::RectangleShape HPmon33(sf::Vector2f(MyHPmon33 / 250.0f, 30));
	HPmon33.setPosition(sf::Vector2f(70, 46));
	HPmon33.setFillColor(sf::Color::Green);
	HPmon33.setSize(sf::Vector2f(MyHPmon33 / 320.f, 5));



	
	sf::Sprite level34;
	level34.setTexture(Mlevel3);
	int Mlevel34SizeX = Mlevel3.getSize().x / 4;
	int Mlevel34SizeY = Mlevel3.getSize().y / 4;
	level34.setTextureRect(sf::IntRect(0, 0, Mlevel34SizeX, Mlevel34SizeY));
	level34.setPosition(randomlevel3OR5X(), 400.f);


	float MyHPmon34 = 40000;
	sf::RectangleShape HPmon34(sf::Vector2f(MyHPmon34 / 250.0f, 30));
	HPmon34.setPosition(sf::Vector2f(70, 46));
	HPmon34.setFillColor(sf::Color::Green);
	HPmon34.setSize(sf::Vector2f(MyHPmon34 / 320.f, 5));



	
	sf::Sprite level35;
	level35.setTexture(Mlevel3);
	int Mlevel35SizeX = Mlevel3.getSize().x / 4;
	int Mlevel35SizeY = Mlevel3.getSize().y / 4;
	level35.setTextureRect(sf::IntRect(0, 0, Mlevel35SizeX, Mlevel35SizeY));
	level35.setPosition(randomlevel3OR6X(), 400.f);


	float MyHPmon35 = 40000;
	sf::RectangleShape HPmon35(sf::Vector2f(MyHPmon35 / 250.0f, 30));
	HPmon35.setPosition(sf::Vector2f(70, 46));
	HPmon35.setFillColor(sf::Color::Green);
	HPmon35.setSize(sf::Vector2f(MyHPmon35 / 320.f, 5));



	
	sf::Sprite level36;
	level36.setTexture(Mlevel3);
	int Mlevel36SizeX = Mlevel3.getSize().x / 4;
	int Mlevel36SizeY = Mlevel3.getSize().y / 4;
	level36.setTextureRect(sf::IntRect(0, 0, Mlevel36SizeX, Mlevel36SizeY));
	level36.setPosition(randomlevel3OR7X(), 400.f);


	float MyHPmon36 = 40000;
	sf::RectangleShape HPmon36(sf::Vector2f(MyHPmon36 / 250.0f, 30));
	HPmon36.setPosition(sf::Vector2f(70, 46));
	HPmon36.setFillColor(sf::Color::Green);
	HPmon36.setSize(sf::Vector2f(MyHPmon36 / 320.f, 5));



	

	sf::Sprite level37;
	level37.setTexture(Mlevel3);
	int Mlevel37SizeX = Mlevel3.getSize().x / 4;
	int Mlevel37SizeY = Mlevel3.getSize().y / 4;
	level37.setTextureRect(sf::IntRect(0, 0, Mlevel37SizeX, Mlevel37SizeY));
	level37.setPosition(randomlevel3OR8X(), 400.f);


	float MyHPmon37 = 40000;
	sf::RectangleShape HPmon37(sf::Vector2f(MyHPmon37 / 250.0f, 30));
	HPmon37.setPosition(sf::Vector2f(70, 46));
	HPmon37.setFillColor(sf::Color::Green);
	HPmon37.setSize(sf::Vector2f(MyHPmon37 / 320.f, 5));

	window.setFramerateLimit(12);


	//.......................................................sound blackground...................................................

	sf::SoundBuffer buffer;
	if (!buffer.loadFromFile("sound/sound1.wav")) //soundbk.wav  //Doo.ogg
	{
		std::cout << "Load music failed" << std::endl;
	}
	sf::Sound soundbk;
	soundbk.setLoop(true);
	soundbk.setBuffer(buffer);






	//...............................................................soundeffect.............................................
	sf::SoundBuffer buffereffect;
	if (!buffereffect.loadFromFile("sound/walk.wav"))
	{
		std::cout << "Load music failed" << std::endl;
	}
	sf::Sound sound;
	sound.setBuffer(buffereffect);

	//soundDragon
	sf::SoundBuffer dragonsound;
	if (!dragonsound.loadFromFile("sound/soundDragon.wav"))
	{
		std::cout << "Load music failed" << std::endl;
	}
	sf::Sound Dragonsound;
	Dragonsound.setBuffer(dragonsound);


	//soundMenu
	sf::SoundBuffer musicMenu;
	if (!musicMenu.loadFromFile("sound/soundbk.wav"))
	{
		std::cout << "Load music failed" << std::endl;
	}
	sf::Sound soundMenu;
	soundMenu.setBuffer(musicMenu);
	soundMenu.setLoop(true);

	//soundsword
	sf::SoundBuffer soundswod;
	if (!soundswod.loadFromFile("sound/sword.wav"))
	{
		std::cout << "Load music failed" << std::endl;
	}
	sf::Sound soundsword;
	soundsword.setBuffer(soundswod);


	//.................................My HP.........................
	sf::Texture HPbar;
	if (!HPbar.loadFromFile("knight/HPbar.png"))
	{	
		return EXIT_FAILURE;
	}
	sf::Sprite hpbar;
	MyHP = 62000;
	hpbar.setTexture(HPbar);
	sf::RectangleShape HP(sf::Vector2f(MyHP / 250.0f, 30));
	HP.setPosition(sf::Vector2f(70, 46));
	HP.setFillColor(sf::Color::Cyan);
	HP.setSize(sf::Vector2f(MyHP / 320.f, 15));
	hpbar.setPosition(0, 0);





	






	//.......................SetNamePlayer...................
	sf::RectangleShape object;
	object.setSize(sf::Vector2f(300.0f, 70.0f));
	object.setOrigin(sf::Vector2f(150.0f, 35.0f));
	object.setPosition(sf::Vector2f(800, 450.0f));

	sf::RectangleShape Cursor;
	Cursor.setSize(sf::Vector2f(5.0f, 64.0f));
	Cursor.setOrigin(sf::Vector2f(2.5f, 32.0f));
	Cursor.setPosition(sf::Vector2f(655, 450.0f));
	Cursor.setFillColor(sf::Color::Black);





	sf::Clock clock;
	float elapsed = 0.0f;
	float time = 0.0f;


	sf::Clock clock2;
	float elapsed2 = 0.0f;
	float time2 = 0;

	sf::Clock clock3;

	sf::Clock clock4;
	


	const int groundHeight = 700;

	while (window.isOpen())
	{
		sf::Event Event;

		while (window.pollEvent(Event))
		{
			switch(Event.type){}
		}

		//elapsed = clock.restart().asSeconds();
	   //time = elapsed;

		window.clear();

		sf::Clock clock;
		float elapsed = 0.0f;
		float time = 0.0f;

		soundMenu.play();		
		
		//.......................................................chooseMenu................................................


		while (menu == true) {
			window.draw(Menu);
			window.draw(mode);
			window.display();
			
			
			countscore = 0;


			MyHP = 62000;
			MyHPmon1 = 20000;
			MyHPmon11 = 20000;
			MyHPmon12 = 20000;
			MyHPmon13 = 20000;
			MyHPmon14 = 20000;
			MyHPmon15 = 20000;
			MyHPmon16 = 20000;
			MyHPmon17 = 20000;
			MyHPmon18 = 20000;
			MyHPmon19 = 20000;
			MyHPmon2 = 30000;
			MyHPmon21 = 30000;
			MyHPmon22 = 30000;
			MyHPmon23 = 30000;
			MyHPmon24 = 30000;
			MyHPmon25 = 30000;

			MyHPmon3 = 40000;
			MyHPmon31 = 40000;
			MyHPmon32 = 40000;
			MyHPmon33 = 40000;

			shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, 128));

			

			shapeSprite.setPosition(450.f, 480.f);
			level1.setPosition(randomlevel1OR1X(),460.f);
			level11.setPosition(randomlevel1OR2X(), 460.f);
			level12.setPosition(randomlevel1OR3X(), 460.f);
			level13.setPosition(randomlevel1OR4X(), 460.f);
			level14.setPosition(randomlevel1OR5X(), 460.f);
			level15.setPosition(randomlevel1OR6X(), 460.f);
			level16.setPosition(randomlevel1OR7X(), 460.f);
			level17.setPosition(randomlevel1OR8X(), 460.f);
			level18.setPosition(randomlevel1OR9X(), 460.f);
			level19.setPosition(randomlevel1OR10X(), 460.f);
		

			level2.setPosition(randomlevel2OR1X(),400.f);
			level21.setPosition(randomlevel2OR2X(), 400.f);



			level3.setPosition(randomlevel3OR1X(),400.f);
			level31.setPosition(randomlevel3OR2X(), 400.f);
			level32.setPosition(randomlevel3OR3X(), 400.f);
			level33.setPosition(randomlevel3OR4X(), 400.f);

			
			
			HP.setSize(sf::Vector2f(MyHP / 320, 15));
			HPmon1.setSize(sf::Vector2f(MyHPmon1 / 320, 5));
			HPmon11.setSize(sf::Vector2f(MyHPmon11 / 320, 5));
			HPmon12.setSize(sf::Vector2f(MyHPmon12 / 320, 5));
			HPmon13.setSize(sf::Vector2f(MyHPmon13 / 320, 5));
			HPmon14.setSize(sf::Vector2f(MyHPmon14 / 320, 5));
			HPmon15.setSize(sf::Vector2f(MyHPmon15 / 320, 5));
			HPmon16.setSize(sf::Vector2f(MyHPmon16 / 320, 5));
			HPmon17.setSize(sf::Vector2f(MyHPmon17 / 320, 5));
			HPmon18.setSize(sf::Vector2f(MyHPmon18 / 320, 5));
			HPmon19.setSize(sf::Vector2f(MyHPmon19 / 320, 5));
			


			HPmon2.setSize(sf::Vector2f(MyHPmon2 / 320, 5));
			HPmon21.setSize(sf::Vector2f(MyHPmon21 / 320, 5));
			HPmon22.setSize(sf::Vector2f(MyHPmon22 / 320, 5));
			HPmon23.setSize(sf::Vector2f(MyHPmon23 / 320, 5));
			HPmon24.setSize(sf::Vector2f(MyHPmon24 / 320, 5));
			HPmon25.setSize(sf::Vector2f(MyHPmon25 / 320, 5));
			HPmon26.setSize(sf::Vector2f(MyHPmon26 / 320, 5));


			HPmon3.setSize(sf::Vector2f(MyHPmon3 / 320, 5));
			HPmon31.setSize(sf::Vector2f(MyHPmon31 / 320, 5));
			HPmon32.setSize(sf::Vector2f(MyHPmon32 / 320, 5));
			HPmon33.setSize(sf::Vector2f(MyHPmon33 / 320, 5));



			atk.setPosition(-200, 500);
			def.setPosition(-200, 500);
			posion.setPosition(-200,500);
			posionwith2.setPosition(-300, 500);
			posionwith3.setPosition(-400, 500);


			posion2.setPosition(-70, 70);
			posion3.setPosition(-120, 70);
			posion4.setPosition(-170, 70);


			
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
			{

				p++;
				if (p > 3)
				{
					p = 1;
				}

			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
			{

				p--;
				if (p < 1)
				{
					p = 3;
				}

			}
			if (p == 1)
			{
				window.draw(Menu);
				window.draw(mode1);
				window.display();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
				{


					soundMenu.pause();
					soundbk.play();
					Start = true;
					menu = false;


				}


			}


			if (p == 2)
			{
				window.draw(Menu);
				window.draw(mode2);
				window.display();
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
				{


					soundMenu.pause();
					soundbk.play();


				}

			}
			if (p == 3)
			{
				window.draw(Menu);
				window.draw(mode3);
				window.display();

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
				{
					window.close();
					soundbk.pause();     
					soundMenu.pause();

				}

			}

		}


		//..................................................STRAT game..............................................................
		while (Start == true)
		{
			elapsed = clock.restart().asSeconds();
			time += elapsed;

			float time1 = clock2.getElapsedTime().asSeconds();
			clock2.restart();

			float time2 = clock3.getElapsedTime().asSeconds();
			clock3.restart();

			float time3 = clock4.getElapsedTime().asSeconds();
			clock4.restart();

			//printf("%f \n", time);
		

			
			


			window.draw(ground);
			window.draw(shapeSprite);
		
			
			window.draw(level1);
			window.draw(level11);
			window.draw(level12);
			window.draw(level13);
			window.draw(level14);
			window.draw(level15);
			window.draw(level16);
			window.draw(level17);
			window.draw(level18);
			window.draw(level19);
			

			window.draw(level2);
			window.draw(level21);
			window.draw(level22);
			window.draw(level23);
			window.draw(level24);
			

			window.draw(level3);
			window.draw(level31);
			window.draw(level32);
			window.draw(level33);
			
			

			window.draw(Score);
			window.draw(hpbar);
			window.draw(HP);
			window.draw(HPmon1);
			window.draw(HPmon11);
			window.draw(HPmon12);
			window.draw(HPmon13);
			window.draw(HPmon14);
			window.draw(HPmon15);
			window.draw(HPmon16);
			window.draw(HPmon17);
			window.draw(HPmon18);
			window.draw(HPmon19);
			window.draw(HPmon2);
			window.draw(HPmon21);
			window.draw(HPmon22);
			window.draw(HPmon23);
			window.draw(HPmon24);
			window.draw(HPmon3);
			window.draw(HPmon31);
			window.draw(HPmon32);
			window.draw(HPmon33);
			

			window.draw(atk);
			window.draw(def);
			window.draw(posion);
			window.draw(posionwith2);
			window.draw(posionwith3);

			window.draw(posion2);
			window.draw(posion3);
			window.draw(posion4);
			

			HPmon1.setPosition(level1.getPosition().x + 50, level1.getPosition().y - 15);
			HPmon11.setPosition(level11.getPosition().x + 50, level11.getPosition().y - 15);
			HPmon12.setPosition(level12.getPosition().x + 50, level12.getPosition().y - 15);
			HPmon13.setPosition(level13.getPosition().x + 50, level13.getPosition().y - 15);
			HPmon14.setPosition(level14.getPosition().x + 50, level14.getPosition().y - 15);
			HPmon15.setPosition(level15.getPosition().x + 50, level15.getPosition().y - 15);
			HPmon16.setPosition(level16.getPosition().x + 50, level16.getPosition().y - 15);
			HPmon17.setPosition(level17.getPosition().x + 50, level17.getPosition().y - 15);
			HPmon18.setPosition(level18.getPosition().x + 50, level18.getPosition().y - 15);
			HPmon19.setPosition(level19.getPosition().x + 50, level19.getPosition().y - 15);


			HPmon2.setPosition(level2.getPosition().x + 50, level2.getPosition().y);
			HPmon21.setPosition(level21.getPosition().x + 50, level21.getPosition().y);
			HPmon22.setPosition(level22.getPosition().x + 50, level22.getPosition().y);
			HPmon23.setPosition(level23.getPosition().x + 50, level23.getPosition().y);
			HPmon24.setPosition(level24.getPosition().x + 50, level24.getPosition().y);


			HPmon3.setPosition(level3.getPosition().x + 20, level3.getPosition().y + 30);
			HPmon31.setPosition(level31.getPosition().x + 20, level31.getPosition().y + 30);
			HPmon32.setPosition(level32.getPosition().x + 20, level32.getPosition().y + 30);
			HPmon33.setPosition(level33.getPosition().x + 20, level33.getPosition().y + 30);


			score.str(" ");
			score << "Score: " << countscore;
			Score.setString(score.str());
			

			window.display();
			

			
			
			

			if (Collision::PixelPerfectTest(shapeSprite,def))
			{
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
				{
					modedef = true;

					def.setPosition(-200, 500);
				}
			}

			if(modedef==true)
			{
				debouce2 += time2;

				if (debouce2 > 50.f)
				{
					modedef= false;
					debouce2 = 0;

				}

				
			}


			if (Collision::PixelPerfectTest(shapeSprite, atk))
			{
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
				{
					modeatk = true;

					atk.setPosition(-200, 500);
				}
			}

			if (modeatk == true)
			{
				debouce += time1;

				if (debouce > 50.f)
				{
					modeatk = false;
					debouce = 0;

				}
			}

			
			

			
			if (Collision::PixelPerfectTest(shapeSprite, posion))
			{
				hpbuttom = true;
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
				{
					scoreHP+=1;

					posion.setPosition(-200, 500);
				}
			}

			if (Collision::PixelPerfectTest(shapeSprite, posionwith2))
			{
				hpbuttom = true;
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
				{
					scoreHP += 1;

					posionwith2.setPosition(-200, 500);
				}
			}


			if (Collision::PixelPerfectTest(shapeSprite, posionwith3))
			{
				hpbuttom = true;
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
				{
					scoreHP += 1;

					posionwith3.setPosition(-200, 500);
				}
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)&&hpbuttom==true)
			{

				if (scoreHP == 1)
				{

					posion2.setPosition(-500, 100);

					MyHP += 10000;

					HP.setSize(sf::Vector2f(MyHP / 320, 15));

					scoreHP -= 1;
				}


				if (scoreHP == 2)
				{

					posion3.setPosition(-500, 100);

					MyHP += 10000;

					HP.setSize(sf::Vector2f(MyHP / 320, 15));

					scoreHP -= 1;
				}


				if (scoreHP == 3)
				{
					posion4.setPosition(-500, 100);

					MyHP += 10000;

					HP.setSize(sf::Vector2f(MyHP / 320, 15));

					scoreHP -= 1;
				}
			}

			if (scoreHP == 0)
			{
				hpbuttom = false;
			}
			if (scoreHP == 1)
			{
				posion2.setPosition(70, 70);
				
			}
			if (scoreHP == 2)
			{
				posion2.setPosition(70, 70);
				posion3.setPosition(120, 70);
			}
			if (scoreHP == 3)
			{
				posion2.setPosition(70, 70);
				posion3.setPosition(120, 70);
				posion4.setPosition(170, 70);
			}
			if (scoreHP >= 3)
			{
				scoreHP = 3;
			}
			
			if (MyHP >= 62000)
			{
				MyHP = 62000;
				HP.setSize(sf::Vector2f(MyHP / 320, 15));
			}

			if (MyHP <= 0)
			{
				MyHP = 0;
				HP.setSize(sf::Vector2f(MyHP / 320, 15));
			}

			//...............................dragonlevel one......................................

			//one........................................
			if (time > 3)
			{
				if (level1.getPosition().x > shapeSprite.getPosition().x)
				{


					level1.move(-6.0f, 0.f);
					level1.setTextureRect(sf::IntRect(Mlevel1SizeX * dragonviolet, Mlevel1SizeY * 2, Mlevel1SizeX, 128));


					if (Collision::PixelPerfectTest(shapeSprite, level1))
					{


						level1.setTextureRect(sf::IntRect(Mlevel1SizeX * dragonviolet, Mlevel1SizeY * 3, Mlevel1SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level1.move(40.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level1.move(40.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon1 -= HPmodeatk;
								HPmon1.setSize(sf::Vector2f(MyHPmon1 / 320, 5));
							}
							if (modeatk ==false)
							{
								MyHPmon1 -= 2000;
								HPmon1.setSize(sf::Vector2f(MyHPmon1 / 320, 5));
							}

							if (MyHPmon1 <= 0)
							{
								countscore += 100;

							}
							if (MyHPmon1 <= 1)
							{
								posion3.setPosition(randomposionfor3(), 500);

							}

						}
						
						
					}
					
					
				}
				if (level1.getPosition().x < shapeSprite.getPosition().x)
				{


					level1.move(+6.0f, 0.f);

					level1.setTextureRect(sf::IntRect(Mlevel1SizeX * dragonviolet, Mlevel1SizeY * 0, Mlevel1SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level1))
					{


						level1.setTextureRect(sf::IntRect(Mlevel1SizeX * dragonviolet, Mlevel1SizeY * 1, Mlevel1SizeX, 128));
						if (dragonviolet == 4)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level1.move(-40.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level1.move(-40.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon1 -= HPmodeatk;
								HPmon1.setSize(sf::Vector2f(MyHPmon1 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon1 -= 2000;
								HPmon1.setSize(sf::Vector2f(MyHPmon1 / 320, 5));
							}


							if (MyHPmon1 == 0)
							{
								countscore += 100;

							}
							if (MyHPmon1 <= 1)
							{
								posion3.setPosition(randomposionfor3(), 500);

							}

						}
						
						
						
					}
					
					
				}

				



				
			}

			//two........................................
			if (time > 8)
			{
				if (level11.getPosition().x > shapeSprite.getPosition().x)
				{


					level11.move(-6.0f, 0.f);
					level11.setTextureRect(sf::IntRect(Mlevel11SizeX * dragonviolet, Mlevel11SizeY * 2, Mlevel11SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level11))
					{


						level11.setTextureRect(sf::IntRect(Mlevel11SizeX * dragonviolet, Mlevel11SizeY * 3, Mlevel11SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level11.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level11.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon11 -= HPmodeatk;
								HPmon11.setSize(sf::Vector2f(MyHPmon11 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon11 -= 2000;
								HPmon11.setSize(sf::Vector2f(MyHPmon11 / 320, 5));
							}

							if (MyHPmon11 == 0)
							{
								countscore += 100;

							}
							
							if (MyHPmon11 <= 1)
							{
								posion2.setPosition(randomposionfor2(), 500);

							}

						}
						

					}
					

				}
				if (level11.getPosition().x < shapeSprite.getPosition().x)
				{


					level11.move(+6.0f, 0.f);

					level11.setTextureRect(sf::IntRect(Mlevel11SizeX * dragonviolet, Mlevel11SizeY * 0, Mlevel11SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level11))
					{


						level11.setTextureRect(sf::IntRect(Mlevel11SizeX * dragonviolet, Mlevel11SizeY * 1, Mlevel11SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level11.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level11.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon11 -= HPmodeatk;
								HPmon11.setSize(sf::Vector2f(MyHPmon11 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon11 -= 2000;
								HPmon11.setSize(sf::Vector2f(MyHPmon11 / 320, 5));
							}

							if (MyHPmon11 == 0)
							{
								countscore += 100;

							}
							if (MyHPmon11 <= 1)
							{
								posion2.setPosition(randomposionfor2(), 500);

							}
						}
						

						
					}
					
				}


			}

			//three........................................
			if (time > 20)
			{
				if (level12.getPosition().x > shapeSprite.getPosition().x)
				{


					level12.move(-6.0f, 0.f);
					level12.setTextureRect(sf::IntRect(Mlevel12SizeX * dragonviolet, Mlevel12SizeY * 2, Mlevel12SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level12))
					{


						level12.setTextureRect(sf::IntRect(Mlevel12SizeX * dragonviolet, Mlevel12SizeY * 3, Mlevel12SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level12.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level12.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon12 -= HPmodeatk;
								HPmon12.setSize(sf::Vector2f(MyHPmon12 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon12 -= 2000;
								HPmon12.setSize(sf::Vector2f(MyHPmon12 / 320, 5));
							}

							if (MyHPmon12 == 0)
							{
								countscore += 100;

							}
						
							if (MyHPmon12 <= 1)
							{
								posion.setPosition(randomposionfor1(), 500);

							}
						}
					}

				}
				if (level12.getPosition().x < shapeSprite.getPosition().x)
				{


					level12.move(+6.0f, 0.f);

					level12.setTextureRect(sf::IntRect(Mlevel12SizeX * dragonviolet, Mlevel12SizeY * 0, Mlevel12SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level12))
					{


						level12.setTextureRect(sf::IntRect(Mlevel12SizeX * dragonviolet, Mlevel12SizeY * 1, Mlevel12SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level12.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level12.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon12 -= HPmodeatk;
								HPmon12.setSize(sf::Vector2f(MyHPmon12 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon12 -= 2000;
								HPmon12.setSize(sf::Vector2f(MyHPmon12 / 320, 5));
							}
							if (MyHPmon12 == 0)
							{
								countscore += 100;

							}

							if (MyHPmon12 <= 1)
							{
								posion.setPosition(randomposionfor1(), 500);

							}

						}
					}
				}


			}
			////...............................................four...........................
			if (time > 24)
			{
				if (level13.getPosition().x > shapeSprite.getPosition().x)
				{


					level13.move(-6.0f, 0.f);
					level13.setTextureRect(sf::IntRect(Mlevel13SizeX * dragonviolet, Mlevel13SizeY * 2, Mlevel13SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level13))
					{


						level13.setTextureRect(sf::IntRect(Mlevel13SizeX * dragonviolet, Mlevel13SizeY * 3, Mlevel13SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level13.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level13.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon13 -= HPmodeatk;
								HPmon13.setSize(sf::Vector2f(MyHPmon13 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon13 -= 2000;
								HPmon13.setSize(sf::Vector2f(MyHPmon13 / 320, 5));
							}
							if (MyHPmon13 == 0)
							{
								countscore += 100;

							}
							if (MyHPmon13 <= 1)
							{
								posion2.setPosition(randomposionfor2(), 500);

							}

						}
						
					}

				}
				if (level13.getPosition().x < shapeSprite.getPosition().x)
				{


					level13.move(+6.0f, 0.f);

					level13.setTextureRect(sf::IntRect(Mlevel13SizeX * dragonviolet, Mlevel13SizeY * 0, Mlevel13SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level13))
					{


						level13.setTextureRect(sf::IntRect(Mlevel13SizeX * dragonviolet, Mlevel13SizeY * 1, Mlevel13SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level13.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level13.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon13 -= HPmodeatk;
								HPmon13.setSize(sf::Vector2f(MyHPmon13 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon13 -= 2000;
								HPmon13.setSize(sf::Vector2f(MyHPmon13 / 320, 5));
							}


							if (MyHPmon13 == 0)
							{
								countscore += 100;

							}

							if (MyHPmon13 <= 1)
							{
								posion2.setPosition(randomposionfor2(), 500);

							}
						}
						
					}
				}


			}

			////...............................................five...........................
			if (time > 34)
			{
				if (level14.getPosition().x > shapeSprite.getPosition().x)
				{


					level14.move(-6.0f, 0.f);
					level14.setTextureRect(sf::IntRect(Mlevel14SizeX * dragonviolet, Mlevel14SizeY * 2, Mlevel14SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level14))
					{


						level14.setTextureRect(sf::IntRect(Mlevel14SizeX * dragonviolet, Mlevel14SizeY * 3, Mlevel14SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level14.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level14.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon14 -= HPmodeatk;
								HPmon14.setSize(sf::Vector2f(MyHPmon14 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon14 -= 2000;
								HPmon14.setSize(sf::Vector2f(MyHPmon14 / 320, 5));
							}

							if (MyHPmon14 == 0)
							{
								countscore += 100;

							}
							if (MyHPmon14 <= 1)
							{
								posion.setPosition(randomposionfor1(), 500);

							}


						}
					}

				}
				if (level14.getPosition().x < shapeSprite.getPosition().x)
				{


					level14.move(+6.0f, 0.f);

					level14.setTextureRect(sf::IntRect(Mlevel14SizeX * dragonviolet, Mlevel14SizeY * 0, Mlevel14SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level14))
					{


						level14.setTextureRect(sf::IntRect(Mlevel14SizeX * dragonviolet, Mlevel14SizeY * 1, Mlevel14SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level14.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level14.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon14 -= HPmodeatk;
								HPmon14.setSize(sf::Vector2f(MyHPmon14 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon14 -= 2000;
								HPmon14.setSize(sf::Vector2f(MyHPmon14 / 320, 5));
							}

							if (MyHPmon14 == 0)
							{
								countscore += 100;

							}

							if (MyHPmon14 <= 1)
							{
								posion.setPosition(randomposionfor1(), 500);

							}

						}
					}
				}


			}

			/////////*******************six

			if (time > 38)
			{
				if (level15.getPosition().x > shapeSprite.getPosition().x)
				{


					level15.move(-6.0f, 0.f);
					level15.setTextureRect(sf::IntRect(Mlevel15SizeX * dragonviolet, Mlevel15SizeY * 2, Mlevel15SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level15))
					{


						level15.setTextureRect(sf::IntRect(Mlevel15SizeX * dragonviolet, Mlevel15SizeY * 3, Mlevel15SizeX, 128));
						if (dragonviolet >= 3)
						{
							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level15.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level15.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon15 -= HPmodeatk;
								HPmon15.setSize(sf::Vector2f(MyHPmon15/ 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon15 -= 2000;
								HPmon15.setSize(sf::Vector2f(MyHPmon15 / 320, 5));
							}
							if (MyHPmon15 == 0)
							{
								countscore += 100;

							}
							if (MyHPmon15 <= 1)
							{
								posion.setPosition(randomposionfor1(), 500);

							}

						}
					}

				}
				if (level15.getPosition().x < shapeSprite.getPosition().x)
				{


					level15.move(+6.0f, 0.f);

					level15.setTextureRect(sf::IntRect(Mlevel15SizeX * dragonviolet, Mlevel15SizeY * 0, Mlevel15SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level15))
					{


						level15.setTextureRect(sf::IntRect(Mlevel15SizeX * dragonviolet, Mlevel15SizeY * 1, Mlevel15SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level15.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level15.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon15 -= HPmodeatk;
								HPmon15.setSize(sf::Vector2f(MyHPmon15 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon15 -= 2000;
								HPmon15.setSize(sf::Vector2f(MyHPmon15 / 320, 5));
							}


							if (MyHPmon15 == 0)
							{
								countscore += 100;

							}
							if (MyHPmon15 <= 1)
							{
								posion.setPosition(randomposionfor1(), 500);

							}
						}
					}
				}





			}

			
			///*************seven

			if (time > 45)
			{
				if (level16.getPosition().x > shapeSprite.getPosition().x)
				{


					level16.move(-6.0f, 0.f);
					level16.setTextureRect(sf::IntRect(Mlevel16SizeX * dragonviolet, Mlevel16SizeY * 2, Mlevel16SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level16))
					{


						level16.setTextureRect(sf::IntRect(Mlevel16SizeX * dragonviolet, Mlevel16SizeY * 3, Mlevel16SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level16.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level16.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon16 -= HPmodeatk;
								HPmon16.setSize(sf::Vector2f(MyHPmon16 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon16 -= 2000;
								HPmon16.setSize(sf::Vector2f(MyHPmon16 / 320, 5));
							}

							if (MyHPmon16 == 0)
							{
								countscore += 100;

							}
							if (MyHPmon16 <= 1)
							{
								posion2.setPosition(randomposionfor3(), 500);

							}

						}
						
					}

				}
				if (level16.getPosition().x < shapeSprite.getPosition().x)
				{


					level16.move(+6.0f, 0.f);

					level16.setTextureRect(sf::IntRect(Mlevel16SizeX * dragonviolet, Mlevel16SizeY * 0, Mlevel16SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level16))
					{


						level16.setTextureRect(sf::IntRect(Mlevel16SizeX * dragonviolet, Mlevel16SizeY * 1, Mlevel16SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level16.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level16.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon16 -= HPmodeatk;
								HPmon16.setSize(sf::Vector2f(MyHPmon16 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon16 -= 2000;
								HPmon16.setSize(sf::Vector2f(MyHPmon16 / 320, 5));
							}
							if (MyHPmon16 == 0)
							{
								countscore += 100;

							}
							if (MyHPmon16 <= 1)
							{
								posion2.setPosition(randomposionfor2(), 500);

							}

						}
					
					}
				}





			}

			///**************eight

			if (time > 48)
			{
				if (level17.getPosition().x > shapeSprite.getPosition().x)
				{


					level17.move(-6.0f, 0.f);
					level17.setTextureRect(sf::IntRect(Mlevel17SizeX * dragonviolet, Mlevel17SizeY * 2, Mlevel17SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level17))
					{


						level17.setTextureRect(sf::IntRect(Mlevel17SizeX * dragonviolet, Mlevel17SizeY * 3, Mlevel17SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level17.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level17.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon17 -= HPmodeatk;
								HPmon17.setSize(sf::Vector2f(MyHPmon17 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon17 -= 2000;
								HPmon17.setSize(sf::Vector2f(MyHPmon17 / 320, 5));
							}


							if (MyHPmon17 == 0)
							{
								countscore += 100;

							}

							if (MyHPmon17 <= 1)
							{
								posion2.setPosition(randomposionfor2(), 500);

							}
						}
					}

				}
				if (level17.getPosition().x < shapeSprite.getPosition().x)
				{


					level17.move(+6.0f, 0.f);

					level17.setTextureRect(sf::IntRect(Mlevel17SizeX * dragonviolet, Mlevel17SizeY * 0, Mlevel17SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level17))
					{


						level17.setTextureRect(sf::IntRect(Mlevel17SizeX * dragonviolet, Mlevel17SizeY * 1, Mlevel17SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level17.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level17.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon17 -= HPmodeatk;
								HPmon17.setSize(sf::Vector2f(MyHPmon17 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon17 -= 2000;
								HPmon17.setSize(sf::Vector2f(MyHPmon17 / 320, 5));
							}


							if (MyHPmon17 == 0)
							{
								countscore += 100;

							}

							if (MyHPmon17 <= 1)
							{
								posion2.setPosition(randomposionfor2(), 500);

							}
						}
					}
				}





			}



			///**********************nine

			if (time >51)
			{
				if (level18.getPosition().x > shapeSprite.getPosition().x)
				{


					level18.move(-6.0f, 0.f);
					level18.setTextureRect(sf::IntRect(Mlevel18SizeX * dragonviolet, Mlevel18SizeY * 2, Mlevel18SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level18))
					{


						level18.setTextureRect(sf::IntRect(Mlevel18SizeX * dragonviolet, Mlevel18SizeY * 3, Mlevel18SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level18.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level18.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon18 -= HPmodeatk;
								HPmon18.setSize(sf::Vector2f(MyHPmon18 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon18 -= 2000;
								HPmon18.setSize(sf::Vector2f(MyHPmon18 / 320, 5));
							}

							if (MyHPmon18 == 0)
							{
								countscore += 100;

							}
							if (MyHPmon18 <= 1)
							{
								posion.setPosition(randomposionfor1(), 500);

							}
						}
					}

				}
				if (level18.getPosition().x < shapeSprite.getPosition().x)
				{


					level18.move(+6.0f, 0.f);

					level18.setTextureRect(sf::IntRect(Mlevel18SizeX * dragonviolet, Mlevel18SizeY * 0, Mlevel18SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level18))
					{


						level18.setTextureRect(sf::IntRect(Mlevel18SizeX * dragonviolet, Mlevel18SizeY * 1, Mlevel18SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level18.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level18.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon18 -= HPmodeatk;
								HPmon18.setSize(sf::Vector2f(MyHPmon18 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon18 -= 2000;
								HPmon18.setSize(sf::Vector2f(MyHPmon18 / 320, 5));
							}

							if (MyHPmon18 == 0)
							{
								countscore += 100;

							}
							if (MyHPmon18 <= 1)
							{
								posion.setPosition(randomposionfor1(), 500);

							}

						}
					}
				}

			}

			///**************ten........................

			if (time >49)
			{
				if (level19.getPosition().x > shapeSprite.getPosition().x)
				{


					level19.move(-6.0f, 0.f);
					level19.setTextureRect(sf::IntRect(Mlevel19SizeX * dragonviolet, Mlevel19SizeY * 2, Mlevel19SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level19))
					{


						level19.setTextureRect(sf::IntRect(Mlevel19SizeX * dragonviolet, Mlevel19SizeY * 3, Mlevel19SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level19.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level19.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon19 -= HPmodeatk;
								HPmon19.setSize(sf::Vector2f(MyHPmon19 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon19 -= 2000;
								HPmon19.setSize(sf::Vector2f(MyHPmon19 / 320, 5));
							}


							if (MyHPmon19 == 0)
							{
								countscore += 100;

							}

							if (MyHPmon19 <= 1)
							{
								posion2.setPosition(randomposionfor2(), 500);

							}
						}

					}

				}
				if (level19.getPosition().x < shapeSprite.getPosition().x)
				{


					level19.move(+6.0f, 0.f);

					level19.setTextureRect(sf::IntRect(Mlevel19SizeX * dragonviolet, Mlevel19SizeY * 0, Mlevel19SizeX, 128));

					if (Collision::PixelPerfectTest(shapeSprite, level19))
					{


						level19.setTextureRect(sf::IntRect(Mlevel19SizeX * dragonviolet, Mlevel19SizeY * 1, Mlevel19SizeX, 128));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level19.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 1000;

								level19.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}

						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon19 -= HPmodeatk;
								HPmon19.setSize(sf::Vector2f(MyHPmon19 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon19 -= 2000;
								HPmon19.setSize(sf::Vector2f(MyHPmon19 / 320, 5));
							}

							if (MyHPmon19 == 0)
							{
								countscore += 100;

							}

							if (MyHPmon19 <= 1)
							{
								posion2.setPosition(randomposionfor2(), 500);

							}

						}
					}
				}





			}



			

			//.................................................dragonlevel two.....................................................
			if (time > 10)
			{
				if (level2.getPosition().x < shapeSprite.getPosition().x)
				{

					
					level2.move(+5.0f, 0.f);
					level2.setTextureRect(sf::IntRect(Mlevel2SizeX * dragonanimationFram, Mlevel2SizeY * 0, Mlevel2SizeX, 200));
		
					if (Collision::PixelPerfectTest(shapeSprite, level2))
					{


						level2.setTextureRect(sf::IntRect(Mlevel2SizeX * dragonanimationFram, Mlevel2SizeY * 1, Mlevel2SizeX, 200));
						if (dragonanimationFram >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level2.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level2.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon2 -= HPmodeatk;
								HPmon2.setSize(sf::Vector2f(MyHPmon2 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon2 -= 2000;
								HPmon2.setSize(sf::Vector2f(MyHPmon2 / 320, 5));
							}


							if (MyHPmon2 == 0)
							{
								countscore += 500;

							}

							if (MyHPmon2 <= 1)
							{
								atk.setPosition(randomatk1(), 500);

							}
						}
					


					}

				}
				if (level2.getPosition().x > shapeSprite.getPosition().x)
				{

			
					level2.move(-5.0f, 0.f);

					level2.setTextureRect(sf::IntRect(Mlevel2SizeX * dragonanimationFram, Mlevel2SizeY * 2, Mlevel2SizeX, 200));


					if (Collision::PixelPerfectTest(shapeSprite, level2))
					{


						level2.setTextureRect(sf::IntRect(Mlevel2SizeX * dragonanimationFram, Mlevel2SizeY * 3, Mlevel2SizeX, 200));
						if (dragonanimationFram >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level2.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level2.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon2 -= HPmodeatk;
								HPmon2.setSize(sf::Vector2f(MyHPmon2 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon2 -= 2000;
								HPmon2.setSize(sf::Vector2f(MyHPmon2 / 320, 5));
							}

							if (MyHPmon2 == 0)
							{
								countscore += 500;

							}
							if (MyHPmon2 <= 1)
							{
								atk.setPosition(randomatk1(), 500);

							}

						}

					
					}

				}
				
			}


			///.................................two.........................
			if (time >30)
			{
				if (level21.getPosition().x < shapeSprite.getPosition().x)
				{


					level21.move(+5.0f, 0.f);
					level21.setTextureRect(sf::IntRect(Mlevel21SizeX * dragonanimationFram, Mlevel21SizeY * 0, Mlevel21SizeX, 200));

					if (Collision::PixelPerfectTest(shapeSprite, level21))
					{


						level21.setTextureRect(sf::IntRect(Mlevel21SizeX * dragonanimationFram, Mlevel21SizeY * 1, Mlevel21SizeX, 200));
						if (dragonanimationFram >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level21.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level21.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon21 -= HPmodeatk;
								HPmon21.setSize(sf::Vector2f(MyHPmon21 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon21 -= 2000;
								HPmon21.setSize(sf::Vector2f(MyHPmon21 / 320, 5));
							}

							if (MyHPmon21 == 0)
							{
								countscore += 500;

							}

							if (MyHPmon21 <= 1)
							{
								atk.setPosition(randomatk1(), 500);

							}

						}
					

					}

				}
				if (level21.getPosition().x > shapeSprite.getPosition().x)
				{


					level21.move(-5.0f, 0.f);

					level21.setTextureRect(sf::IntRect(Mlevel21SizeX * dragonanimationFram, Mlevel21SizeY * 2, Mlevel21SizeX, 200));


					if (Collision::PixelPerfectTest(shapeSprite, level21))
					{


						level21.setTextureRect(sf::IntRect(Mlevel21SizeX * dragonanimationFram, Mlevel21SizeY * 3, Mlevel21SizeX, 200));
						if (dragonanimationFram >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level21.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level21.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon21 -= HPmodeatk;
								HPmon21.setSize(sf::Vector2f(MyHPmon21 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon21 -= 2000;
								HPmon21.setSize(sf::Vector2f(MyHPmon21 / 320, 5));
							}


							if (MyHPmon21 == 0)
							{
								countscore += 500;

							}

							if (MyHPmon21 <= 1)
							{
								atk.setPosition(randomatk1(), 500);

							}
						}
					
						

					}

				}

			}

			///************************three.....
			
			if (time > 30)
			{
				if (level22.getPosition().x < shapeSprite.getPosition().x)
				{


					level22.move(+5.0f, 0.f);
					level22.setTextureRect(sf::IntRect(Mlevel22SizeX * dragonanimationFram, Mlevel22SizeY * 0, Mlevel22SizeX, 200));

					if (Collision::PixelPerfectTest(shapeSprite, level22))
					{


						level22.setTextureRect(sf::IntRect(Mlevel22SizeX * dragonanimationFram, Mlevel22SizeY * 1, Mlevel22SizeX, 200));
						if (dragonanimationFram >= 3)
						{
							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level22.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level22.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon22 -= HPmodeatk;
								HPmon22.setSize(sf::Vector2f(MyHPmon22 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon22 -= 2000;
								HPmon22.setSize(sf::Vector2f(MyHPmon22 / 320, 5));
							}


							if (MyHPmon22 == 0)
							{
								countscore += 500;

							}

							if (MyHPmon22 <= 1)
							{
								atk.setPosition(randomatk1(), 500);

							}
						}
					

					}

				}
				if (level22.getPosition().x > shapeSprite.getPosition().x)
				{


					level22.move(-5.0f, 0.f);

					level22.setTextureRect(sf::IntRect(Mlevel22SizeX * dragonanimationFram, Mlevel22SizeY * 2, Mlevel22SizeX, 200));


					if (Collision::PixelPerfectTest(shapeSprite, level22))
					{


						level22.setTextureRect(sf::IntRect(Mlevel22SizeX * dragonanimationFram, Mlevel22SizeY * 3, Mlevel22SizeX, 200));
						if (dragonanimationFram >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level22.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level22.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon22 -= HPmodeatk;
								HPmon22.setSize(sf::Vector2f(MyHPmon22 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon22 -= 2000;
								HPmon22.setSize(sf::Vector2f(MyHPmon22 / 320, 5));
							}

							if (MyHPmon22 == 0)
							{
								countscore += 500;

							}
							if (MyHPmon22 <= 1)
							{
								atk.setPosition(randomatk1(), 500);

							}

						}
						
					
					}

				}

			}




			///.................................four.........................
			if (time > 42)
			{
				if (level23.getPosition().x < shapeSprite.getPosition().x)
				{


					level23.move(+5.0f, 0.f);
					level23.setTextureRect(sf::IntRect(Mlevel23SizeX * dragonanimationFram, Mlevel23SizeY * 0, Mlevel23SizeX, 200));

					if (Collision::PixelPerfectTest(shapeSprite, level23))
					{


						level23.setTextureRect(sf::IntRect(Mlevel23SizeX * dragonanimationFram, Mlevel23SizeY * 1, Mlevel23SizeX, 200));
						if (dragonanimationFram >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level23.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level23.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon23 -= HPmodeatk;
								HPmon23.setSize(sf::Vector2f(MyHPmon23 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon23 -= 2000;
								HPmon23.setSize(sf::Vector2f(MyHPmon23 / 320, 5));
							}

							if (MyHPmon23 == 0)
							{
								countscore += 500;

							}

							if (MyHPmon23 <= 1)
							{
								atk.setPosition(randomatk1(), 500);

							}

						}
					
						
					}

				}
				if (level23.getPosition().x > shapeSprite.getPosition().x)
				{


					level23.move(-5.0f, 0.f);

					level23.setTextureRect(sf::IntRect(Mlevel23SizeX * dragonanimationFram, Mlevel23SizeY * 2, Mlevel23SizeX, 200));


					if (Collision::PixelPerfectTest(shapeSprite, level23))
					{


						level23.setTextureRect(sf::IntRect(Mlevel23SizeX * dragonanimationFram, Mlevel23SizeY * 3, Mlevel23SizeX, 200));
						if (dragonanimationFram >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level23.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level23.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon23 -= HPmodeatk;
								HPmon23.setSize(sf::Vector2f(MyHPmon23 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon23 -= 2000;
								HPmon23.setSize(sf::Vector2f(MyHPmon23 / 320, 5));
							}


							if (MyHPmon23 == 0)
							{
								countscore += 500;

							}

							if (MyHPmon23 <= 1)
							{
								atk.setPosition(randomatk1(), 500);

							}
						}

						
					}

				}

			}


			//****************************five..........
		
			if (time > 50)
			{
				if (level24.getPosition().x < shapeSprite.getPosition().x)
				{


					level24.move(+5.0f, 0.f);
					level24.setTextureRect(sf::IntRect(Mlevel24SizeX * dragonanimationFram, Mlevel24SizeY * 0, Mlevel24SizeX, 200));

					if (Collision::PixelPerfectTest(shapeSprite, level24))
					{


						level24.setTextureRect(sf::IntRect(Mlevel24SizeX * dragonanimationFram, Mlevel24SizeY * 1, Mlevel24SizeX, 200));
						if (dragonanimationFram >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level24.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level24.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon24 -= HPmodeatk;
								HPmon24.setSize(sf::Vector2f(MyHPmon24 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon24 -= 2000;
								HPmon24.setSize(sf::Vector2f(MyHPmon24 / 320, 5));
							}


							if (MyHPmon24 == 0)
							{
								countscore += 500;

							}

							if (MyHPmon24 <= 1)
							{
								atk.setPosition(randomatk1(), 500);

							}
						}


					}

				}
				if (level24.getPosition().x > shapeSprite.getPosition().x)
				{


					level24.move(-5.0f, 0.f);

					level24.setTextureRect(sf::IntRect(Mlevel24SizeX * dragonanimationFram, Mlevel24SizeY * 2, Mlevel24SizeX, 200));


					if (Collision::PixelPerfectTest(shapeSprite, level24))
					{


						level24.setTextureRect(sf::IntRect(Mlevel24SizeX * dragonanimationFram, Mlevel24SizeY * 3, Mlevel24SizeX, 200));
						if (dragonanimationFram >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level24.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level24.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon24 -= HPmodeatk;
								HPmon24.setSize(sf::Vector2f(MyHPmon24 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon24 -= 2000;
								HPmon24.setSize(sf::Vector2f(MyHPmon24 / 320, 5));
							}


							if (MyHPmon24 == 0)
							{
								countscore += 500;

							}

							if (MyHPmon24 <= 1)
							{
								atk.setPosition(randomatk1(), 500);

							}
						}


					}

				}

			}


			//...........................................monter level3........................

			///one
			if (time > 32)
			{
				if (level3.getPosition().x > shapeSprite.getPosition().x)
				{


					level3.move(-6.0f, 0.f);
					level3.setTextureRect(sf::IntRect(Mlevel3SizeX * dragonanimationFram, Mlevel3SizeY * 2, Mlevel3SizeX, 200));
					if (Collision::PixelPerfectTest(shapeSprite, level3))
					{


						level3.setTextureRect(sf::IntRect(Mlevel3SizeX * dragonanimationFram, Mlevel3SizeY * 3, Mlevel3SizeX, 200));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level3.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level3.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon3 -= HPmodeatk;
								HPmon3.setSize(sf::Vector2f(MyHPmon3 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon3 -= 2000;
								HPmon3.setSize(sf::Vector2f(MyHPmon3 / 320, 5));
							}

							if (MyHPmon3 == 0)
							{
								countscore += 1000;

							}
							if (MyHPmon3 <= 1)
							{
								def.setPosition(randomdef1(), 500);

							}

						}
						
					}

				}
				if (level3.getPosition().x < shapeSprite.getPosition().x)
				{


					level3.move(+6.0f, 0.f);

					level3.setTextureRect(sf::IntRect(Mlevel3SizeX* dragonanimationFram, Mlevel3SizeY * 0, Mlevel3SizeX, 200));


					if (Collision::PixelPerfectTest(shapeSprite, level3))
					{


						level3.setTextureRect(sf::IntRect(Mlevel3SizeX * dragonanimationFram, Mlevel3SizeY * 1, Mlevel3SizeX, 200));
						if (dragonviolet >= 3)
						{
							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level3.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level3.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon3 -= HPmodeatk;
								HPmon3.setSize(sf::Vector2f(MyHPmon3 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon3 -= 2000;
								HPmon3.setSize(sf::Vector2f(MyHPmon3 / 320, 5));
							}


							if (MyHPmon3 == 0)
							{
								countscore += 1000;

							}

							if (MyHPmon3 <= 1)
							{
								def.setPosition(randomdef1(), 500);

							}
						}
						
					
					}
				}
				

			}

			//two
			if (time > 24)
			{
				if (level31.getPosition().x > shapeSprite.getPosition().x)
				{


					level31.move(-6.0f, 0.f);
					level31.setTextureRect(sf::IntRect(Mlevel31SizeX * dragonanimationFram, Mlevel31SizeY * 2, Mlevel31SizeX, 200));
					if (Collision::PixelPerfectTest(shapeSprite, level13))
					{


						level31.setTextureRect(sf::IntRect(Mlevel31SizeX * dragonanimationFram, Mlevel31SizeY * 3, Mlevel31SizeX, 200));
						if (dragonviolet >= 3)
						{

							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level31.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level31.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon31 -= HPmodeatk;
								HPmon31.setSize(sf::Vector2f(MyHPmon31 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon31 -= 2000;
								HPmon31.setSize(sf::Vector2f(MyHPmon31 / 320, 5));
							}

							if (MyHPmon31 <= 0)
							{
								countscore += 1000;

							}

							if (MyHPmon31 <= 1)
							{
								atk.setPosition(randomatk1(), 500);

							}
						
							if (MyHPmon31 <= 1)
							{
								def.setPosition(randomdef1(), 500);

							}

						}
						
					}

				}
				if (level31.getPosition().x < shapeSprite.getPosition().x)
				{


					level31.move(+6.0f, 0.f);

					level31.setTextureRect(sf::IntRect(Mlevel31SizeX * dragonanimationFram, Mlevel31SizeY * 0, Mlevel31SizeX, 200));


					if (Collision::PixelPerfectTest(shapeSprite, level31))
					{


						level31.setTextureRect(sf::IntRect(Mlevel31SizeX * dragonanimationFram, Mlevel31SizeY * 1, Mlevel31SizeX, 200));
						
						if (dragonviolet >= 3)
						{
							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level31.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level31.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon31 -= HPmodeatk;
								HPmon31.setSize(sf::Vector2f(MyHPmon31 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon31 -= 2000;
								HPmon31.setSize(sf::Vector2f(MyHPmon31 / 320, 5));
							}


							if (MyHPmon31 <= 0)
							{
								countscore += 1000;

							}
						
							if (MyHPmon31 <= 1)
							{
								def.setPosition(randomdef1(), 500);

							}
						}
						
					}
				}


			}


			//three
			if (time >42)
			{
				if (level32.getPosition().x > shapeSprite.getPosition().x)
				{


					level32.move(-6.0f, 0.f);
					level32.setTextureRect(sf::IntRect(Mlevel32SizeX * dragonanimationFram, Mlevel32SizeY * 2, Mlevel32SizeX, 200));
					if (Collision::PixelPerfectTest(shapeSprite, level32))
					{


						level32.setTextureRect(sf::IntRect(Mlevel32SizeX * dragonanimationFram, Mlevel32SizeY * 3, Mlevel32SizeX, 200));
						if (dragonviolet >= 3)
						{
							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level32.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level32.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon32 -= HPmodeatk;
								HPmon32.setSize(sf::Vector2f(MyHPmon32 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon32 -= 2000;
								HPmon32.setSize(sf::Vector2f(MyHPmon32 / 320, 5));
							}


							if (MyHPmon32 == 0)
							{
								countscore += 1000;

							}

							if (MyHPmon32 <= 1)
							{
								def.setPosition(randomdef1(), 500);

							}
						}
						
					}

				}
				if (level32.getPosition().x < shapeSprite.getPosition().x)
				{


					level32.move(+6.0f, 0.f);

					level32.setTextureRect(sf::IntRect(Mlevel32SizeX * dragonanimationFram, Mlevel32SizeY * 0, Mlevel32SizeX, 200));


					if (Collision::PixelPerfectTest(shapeSprite, level32))
					{


						level32.setTextureRect(sf::IntRect(Mlevel32SizeX * dragonanimationFram, Mlevel32SizeY * 1, Mlevel32SizeX, 200));
						if (dragonviolet >= 3)
						{
							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level32.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level32.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon32 -= HPmodeatk;
								HPmon32.setSize(sf::Vector2f(MyHPmon32 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon32 -= 2000;
								HPmon32.setSize(sf::Vector2f(MyHPmon32 / 320, 5));
							}


							if (MyHPmon32 == 0)
							{
								countscore += 1000;

							}

							if (MyHPmon32 <= 1)
							{
								def.setPosition(randomdef1(), 500);

							}
						}
					
					}
				}


			}

			//four
			if (time > 55)
			{
				if (level33.getPosition().x > shapeSprite.getPosition().x)
				{


					level33.move(-6.0f, 0.f);
					level33.setTextureRect(sf::IntRect(Mlevel33SizeX * dragonanimationFram, Mlevel33SizeY * 2, Mlevel33SizeX, 200));
					if (Collision::PixelPerfectTest(shapeSprite, level33))
					{


						level33.setTextureRect(sf::IntRect(Mlevel33SizeX * dragonanimationFram, Mlevel33SizeY * 3, Mlevel33SizeX, 200));
						if (dragonviolet >= 3)
						{
							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level33.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level33.move(30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon33 -= HPmodeatk;
								HPmon33.setSize(sf::Vector2f(MyHPmon33 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon33 -= 2000;
								HPmon33.setSize(sf::Vector2f(MyHPmon33 / 320, 5));
							}


							if (MyHPmon33 == 0)
							{
								countscore += 1000;

							}
							if (MyHPmon33 <= 1)
							{
								def.setPosition(randomdef1(), 500);

							}

						}
						
					}

				}
				if (level33.getPosition().x < shapeSprite.getPosition().x)
				{


					level33.move(+6.0f, 0.f);

					level33.setTextureRect(sf::IntRect(Mlevel33SizeX * dragonanimationFram, Mlevel33SizeY * 0, Mlevel33SizeX, 200));


					if (Collision::PixelPerfectTest(shapeSprite, level33))
					{


						level33.setTextureRect(sf::IntRect(Mlevel33SizeX * dragonanimationFram, Mlevel33SizeY * 1, Mlevel33SizeX, 200));
						if (dragonviolet >= 3)
						{
							if (modedef == true)
							{
								MyHP -= HPmodedef;

								level33.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
							else
							{
								MyHP -= 2000;

								level33.move(-30.0f, 0.f);
								HP.setSize(sf::Vector2f(MyHP / 320, 15));
							}
						}
						if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
						{
							if (modeatk == true)
							{
								MyHPmon33 -= HPmodeatk;
								HPmon33.setSize(sf::Vector2f(MyHPmon33 / 320, 5));
							}
							if (modeatk == false)
							{
								MyHPmon33 -= 2000;
								HPmon33.setSize(sf::Vector2f(MyHPmon33 / 320, 5));
							}


							if (MyHPmon33 == 0)
							{
								countscore += 1000;

							}

							if (MyHPmon33 <= 1)
							{
								def.setPosition(randomdef1(), 500);

							}
						}
						
					}
				}


			}


			//.................................................PlayerWALK.............................................
			sf::Vector2f pos = shapeSprite.getPosition();
			std::cout << pos.x << ' ' << pos.y << '\n';

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{
				if (pos.x < 1030)
				{
					sound.play();

					shapeSprite.move(10.0f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 2, spriteSizeX, 128));
					cout1 = 1;
					cout2 = 0;

				}
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
			{
				if (pos.x > -30)
				{
					sound.play();

					shapeSprite.move(-10.0f, 0.f);
					shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, 0, spriteSizeX, spriteSizeY));
					cout1 = 0;
					cout2 = 1;


				}
			}

			


		

			//.......................................KnightAttack............................................

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)&&cout1==1)
			{
				soundsword.play();
				
				
				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 3, spriteSizeX, 128));


			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && cout2 == 1)
			{
				soundsword.play();


				shapeSprite.setTextureRect(sf::IntRect(spriteSizeX * animationFrame, spriteSizeY * 1, spriteSizeX, 128));


				

			}

			
			


			if (MyHPmon1 <= 0)
			{
				level1.setPosition(1000000.f,0.0f);
				level1.move(0.0f, 0.f);
			}

			if (MyHPmon11 <= 0)
			{
				level11.setPosition(1000000.f, 0.0f);
				level11.move(0.0f, 0.f);
			}
			
			if (MyHPmon12 <= 0)
			{
				level12.setPosition(1000000.f, 0.0f);
				level12.move(0.0f, 0.f);
			}

			if (MyHPmon13 <= 0)
			{
				level13.setPosition(1000000.f, 0.0f);
				level13.move(0.0f, 0.f);

			}

			if (MyHPmon14 <= 0)
			{
				level14.setPosition(1000000.f, 0.0f);
				level14.move(0.0f, 0.f);
			}

			if (MyHPmon15 <= 0)
			{
				level15.setPosition(1000000.f, 0.0f);
				level15.move(0.0f, 0.f);

			}

			if (MyHPmon16 <= 0)
			{
				level16.setPosition(1000000.f, 0.0f);
				level16.move(0.0f, 0.f);
			}

			if (MyHPmon17<= 0)
			{
				level17.setPosition(1000000.f, 0.0f);
				level17.move(0.0f, 0.f);
			}

			if (MyHPmon18 <= 0)
			{
				level18.setPosition(1000000.f, 0.0f);
				level18.move(0.0f, 0.f);
			}

			if (MyHPmon19 <= 0)
			{
				level19.setPosition(1000000.f, 0.0f);
				level19.move(0.0f, 0.f);
			}

			if (MyHPmon2 <= 0)
			{
				level2.setPosition(1000000.f, 0.0f);
				level2.move(0.0f, 0.f);
			} 

			if (MyHPmon21 <= 0)
			{
				level21.setPosition(1000000.f, 0.0f);
				level21.move(0.0f, 0.f);
			}

			if (MyHPmon22 <= 0)
			{
				level22.setPosition(1000000.f, 0.0f);
				level22.move(0.0f, 0.f);
			}

			if (MyHPmon23 <= 0)
			{
				level23.setPosition(1000000.f, 0.0f);
				level23.move(0.0f, 0.f);
			}

			if (MyHPmon24 <= 0)
			{
				level24.setPosition(1000000.f, 0.0f);
				level24.move(0.0f, 0.f);
			}

			if (MyHPmon3 <= 0)
			{
				level3.setPosition(1000000.f, 0.0f);
				level3.move(0.0f, 0.f);
			}

			if (MyHPmon31 <= 0)
			{
				level31.setPosition(1000000.f, 0.0f);
				level31.move(0.0f, 0.f);
			}

			if (MyHPmon32 <= 0)
			{
				level32.setPosition(1000000.f, 0.0f);
				level32.move(0.0f, 0.f);
			}

			if (MyHPmon33 <= 0)
			{
				level33.setPosition(1000000.f, 0.0f);
				level33.move(0.0f, 0.f);
			}



			//...................................................pauseGame..................................



			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			{

				Dragonsound.pause();
				soundMenu.pause();


				Start = false;
				menuIngame = true;

			}








			animationFrame++;

			if (animationFrame >= 4) {
				animationFrame = 0;
			}
			dragonanimationFram++;
			if (dragonanimationFram >= 4)
			{
				dragonanimationFram = 0;
			}

			dragonviolet++;
			if (dragonviolet >= 4)
			{
				dragonviolet = 0;
			}



			while (menuIngame == true)
			{

				window.draw(Menu);
				window.draw(Menuingame);
				window.display();


				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				{

					p++;
					if (p > 2)
					{
						p = 1;
					}

				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{

					p--;
					if (p < 1)
					{
						p = 2;
					}

				}
				if (p == 1)
				{
					window.draw(Menu);
					window.draw(Backto);
					window.display();
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
					{


						soundMenu.pause();
						soundbk.play();
						Start = true;
						menuIngame = false;


					}


				}


				if (p == 2)
				{
					window.draw(Menu);
					window.draw(Exit);
					window.display();
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
					{


						soundMenu.pause();
						soundbk.play();
						menuIngame = false;
						menu = true;

					}

				}
			}

		}
		//........................................................menu in game..............................

		

	}
	return 0;
}