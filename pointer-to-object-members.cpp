#include <iostream>
class ABC {
public:
	int data;
	void getData() {
		std::cout << std::endl << "Enter a data: ";
		std::cin >> data;
		std::cout << "The value of data after you entered: " << data;
	}
};

int main() {
	//
	// using pointer of int data type.
	//
	//declaring an object of class ABC
	ABC obj;
	// declaring a pointer of int data type
	int *p;
	//modifing the value of a public variable of class
	obj.data = 4;
	//saving the address of variable
	p = &obj.data;
	//printing out the value of variable using int data type pointer.
	std::cout << "\nThe value of data after modified by pointer of int data type: " << *p;

	//
	// using pointer of a class data type.
	//
	//declaring pointer to an object of a class ABC
	ABC *q;
	//copying the address of an object;
	q = &obj;
	//calling the method using pointer to an object
	q->getData();
	//modifying the variable using pointer to an object
	q->data = 5;
	//printing out the value of variable using pointer to an object.
	std::cout << "\nThe value of data after modified by pointer to an object: " << q->data;
	
	return 0;
}


/*

In the above program we have two pointers one is integer pointer and other is class type pointer both are used to point to  object members. Thus both data members and member functions can be accessed via pointer also, just by giving them, reference of a class they belong to.

For invoking Member function through pointer we use pointer to pointer Member function operator (->)

You can assign the address of a public member of an object to a pointer.

When accessing members of a class given a pointer to an object, use Arrow(->) operator.

*/
