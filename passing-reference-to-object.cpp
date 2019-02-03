/*

Variables can be passed to a function either by value or by reference. Similarly we can pass a reference to object to a function. When an object is passed as an argument to function a copy of that object is made, i.e. function create its own copy and works on its own copy therefore, any changes made in function don't affect the original object while when you pass an object by reference no copy of the object is made, its memory address is passed to a function so that called function directly works on the original object which is passed to the function during the function call. Therefore any changes made in the function are reflected in the original object.

*/

//A program illustrating how to pass a reference to object as a function argument.
#include <iostream>
class ABC {
public:
	int data;
	void getData(void) {
		std::cout << std::endl << "Enter a number: ";
		std::cin >> data;
		std::cout << "The number you entered: " << data;
	}

	// passing a reference to object
	void putData(ABC &obj) {
		// changing the data;
		obj.data = -obj.data;
		std::cout << "\nThe number is changed to: " << data;
	}

};
int main() {
	// object declaration
	ABC object;
	// receiving data from user
	object.getData();
	// changing data by giving reference to object;
	object.putData(object);
}

/*

Here in the putdata() functions we have passed reference to object to modify the data member from within the member function via it's object.

*/
