#pragma once
#include<iostream>
#include<string>
#include"MyGames.h"
using namespace std;

class GamesList
{
	MyGames games[99];
	int gameNo;
	int totalGames;
	char answer;
	string gameFile;
public:
	GamesList();
	void MenuOptions();
	int ReadFromFile(string fileContents);
	int WriteToFile(string fileContents);
	void AddGame();
	void ShowList();
	void AnotherGame();

};