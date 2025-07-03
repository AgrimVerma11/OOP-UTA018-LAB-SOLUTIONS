#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    void setDimensions(int l, int b) {
        length = l;
        breadth = b;
    }

    int getArea() const {
        // no changes can be made since this is my const function
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 3); 
    cout << "Area of the rectangle: " << rect.getArea() << endl;
    return 0;
}
