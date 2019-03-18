// practicecpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	float arr[] = { 10,2,33.5,100,45,89,46,71,23,19,48,7,16,15,13,12,100,2};
	int arrSize = size(arr);

	// arrange in ascending order;
	for (int i = 0, count = arrSize - 1; i < count; i++) {
		for (int j = 0; j < count - i; j++) {
			if (arr[j] > arr[j + 1]) {
				float temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "{ ";
	for (int i = 0; true /*break point is inside*/; i++) {
		cout << arr[i];
		if (i < arrSize - 1) {
			cout << ", ";
		}
		else {
			cout << " ]\n";
			break;
		}
	}
	float searchNum;
	cout << "\nEnter a number to search: "; cin >> searchNum;

	// { 1,2,33,56 }
	int lb = 0;
	int ub = arrSize - 1;
	int m = (lb + ub) / 2;;
	bool numberFound = true;
	while (arr[m] != searchNum) {

		if(lb == ub) {
			cout << "Number not found!";
			numberFound = false;
			break;
		}

		if (arr[m] > searchNum) {
			ub = m - 1;
		}
		else {
			lb = m + 1;
		}
		m = (lb + ub) / 2;
	}

	if (numberFound) {
		cout << "Number Found and its position is: " << m+1;
	}
	
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
