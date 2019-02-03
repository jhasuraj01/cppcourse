/*

We can define a class inside other class definition. So this is called nesting of the class. The name of such nested class is local to the nesting class.

*/
#include <iostream>
class A {
private:
	int aData;
public:
	void getaData() {
		std::cout << std::endl << "Enter a number: ";
		std::cin >> aData;
		std::cout << "You are in outer class and the number you entered is: " << aData;
	}
	
	// defining class B inside the class A
	class B {
	private:
		int bData;
	public:
		void getbData() {
			std::cout << std::endl << "\nEnter a number: ";
			std::cin >> bData;
			std::cout << "You are in inner class and the number you entered is: " << bData;
		}
	};

	B b_Object;
	void display() {
		b_Object.getbData();
	}
};
int main() {
	// Creating an object of a class A;
	A a_Object;
	a_Object.getaData();
	a_Object.display();

	// We cannot create an object of a class B In the main function here since it is not a global class.
	// 	B b_Object; Is invalid here;
	// we can access the members of a class B Using the new object define inside a class A.
	return 0;
}


/*

Here class A is defined globally and the class B is nested inside the class A.

From within class B it is not possible to invoke an outer class member function.

Also inter class is instantiated in the body of outer class.

You can invoke inner class member function through its instance (object) from within the member function of an outer class.

Here we have invoked getbData() Function through its instance (object) from within member function display() of outer class A.

*/
