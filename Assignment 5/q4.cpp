#include <iostream>
using namespace std;

// abstract base class
class student {
public:
    virtual void read() = 0;
    virtual void show() = 0;
    virtual ~student() {}
};

class science : public student {
private:
    string name;
public:
    void read() {
        cout << "enter name of science student: ";
        cin >> name;
    }

    void show() {
        cout << "science student name: " << name << endl;
    }
};

class art : public student {
private:
    string name;
public:
    void read() {
        cout << "enter name of art student: ";
        cin >> name;
    }

    void show() {
        cout << "art student name: " << name << endl;
    }
};

class commerce : public student {
private:
    string name;
public:
    void read() {
        cout << "enter name of commerce student: ";
        cin >> name;
    }

    void show() {
        cout << "commerce student name: " << name << endl;
    }
};

int main() {
    student* s[3];

    science sc;
    art ar;
    commerce cm;

    s[0] = &sc;
    s[1] = &ar;
    s[2] = &cm;

    for(int i = 0; i < 3; i++) {
        s[i]->read();
    }

    cout << endl << "showing all student data:" << endl;
    for(int i = 0; i < 3; i++) {
        s[i]->show();
    }

    return 0;
}
