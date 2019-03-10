#include <iostream>

int main() {
	int num_arr[10], *ptr;
	std::cout << "Enter 10 numbers : \n";
	for (int i = 0; i < 10; i++)
	{
		std::cin >> num_arr[i];
	}
	ptr = &num_arr[0];
	std::cout << "\nOutput : \n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << *ptr << std::endl;
		ptr++;
	}
	return 0;
}
