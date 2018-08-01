#pragma once
#include <iostream>
#include <string>
using namespace std;

class place
{
public:
	string name;
	int price;
	int rent;
	int belongToWho;//0表示无主地
	int levelUpNeed;
	bool is_doubleRent;
	place() {};
	place(string str,int a = 0, int b = 0, int c = 0,int d = 0, bool e = 0) :
		name(str),price(a), rent(b), belongToWho(c),levelUpNeed(d), is_doubleRent(e)
	{

	};
	void show();
//	virtual int aplace() = 0;
};

class city :public place
{
public:
	city() {};
	city(string str, int a = 0, int b = 0, int c = 0, int d = 0, bool e = 0) :
		place(str, a, b, c, d, e) {};
	int print() { std::cout << 1; }
};