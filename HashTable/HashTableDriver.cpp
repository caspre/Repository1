// HashTableDriver.cpp : Defines the entry point for the console application.
// Stanley Marcellus

#include "stdafx.h"
#include "HashTable.h"
#include <iostream>
using namespace std;


int main()
{
	HashTable h;
	string name;
	
	cout << "(Input \"exit\" to leave) (Names are Case Sensitive)" << endl << endl;
	cout << "Input a name to enter into the table. ";
	cin >> name;
	while (name != "exit") {
		h.putGet(name);
		cout << "Input a name to enter or a name to find the value of. ";
		cin >> name;
	}//while
	cout << "Goodbye" << endl;

	system("pause");
    return 0;
}

