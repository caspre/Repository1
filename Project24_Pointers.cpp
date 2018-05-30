// Project24_Pointers
// 
/* Program:
	Convert the following function that uses 
	reference parameters to now use pointers. 
	Include a driver to test your function.
*/

#include "stdafx.h"
#include <iostream>

using namespace std;
void swap(int *x, int *y);

int main()
{
	int x, y;
	int *ptrX = &x, *ptrY = &y;
	
	
	cout << "Enter a value for x: ";
	cin >> x;
	cout << "Enter a value for y: ";
	cin >> y;
	cout << endl;
	
	swap(ptrX, ptrY);
	//cout << ptrX << endl;
	cout << "X value: " << x << " | Y value: " << y 
		<< endl;
    return 0;
}

void swap(int *x, int *y) {
	int temp;
	temp = *y;
	*y = *x;
	*x = temp;
}//function swap