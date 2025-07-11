#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }

    int calculateArea() {
        return length * breadth;
    }

    ~Rectangle() {
        cout << "Destructor called for Rectangle object." << endl;
    }
};

int main() {
    Rectangle* rect1 = new Rectangle(10, 5);
    cout << "Area of Rectangle 1: " << rect1->calculateArea() << endl;
    delete rect1;

    int n = 3;
    Rectangle* rectArray = new Rectangle[n];
    rectArray[0] = Rectangle(2, 3);
    rectArray[1] = Rectangle(4, 5);
    rectArray[2] = Rectangle(6, 7);

    for (int i = 0; i < n; i++) {
        cout << "Area of Rectangle " << i + 1 << ": " << rectArray[i].calculateArea() << endl;
    }

    delete[] rectArray;

    return 0;
}
