#include <cmath>
#include <iostream>
bool identifyPrime(int);


int main() {
	int num;
	std::cout << "Enter a number: "; std::cin >> num;
	if (identifyPrime(num))
		std::cout << std::endl << num << " is a prime number";
	else
		std::cout << std::endl << num << " is not a prime number";
	return 0;
}


bool identifyPrime(int a) {
	bool isPrime = true;
	float sqrt_a = sqrt(a);
	for (int i = 2; i < sqrt_a; i++) {
		if (a%i == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
}
