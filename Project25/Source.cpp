#define _CRT_SECURE_NO_WARNINGS
#include "Array.h"
#include "Favorite.h"
#include<iostream>
#include<string>

using namespace std;

// my favorite Tv shows
// Name of the show, the network it's in, lead characters, no. of seasons, genre, 

int main()
{
	
	char cont; // variable to store the users response on weather they want to input more or not
	Array arr;

		
	Favorite fav1;
	fav1.welcomeInfo();
	
	// this loops runs until the user presses other than 'y' or 'Y'
	for (int i = 0; i <= arr.numItems ; i++)
	{

		arr.addItem();
		cout << " Press Y to inter another entry: " << endl;
		cin >> cont;
		cin.ignore();
		cin.clear();
		// checks if the user want to input another input
		if (cont != 'y' && cont != 'Y') {
			break;
		}
	}
	// prints what is stored
	arr.printList();
	system("pause");
	return 0;
}




