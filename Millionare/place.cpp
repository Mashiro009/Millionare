#include "place.h"

void place::show()
{
	cout << "-----------------" << endl;
	cout << "Name:" << this->name << endl;
	cout << "Price:" << this->price << endl;
	cout << "Rent:" << this->rent << endl;
	cout << "belongToWho: Player " << this->belongToWho << endl;
	cout << "LevelupNeed:" << this->levelUpNeed << endl;
	cout << "is_doubleRent:" << this->is_doubleRent << endl;
	cout << "-----------------" << endl;
}
