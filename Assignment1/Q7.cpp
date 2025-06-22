#include <bits/stdc++.h>
using namespace std;

class Complex {
private:
    
    float real;
    float imaginary;

public:
    
    void set(float r, float i) {
        real = r;
        imaginary = i;
    }

    // display function
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    // function to add my complex numbers 
    Complex sum(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }
};

int main() {
    
    Complex c1, c2, c3;
    c1.set(3.5, 2.5);
    cout << "First complex number: ";
    c1.display();

    c2.set(1.5, 4.5);
    cout << "Second complex number: ";
    c2.display();

    // adding the numbers now
    c3 = c1.sum(c2);
    cout << "Sum of the two complex numbers: ";
    c3.display();

    return 0;
}
