#include <iostream>
int min_of_4_int(int, int, int, int);

int main() {
	int num1, num2, num3, num4;
	std::cout << "Enter four integers :\n";
	std::cin >> num1 >> num2 >> num3 >> num4;
	std::cout << "\nMinimum number is: " << min_of_4_int(num1, num2, num3, num4);
	return 0;
}

int min_of_4_int(int n1, int n2, int n3, int n4) {
	int min_num = n1;
	if (min_num > n2)
		min_num = n2;
	if (min_num > n3)
		min_num = n3;
	if (min_num > n4)
		min_num = n4;
	return min_num;
}
