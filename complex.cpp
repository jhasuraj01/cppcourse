/*
  Copy the complex class from here and directly use it in your main function as elaborated;
  :(
*/

#include <iostream>
using namespace std;

class complex {
private:
    float x, y;
public:
    complex() {}
    complex(float real, float imag) {
        x = real;
        y = imag;
    }
    complex operator+ (complex c) {
        complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
    complex operator- (complex c) {
        complex temp;
        temp.x = x - c.x;
        temp.y = y - c.y;
        return temp;
    }
    complex operator* (complex c) {
        complex temp;
        temp.x = x * c.x - y * c.y;
        temp.y = x * c.y + c.x * y;
        return temp;
    }
    complex operator/ (complex c) {
        complex temp;
        temp.x = (x * c.x + y * c.y) / (c.x*c.x + c.y*c.y);
        temp.y = (c.x * y - x * c.y) / (c.x*c.x + c.y*c.y);
        return temp;
    }
    complex conjugate(void) {
        complex temp;
        temp.x = x;
        temp.y = -y;
        return temp;
    }
    complex exponent(int index) {
        complex temp = complex(x, y);
        if (index < 0) {
            for (int count = index; count < -1; count++) {
                temp = temp * complex(x, y);
            }
            temp = complex(1, 0) / temp;
        }
        else if (index == 0) {
            temp = complex(1, 0);
        }
        else if (index > 0) {
            for (int count = 1; count < index; count++) {
                temp = temp * complex(x, y);
            }
        }
        return temp;
    }
    void put(void) {
        cout << "\nx : " << x << "\ny : " << y;
    }
};

int main() {
    complex c1, c2, c3, c4;
    c1 = complex(1, 3);
    c2 = complex(2, 2);
    c3 = complex(3, 1);
    
    // c3 raised to the power 4;
    c4 = c3.exponent(4);
    cout<<"c3 raised to the power 4"; c4.put();
    
    // Conjugate of c3;
    c4 = c3.conjugate();
    cout<<"\n\nConjugate of c3"; c4.put();
    
    // square of Conjugate of c3;
    c4 = c3.conjugate().exponent(2);
    cout<<"\n\nsquare of Conjugate of c3"; c4.put();
    
    // Arithmetic operations;
    c4 = c1 + c2 + c3 - c3 + (c3*c2)/c2;
    cout<<"\n\nvalue of c1 + c2 + c3 - c3 + (c3*c2)/c2"; c4.put();
    
    cout<<"\n\n\nCheck out the code: Use, Modify and suggest";
}
