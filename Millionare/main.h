#pragma once
#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
#include "place.h"
#include "player.h"
#include "AboutGame.h"
using namespace std;


//name;price;rent;belongToWho;levelUpNeed;is_doublerent;
city initcity[10] = {
	{ "Beijing" , 200, 50, 0, 10, 0 },
	{ "Shanghai", 300, 60, 0, 15, 0 },
	{ "Whuhan" ,  150, 30, 0,  7, 0 },
	{ "Zhengzhou",199, 49, 0,  9, 0 },
	{ "Hongkong", 400, 80, 0, 20, 0 }
};
