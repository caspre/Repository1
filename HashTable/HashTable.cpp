// HashTables implementation file
// Stanley Marcellus

#include "stdafx.h"
#include "HashTable.h"
#include <iostream>
using namespace std;


HashTable::HashTable() {
	tableSize = 0;

	//v For initializing the Linked Lists
	for (int i = 0; i < maxIndex; i++) {
		hashName[i] = NULL;
	}//for
}//default constructuor

struct HashTable::ListNode
{
	string name;
	double value;
	ListNode *next;
	
	ListNode(string name1, double value1)
	{
		name = name1;
		value = value1;
		next = NULL;
	}//constructor
	
};//struct ListNode



void HashTable::putGet(string inputName) {
	/*^ Will look for a spot while also checking if the user is actually trying to 
	retrieve a value */
	int index = hash(inputName);
	double number;
	//cout << index;
	
	if (hashName[index] == NULL) {
		//^ This would mean the node is empty
		//v Now take in a number
		cout << "Enter a value for " << inputName << ": #";
		cin >> number;
		hashName[index] = new ListNode(inputName, number);
		tableSize++;
		cout << "Entry successfull" << endl << endl;
	}//inner if
	else if (hashName[index]->name == inputName) {
		//^ Checks if the first node's {name} is equal to the inputName
		cout << "Value: " << hashName[index]->value << endl << endl;
	}//else if
	else {
		//^ Traverse through the Linked List through a Linear Search
		ListNode *nodePtr = hashName[index];
		//v {nodePtr->next} is a {nullptr} so {nodePtr} points to last node
		while (nodePtr->next != NULL) {
			nodePtr = nodePtr->next;

			if (nodePtr->name == inputName) {
				cout << "Value: " << nodePtr->value << endl << endl;
				return;//We're done here
			}//if. Checks if we are actually trying to {Get} instead of {put}
		}//while

		//v Now take in a {number}
		cout << "Enter a value for " << inputName << ": #";
		cin >> number;
		nodePtr->next = new ListNode(inputName, number);
		tableSize++;
		cout << "Entry successfull" << endl << endl;
	}//inner else

	//nodePtr = (struct ListNode*)malloc(sizeof(struct ListNode));
	//^ Ignore this. Uneeded
		
	
}//function put

/*v Converts each letter from the string into its ASCII number, then adds them up, 
and then does modulus 10 */
int HashTable::hash(string name) {
	int hashed = 0;

	for (int i = 0; i < name.length(); i++)
	{
		hashed += int(name.at(i));
	}//for
	hashed %= maxIndex;
	//cout << hashed;

	return hashed;
}//function hash

