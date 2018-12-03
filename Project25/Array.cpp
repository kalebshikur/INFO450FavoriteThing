#include "Array.h"
#include "Favorite.h"
#include<string>
#include<iostream>
using namespace std;
// array constroctor
Array::Array()
{
	numItems = 0;
}


// this function adds the entries to the list 
void Array:: addItem()
{
	list[numItems].newFavorite();

	numItems++;
}
 // this function prints out the list
void Array::printList()
{
	int i;
	for (i = 0; i < numItems; i++) {
		cout << list[i] << endl;
	}

}