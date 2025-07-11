#include <bits/stdc++.h>
using namespace std;

class shape {
public:
    virtual void area() = 0;
    virtual void display() = 0;
    virtual ~shape() {}
};

class circle : public shape {
private:
    float radius;
public:
    circle(float r) {
        radius = r;
    }

    void area() {
        float a = 3.14 * radius * radius;
        cout << "area of circle: " << a << endl;
    }

    void display() {
        cout << "this is a circle with radius = " << radius << endl;
    }
};

class rectangle : public shape {
private:
    int length, breadth;
public:
    rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() {
        int a = length * breadth;
        cout << "area of rectangle: " << a << endl;
    }

    void display() {
        cout << "this is a rectangle with length = " << length << " and breadth = " << breadth << endl;
    }
};

class triangle : public shape {
private:
    int base, height;
public:
    triangle(int b, int h) {
        base = b;
        height = h;
    }

    void area() {
        float a = 0.5 * base * height;
        cout << "area of triangle: " << a << endl;
    }

    void display() {
        cout << "this is a triangle with base = " << base << " and height = " << height << endl;
    }
};

int main() {
    circle c(5);
    rectangle r(4, 6);
    triangle t(3, 8);

    c.display();
    c.area();

    r.display();
    r.area();

    t.display();
    t.area();

    return 0;
}
