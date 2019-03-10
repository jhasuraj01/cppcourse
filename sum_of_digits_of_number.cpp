#include <iostream>
class sum_of_digits {
private:
	int sum, num;
public:
	void get_num(void);
	void put_sum(void);
};
void sum_of_digits::get_num() {
	std::cout << "Enter an integer: ";
	std::cin >> num;
}
void sum_of_digits::put_sum() {
	int n = num;
	sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	std::cout << "The sum of digits of " << num << " is " << sum;
}
int main() {
	sum_of_digits obj;
	obj.get_num();
	obj.put_sum();
	return 0;
}
