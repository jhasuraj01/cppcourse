// C++ program to demonstrate how to accept a string from a user using character array 

#include <iostream>
using namespace std;

int main()
{
	char str[15]; int i = -1;

	do {
		i++;
		str[i] = getchar();
	} while (str[i] != '\n' && i<14);

	int length = i;
	for (int j = 0; j < length; j++) {
		cout << str[j];
	}
	return 0;
}
