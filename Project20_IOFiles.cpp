// Project20_IOFiles.cpp : Defines the entry point for the console application.
// Reads a file, encripts it, then write the encripted file to a new one

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream nonCoded("nonCoded.txt", ios::in);
	ofstream coded("codedFile.txt", ios::out);
	
	string line;
	int j = 0;

	
	cout << endl;

	getline(nonCoded, line);
	
	
	int *size = new int(line.length());
	
	*size += 1;
	cout << *size << endl;
	int const n = line.length();
	char *fileText = new char[*size];
	strcpy(fileText, line.c_str());
	for (int i = 0; i < *size; i++) {
		fileText[i]++;
		cout << fileText[i];
	}
	cout << endl;
	

	nonCoded.close();
	coded.close();

	return 0;
}

/*

*/