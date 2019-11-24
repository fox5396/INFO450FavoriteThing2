#include<iostream>
#include<string>
#include"MyGames.h"
using namespace std;

MyGames::MyGames()
{
	name = "";
	developer = "";
	publisher = "";
	genre = "";
	rating = 0;
	price = 0;
}

MyGames::MyGames(string n, string d, string pb, string g, char r, double pr)
{
	name = n;
	developer = d;
	publisher = pb;
	genre = g;
	rating = r;
	price = pr;
}

string MyGames::getName()
{
	return name;
}
string MyGames::getDev()
{
	return developer;
}
string MyGames::getPub()
{
	return publisher;
}
string MyGames::getGenre()
{
	return genre;
}
char MyGames::getRating()
{
	return rating;
}
double MyGames::getPrice()
{
	return price;
}
int MyGames::getQuantity()
{
	return quantity;
}
void MyGames::setName(string n)
{
	name = n;
}
void MyGames::setDev(string d)
{
	developer = d;
}
void MyGames::setPub(string pb)
{
	publisher = pb;
}
void MyGames::setGenre(string g)
{
	genre = g;
}
void MyGames::setRating(char r)
{
	rating = r;
}
void MyGames::setPrice(double pr)
{
	price = pr;
}
void MyGames::setQuantity(int q)
{
	quantity = q;
}
void MyGames::getGameInput()
{
	cout << "This program is designed to keep track of my steam library.\n" <<
		"You will be asked to enter the name, developer, publisher, " <<
		"genre, rating and price of each game to put it on the list.\n";
	cout << "Please enter the name of the game: " << endl;
	getline(cin, name);
	cout << "Please enter the developer of the game: " << endl;
	getline(cin, developer);
	cout << "Please enter the publisher of the game: " << endl;
	getline(cin, publisher);
	cout << "Please enter the genre of the game: " << endl;
	getline(cin, genre);
	cout << "Please enter the rating of the game " <<
		"(Children = C, Everyone = E, Teen = T, Mature = M, Adult = A): " << endl;
	cin >> rating;
	cout << "Please enter the price of the game: " << endl;
	cin >> price;
	cin.ignore();
}

ostream& operator<<(ostream& output, MyGames& i)
{
	output << "Game: " << i.name << '|' << i.developer << '|'
		<< i.publisher << '|' << i.genre << '|' << i.rating << '|' << "$" << i.price << endl;
	return output;
}