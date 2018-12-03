#pragma once
#include<string>
#include<iostream>



using namespace std;
// favorite class header file
class Favorite
{
private:
	string name; 
	string network;
	string leadCharacter;
	int noSeason;
	string genre;
public:
	// favorite constructor declaration
	friend ostream& operator==(ostream &o, Favorite& n);
	Favorite();
	void welcomeInfo();
	void newFavorite();

	friend ostream& operator<<(ostream &o, Favorite& i);

	// declaration of getters and setters 
	void setName(string n);
	string getName();

	void setNetwork(string w);
	string getNetwork();

	void setLeadCharacter(string l);
	string getLeadCharacter();

	void setNoSeason(int s);
	int getNoSeason();

	void setGenre(string g);
	string getGenre();
	
};

