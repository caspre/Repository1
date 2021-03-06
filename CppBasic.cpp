// CppBasic.cpp
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void printCharArray(char test[]);
void findShirtSize(int test);

int main()
{
	char test1[12] = { 'H', 'e', 'l', 'l', 'o', ' ', 'T', 'h', 'e', 'r', 'e','\0' };
	printCharArray(test1);
	cout << endl;

	findShirtSize(3);
	cout << endl;

    return 0;
}

void printCharArray(char test[]) {
	for (int i = 0; test[i] != NULL; i++) {
		cout << test[i];
	}//for
	cout << endl;
}//function printCharArray

void findShirtSize(int test) {
	cout << "Size: ";
	switch (test) {
	case 1:
		cout << "Extra Small";
		break;
	case 2:
		cout << "Small";
		break;
	case 3:
		cout << "Medium";
		break;
	case 4:
		cout << "Large";
		break;
	case 5:
		cout << "Extra Large";
		break;
	case 6:
		cout << "Extra Extra Large";
		break;
	default:
		cout << "Medium";
	}//switch
	cout << endl;
}