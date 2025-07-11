#include <bits/stdc++.h>
using namespace std;

class x {
protected:
    char str1[100];
public:
    x() {
        cout << "enter string for x: ";
        cin >> str1;
    }

    void show() {
        cout << "string in x: " << str1 << endl;
    }

    ~x() {
        cout << "x destructor called" << endl;
    }
};

class y {
protected:
    char str2[100];
public:
    y() {
        cout << "enter string for y: ";
        cin >> str2;
    }

    void show() {
        cout << "string in y: " << str2 << endl;
    }

    ~y() {
        cout << "y destructor called" << endl;
    }
};

class z : public x, public y {
private:
    char combined[200];
public:
    z() {
        strcpy(combined, str1);
        strcat(combined, str2);
    }

    void show() {
        x::show();
        y::show();
        cout << "string in z (concatenated): " << combined << endl;
    }

    ~z() {
        cout << "z destructor called" << endl;
    }
};

int main() {
    z obj;
    cout << endl << "showing all strings:" << endl;
    obj.show();
    return 0;
}
