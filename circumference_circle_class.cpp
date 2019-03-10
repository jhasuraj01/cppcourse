#include <iostream>
class circumference_circle_class {
private:
	int rad;
public:
	void circumference(float);
};
void circumference_circle_class::circumference(float r) {
	std::cout << "\nCircumference of a circle is: " << 2 * 3.14*r;
}

int main() {
	circumference_circle_class obj;
	obj.circumference(10);
	return 0;
}
