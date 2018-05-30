// Linear and Binary Search

#include "stdafx.h"
#include <iostream>
using namespace std;
int linearSearch(int arr[], int arrSize, int searchNum);
int binarySearch(int arr[], int arrSize, int searchNum);

int main()
{
	int numArr[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
		13, 14, 15, 16, 17, 18, 19, 20 };
	int searchNum;

	cout << "Enter a number to search: ";
	cin >> searchNum;
	int linearIndex = linearSearch(numArr, size(numArr), 
		searchNum);
	int binaryIndex = binarySearch(numArr, size(numArr),
		searchNum);
	cout << "Linear Search Index: " << linearIndex <<
		endl << "Binary Search Index: " << binaryIndex
		<< endl;

    return 0;
}//end of main

int linearSearch(int arr[], int arrSize, int searchNum) {
	int index;

	for (int i = 0; i < arrSize; i++) {
		if (arr[i] == searchNum) {
			return ++i;
		}//end of if
	}//end of for

}//end of function linearSearch

int binarySearch(int arr[], int arrSize, int searchNum) {
	int index, halfway = arrSize / 2;
	/* The variable checked will be the number of times the 
	program checked if the value was equal to searchNum */

	if (searchNum == arr[halfway]) {
		return 1;
	}//end of if

	else if (searchNum < arr[halfway]) {
		for (int i = 0, check = 1; i < halfway;
			i++, check++) {
			if (arr[i] == searchNum) {
				return check;
			}//end of if
		}//end of for
	}//end of else if

	else {
		for (int i = halfway + 1, check = 1; i < arrSize;
			i++, check++) {
			if (arr[i] == searchNum) {
				return check;
			}//end of if
		}//end of for
	}//end of else

}//end of function binarySearch