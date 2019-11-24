#include <iostream>
#include <string>
#include <fstream>
#include "MyGames.h"
#include "GamesList.h"
using namespace std;

GamesList::GamesList()
{
	gameNo = 0;
	totalGames = 0;
	answer = 0;
}

void GamesList::MenuOptions()
{
	cout << "What would you like to do?\n" <<
	"Press 'a' to add another game.\n" <<
	"Press 'b' to read the file containing your games.\n" <<
	"Press 'c' to save your games to the list.\n" <<
	"Press 'd' to display the list.\n" <<
	"Press 'e' to exit or enter another game.\n" <<
	"Hit any other key to exit." << endl;
}
int GamesList::ReadFromFile(string fileContents)
{
	ifstream gameFile;
	gameFile.open(fileContents, ios::in);
	if (gameFile.bad())
	{
		cout << "Error: The file you have entered cannot be read." << endl;
		return -2;
	}

	string name;
	string developer;
	string publisher;
	string genre;
	char rating;
	double price;
	int quantity;
	string gameString;
	while (!gameFile.eof())
	{
		getline(gameFile, gameString, '|');
		if (gameString.length() > 0)
		{
			getline(gameFile, name, '|');
			getline(gameFile, developer, '|');
			getline(gameFile, publisher, '|');
			getline(gameFile, genre, '\n');
			rating = stoi(gameString);
			getline(gameFile, gameString, '|');
			price = stod(gameString);
			getline(gameFile,gameString,'\n');

			games[gameNo].setName(name);
			games[gameNo].setDev(developer);
			games[gameNo].setPub(publisher);
			games[gameNo].setGenre(genre);
			games[gameNo].setRating(rating);
			games[gameNo].setPrice(price);

			gameNo++;

			totalGames += gameNo;
		}
	}

	gameFile.close();
	return 0;
}
int GamesList::WriteToFile(string fileContents)
{
	int i;
	ofstream newGame;
	newGame.open(fileContents, ios::app);
	if (!newGame)
	{
		cout << "Error: File failed to open." << endl;
		return -2;
	}
	for (i = 0; i < gameNo; i++)
	{
		newGame << games[i].getName() << "|";
		newGame << games[i].getDev() << "|";
		newGame << games[i].getPub() << "|";
		newGame << games[i].getGenre() << "|";
		newGame << games[i].getRating() << "|";
		newGame << games[i].getPrice() << endl;
	}
	newGame.close();
	return 0;
}
void GamesList::AddGame()
{
	games[gameNo].getGameInput();

	if (gameNo == NULL)
	{
		cout << "Not enough info! Please enter your game information." << endl;
	}
	else
		totalGames += games[gameNo].getQuantity();
		gameNo++;
		
}
void GamesList::ShowList()
{
	int i;
	for (i = 0; i < gameNo; i++)
	{
		cout << games[i];
	}
	cout << "The total number of games is " << totalGames << endl;
}
void GamesList::AnotherGame()
{

	cout << "Would you like to enter another game? if so, enter 'y' " << endl;
	cin >> answer;
	while(answer == 'y' || answer == 'Y')
		continue;
	
}


