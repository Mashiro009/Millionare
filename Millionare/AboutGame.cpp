#include "AboutGame.h"

int AboutGame::init()
{
	std::cout << "Please input the number of player" << std::endl;
	std::cin >> this->nPlayer;
	std::cout << "Please input the number of mapblank" << std::endl;
	std::cin >> this->map;

	return 0;
}

int AboutGame::startGame()
{
	std::cout << "Welcome to the Game!" << std::endl;
	std::cout << "There are " << this->nPlayer << " players" << std::endl;
	return 0;
}

int AboutGame::randomStep()//1-6²½µÄ÷»×Ó
{
	srand((unsigned int)(time(NULL)));
	return rand() % (6 /*  + 1 - 1  */) + 1;
}

AboutGame::AboutGame(int x, int y) :nPlayer(x) , map(y)
{

}


AboutGame::~AboutGame()
{
}
