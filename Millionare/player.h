#pragma once
#include <iostream>
using namespace std;
class player
{
public:
	int number;
	int money;
	bool is_alive;
	int position;

	player(int number = 0,int a = 1000, bool b = 1,int c = 1) :
		number(number),money(a), is_alive(b),position(c) {};

	void show();
	void movePlayer(int step, int map);
	void payForPrice(int price);
	void payForRent(int rent);
	void getMoneyFromRent(int rent);
};