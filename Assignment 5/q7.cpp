#include <iostream>
#include <cmath>
using namespace std;

class triangle {
public:
    // right angle triangle (base and height)
    void area(float base, float height) {
        float a = 0.5 * base * height;
        cout << "area of right angle triangle: " << a << endl;
    }

    // equilateral triangle (side only)
    void area(float side) {
        float a = (sqrt(3) / 4) * side * side;
        cout << "area of equilateral triangle: " << a << endl;
    }

    // function for isosceles triangle...the thing is we are overloading the area function to work with diff types of triangles
    void area(float equal_side, int base) {
        float height = sqrt(equal_side * equal_side - (base * base) / 4.0);
        float a = 0.5 * base * height;
        cout << "area of isosceles triangle: " << a << endl;
    }
};

int main() {
    triangle t;

    //my rt. triangle 
    t.area(3, 4);

    //equilateral triangle
    t.area(6.0f);

    // isosceles triangle 
    t.area(5.0f, 6);

    return 0;
}
