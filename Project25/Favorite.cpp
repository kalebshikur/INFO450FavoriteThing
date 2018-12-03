#include "Array.h"
#include<iostream>
#include "Favorite.h"
#include<string>
#include<string.h>
using namespace std;

// favorite class constructor
Favorite::Favorite()
{
}
// this function prints out the instruction
void Favorite ::welcomeInfo() {

	cout << "****   Watching Tv is my favorite thing.   ********" << endl;
	cout << "*     Here is a list of my favorite tv shows.     *" << endl;
	cout << "*   Name of the show, the network it's in, lead   *" << endl;
	cout << "*characters, number of seasons, genre are included*" << endl;
	cout << "***************************************************" << endl;
}
// this funciton ask the users for entry and store their entry
void Favorite::newFavorite() {
	cout << "Enter the name of the show" << endl;
	getline(cin,name);

	cout << "Enter the network of the show" << endl;
	getline(cin,network);
	cout << "Enter the lead character" << endl;
	getline(cin,leadCharacter);
	cout << "What is the genre?" << endl;
	getline(cin, genre);
	cout << "Enter the no. of seasons available" << endl;
	cin >> noSeason;
	cin.ignore();
	cin.clear();
}

//
ostream& operator==(ostream &o,Favorite& n)
{
	bool repeat = true;
	for (int i = 0; i < 20; i++)
	{
		if (n.name == n.name) {
			repeat = false;
		}
	}
	return o;
}

// setters and gatters

void Favorite::setName(string n) {
	name = n;

}
string Favorite::getName() {
	return name ;
}

void Favorite::setNetwork(string w) {
	network = w;
}
string Favorite::getNetwork() {
	return network;
}

void Favorite::setLeadCharacter(string l) {
	leadCharacter = l;
}
string Favorite::getLeadCharacter() {
	return leadCharacter;
}

void Favorite::setNoSeason(int s) {
	noSeason = s;
}
int Favorite::getNoSeason() {
	return noSeason;
}

void Favorite::setGenre(string g) {
	genre = g;
}
string Favorite::getGenre() {
	return genre;
}

// an overloadded << operator freind function

ostream& operator<<(ostream &o, Favorite& i)

{

	o << "Name: " << i.name << endl;

	o << "Network: " << i.network << endl;

	o << "Lead Character: " << i.leadCharacter << endl;

	o << "genre: " << i.genre << endl;

	o << "No. of season: " << i.noSeason << endl;

	return o;
}
