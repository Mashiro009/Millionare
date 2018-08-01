#include "player.h"

void player::show()
{
	cout << "-----------------" << endl;
	cout << "This is player " << this->number << endl;
	cout << "Position: " << this->position << endl;
	cout << "Money:" << this->money << endl;
	cout << "is_alive:" << this->is_alive << endl;
	cout << "-----------------" << endl;
}

void player::movePlayer(int step, int map)
{
//	this->position = (this->position + step + map - 1) % map + 1;
	this->position = (this->position + step) % (map);
}

void player::payForPrice(int price)
{
	this->money -= price;
	if (this->money <= 0)
		this->is_alive = 0;
}

void player::payForRent(int rent)
{
	this->money -= rent;
	if (this->money <= 0)
		this->is_alive = 0;
}

void player::getMoneyFromRent(int rent)
{
	this->money += rent;

}

