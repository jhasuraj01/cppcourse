// C++ program to demonstrate how to reverse a string accepted from a user using character array 

#include <iostream>
using namespace std;
void reverse(char [], int);
int main()
{
	char str[15]; int i = -1;

	do {
		i++;
		str[i] = getchar();
	} while (str[i] != '\n' && i<14);

	int length = i;
	reverse(str, length);

	for (int j = 0; j < length; j++) {
		cout << str[j];
	}
	return 0;
}
void reverse(char arr[], int size) {
	int start = 0, end = size - 1;
	while (start < end) {
		char temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
