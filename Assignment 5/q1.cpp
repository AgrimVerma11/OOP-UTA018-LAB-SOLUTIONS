#include <iostream>
using namespace std;

class alpha {
private:
    int a;
public:
    alpha() {
        cout << "enter value for alpha: ";
        cin >> a;
    }

    void show() {
        cout << "value in alpha: " << a << endl;
    }

    ~alpha() {
        cout << "alpha destructor called" << endl;
    }
};

class beta {
private:
    int b;
public:
    beta() {
        cout << "enter value for beta: ";
        cin >> b;
    }

    void show() {
        cout << "value in beta: " << b << endl;
    }

    ~beta() {
        cout << "beta destructor called" << endl;
    }
};

class gamma : private alpha, private beta {
private:
    int c;
public:
    gamma() {
        cout << "enter value for gamma: ";
        cin >> c;
    }

    void show() {
        alpha::show();
        beta::show();
        cout << "value in gamma: " << c << endl;
    }

    ~gamma() {
        cout << "gamma destructor called" << endl;
    }
};

int main() {
    gamma g;
    cout << endl << "displaying values:" << endl;
    g.show();
    return 0;
}
