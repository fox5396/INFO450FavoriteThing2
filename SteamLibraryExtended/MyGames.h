#pragma once
#include<iostream>
#include<string>
using namespace std;

class MyGames
{
private:
	string name;
	string developer;
	string publisher;
	string genre;
	char rating;
	double price;
	int quantity;

public:
	MyGames();
	MyGames(string n, string d, string pb, string g, char r, double pr);
	string getName();
	string getDev();
	string getPub();
	string getGenre();
	char getRating();
	double getPrice();
	int getQuantity();
	void setName(string n);
	void setDev(string d);
	void setPub(string pb);
	void setGenre(string g);
	void setRating(char r);
	void setPrice(double pr);
	void setQuantity(int q);
	void getGameInput();
	friend ostream& operator<<(ostream& output, MyGames& i);

};
