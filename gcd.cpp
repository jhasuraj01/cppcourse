#include <iostream>
void gcd() {
	int num1, num2, gcd_num = 1;
	std::cout << "Enter Two number:\n";
	std::cin >> num1 >> num2;
	for (int i = 2; i <= num1 && i <= num2; i++) {
		if (num1%i == 0)
			if (num2%i == 0)
				gcd_num = i;
	}
	std::cout << "gcd :" << gcd_num;
}
int main() {
	gcd();
	return 0;
}
