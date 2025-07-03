#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    void getdata(int l, int b); // takes length and breadth
    void displayArea() const;  
};

void Rectangle::getdata(int l, int b) {
    length = l;
    breadth = b;
}

void Rectangle::displayArea() const {
    cout << "Length: " << length << ", Breadth: " << breadth;
    cout << ", Area: " << (length * breadth) << endl;
}

// class function definitions ends here.
//-----------------------------------------------

int main() {
    int n;

    // input the number of rectangles 
    cout << "Enter the number of rectangles: ";
    cin >> n;

    // this is an array of type rectangle( class rectangle)
    Rectangle rects[n];

    // taking inputs for the dimensions of my rectangle
    for (int i = 0; i < n; i++) {
        int length, breadth;
        cout << "\nEnter details for Rectangle " << i + 1 << ":\n";
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;

        rects[i].getdata(length, breadth);
    }

    // Displaying area of the rect
    cout << "\nAreas of the rectangles:\n";
    for (int i = 0; i < n; i++) {
        cout << "Rectangle " << i + 1 << ": ";
        rects[i].displayArea();
    }
    return 0;
}
