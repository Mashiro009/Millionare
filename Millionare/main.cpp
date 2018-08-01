#include "main.h"

char temp;

int main()
{
	player playerInGame[5];
	//std::cout << initcity[0].name;
	AboutGame Game(0,0);
	Game.init();
	Game.startGame();
	fflush(stdin);
	for (int i(1); i <= Game.nPlayer; i++)
		playerInGame[i].number = i;
	while (1)
	{
		for (int i(1); i <= Game.nPlayer; i++)
		{
			cout << "Please input enter to continue" << endl;
			cin >> temp;
			cout << "Now is the chance of player " << i<< endl;

			playerInGame[i].show();

			cout << "Please input enter to continue"<<endl;
			cin >> temp;

			int step;
			step = Game.randomStep();
			cout << "Your step is " << step << endl;
			playerInGame[i].movePlayer(step, Game.map);
			playerInGame[i].show();
			initcity[playerInGame[i].position].show();
		}
	}
	

	return 0;
}

