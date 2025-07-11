// this is question 1 of the topic- polymorphism and all that (First in the second section of the assignment 5)
#include <iostream>
using namespace std;

class polygon {
protected:
    int width, height;
public:
    void set_value(int w, int h) {
        width = w;
        height = h;
    }

    // virtual taaki correct calculate_area is called
    virtual void calculate_area() {
        cout << "area of polygon not defined" << endl;
    }

    virtual ~polygon() {}
};

class rectangle : public polygon {
public:
    void calculate_area() {
        int area = width * height;
        cout << "area of rectangle: " << area << endl;
    }
};

class triangle : public polygon {
public:
    void calculate_area() {
        float area = 0.5 * width * height;
        cout << "area of triangle: " << area << endl;
    }
};

int main() {
    polygon* p;

    rectangle r;
    triangle t;

    //rectangle
    p = &r;
    p->set_value(10, 5);
    p->calculate_area();

    // triangle
    p = &t;
    p->set_value(10, 5);
    p->calculate_area();

    return 0;
}
