// IntervalFinder.cpp : Defines the entry point for the console application.
// Stanley Marcellus
/* Finds how many times a number fits into 200, and displays there value 
	at each multiplication. Can currently enter one of two integer values.
	make the second integer 0 to only run 1 integer through.
*/


#include "stdafx.h"
#include <iostream>
#include "iomanip"
using namespace std;
void findInterval(int num);
void findInterval(int num1, int num2);
void findInterval(int num1, int num2, int num3);
int findCycles(int num);
void selectionSort(int arr[], int arrSize);

int main()
{
	int num1, num2, num3;

	cout << "Enter three numbers to find intervals" << endl << 
		"Enter zeros if you wish the enter less than three" << endl << "Numbers: ";
	cin >> num1;
	cin >> num2;
	cin >> num3;

	if (num1 == 0) {
		//nothing happens
	}
	else if (num2 == 0 && num3 == 0) {
		findInterval(num1);
	}//end of if
	else if(num3 == 0){
		findInterval(num1, num2);
	}
	else if (num2 == 0) {
		findInterval(num1, num3);
	}
	else {
		findInterval(num1, num2, num3);
	}//end of else

    return 0;
}//end of main

void findInterval(int num) {
	for (int i = 1, interval = num; interval < 200 + num;
		interval += num, i++) {
		cout << setw(3) << i << setw(10) << interval << endl;
	}//end of for
}//end of function findInterval

void findInterval(int num1, int num2) {

	if (num2 < num1) {
		int hold = num2;
		num2 = num1;
		num1 = hold;
	}//end of if

	//int num1Cycle = findCycles(num1);
	int num2Cycle = findCycles(num2);

	for (int i = 1, interval1 = num1, interval2 = num2; interval1 < 200 + num1;
		interval1 += num1, interval2 += num2, i++) {
		if (i <= num2Cycle) {
			cout << setw(3) << i << setw(10) << interval1 << setw(2) << '|' <<
				setw(4) << interval2 << endl;
		}//end of if
		else {
			cout << setw(3) << i << setw(10) << interval1 << setw(2) <<
				'|' << endl;
		}//end of else
		
	}//end of for

}//end of overloaded function findInterval

void findInterval(int num1, int num2, int num3) {
	int arr[3] = { num1, num2, num3 };

	selectionSort(arr, 3);

	 //int num1Cycle = findCycles(num1);
	int num2Cycle = findCycles(num2);
	int num3Cycle = findCycles(num3);

	for (int i = 1, interval1 = num1, interval2 = num2, interval3 = num3; 
		interval1 < 200 + num1; interval1 += num1, interval2 += num2, interval3 += num3,
		i++) {
		if(i <= num3Cycle){
			cout << setw(3) << i << setw(10) << interval1 << setw(2) << '|' <<
				setw(4) << interval2 << setw(2) << '|' << setw(4) << interval3 
				<< endl;
		}//end of if
		else if (i <= num2Cycle) {
			cout << setw(3) << i << setw(10) << interval1 << setw(2) << '|' <<
				setw(4) << interval2 << endl;
		}//end of else if
		else {
			cout << setw(3) << i << setw(10) << interval1 << setw(2) <<
				'|' << endl;
		}//end of else

	}//end of for

}//end of overloaded function findInterval

//v find how many times a number fits into 200
int findCycles(int num) {
	int i = 0;

	for (int interval = num; interval < 200 + num;
		interval += num, i++) {
	}//end of for

	return i;
}//end of function findCycles

void selectionSort(int arr[], int arrSize) {
	int hold;

	for (int i = 0; i < arrSize - 1; i++) {
		for (int j = i + 1; j < arrSize; j++) {
			if (arr[i] > arr[j]) {
				hold = arr[i];
				arr[i] = arr[j];
				arr[j] = hold;
			}//end of if
		}//end of for
	}//end of for

}//end of function bubbleSort