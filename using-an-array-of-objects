/*

C++ support array of any data type, including class type. So we can call Array having class type element as array of objects.

Syntax: classname obj[dimension];

Eg. ABC obj[3];
Here it declared array of 3 objects of class ABC

Input: 3 numbers seperated by space.

*/

#include <iostream>
class ABC {
public:
	int data;
	void getData(void) {
		std::cout << "Enter a number: ";
		std::cin >> data;
	}
    
	void putData(void) {
		std::cout << "The number you entered: " << data << std::endl << std::endl;
	}
};
int main() {
    //  declaring array of 3 objects of class ABC
    ABC object[3];
	for (int i = 0; i < 3; i++) {
		object[i].getData();
		object[i].putData();
	}
}
