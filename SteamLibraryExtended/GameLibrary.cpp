#include <iostream>
#include <string>
#include "MyGames.h"
#include "GamesList.h"
using namespace std;

int main()
{	
	char a, b, c, d, e, choice = 0;
	string fileName;
	MyGames newGame;
	newGame.getGameInput();
	
	GamesList theList;
	theList.MenuOptions();
	cin >> choice;

	switch (choice)
	{
	case 'a':
		getline(cin, fileName, '\n');
		theList.ReadFromFile(fileName);
		break;

	case 'b':
		theList.WriteToFile(fileName);
		break;
	case 'c':
	
		theList.AddGame();
		break;

	case 'd':
		theList.ShowList();
		cout << newGame << endl;
		break;
	default:
		break;

	}

	system("pause");
	return 0;
}