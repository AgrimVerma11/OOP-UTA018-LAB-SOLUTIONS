#include <iostream>
using namespace std;

// abstract base class
class student {
public:
    virtual void read() = 0;
    virtual void show() = 0;
    virtual ~student() {}
};

class engineering : public student {
private:
    string name;
public:
    void read() {
        cout << "enter engineering student name: ";
        cin >> name;
    }

    void show() {
        cout << "engineering student name: " << name << endl;
    }
};

class medicine : public student {
private:
    string name;
public:
    void read() {
        cout << "enter medicine student name: ";
        cin >> name;
    }

    void show() {
        cout << "medicine student name: " << name << endl;
    }
};

class science : public student {
private:
    string name;
public:
    void read() {
        cout << "enter science student name: ";
        cin >> name;
    }

    void show() {
        cout << "science student name: " << name << endl;
    }
};

int main() {
    student* s[3];

    engineering e;
    medicine m;
    science sc;

    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    for(int i = 0; i < 3; i++) {
        s[i]->read();
    }

    cout << endl << "showing student details:" << endl;
    for(int i = 0; i < 3; i++) {
        s[i]->show();
    }

    return 0;
}
