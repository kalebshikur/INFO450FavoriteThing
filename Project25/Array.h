#pragma once
#include "Favorite.h"
#include<iostream>
#include<string>
using namespace std;
// array class header file
class Array
{
private:
	// store all the entries
	Favorite list[1000];
public:
	int numItems;
	Array();
	void addItem();
	void printList();

};

