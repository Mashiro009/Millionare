#pragma once
#include <iostream>
#include <ctime>
class AboutGame
{
public:
	int nPlayer;
	int map;

	int init();
	int startGame();
	int randomStep();//1-6��������
	AboutGame(int x,int y);
	virtual ~AboutGame();
};

