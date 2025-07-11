#include <bits/stdc++.h>
using namespace std;


class a {
protected:
    int value;

public:
    //constrictor
    a() {
        cout << "enter value in a: ";
        cin >> value;
    }

    void show() {
        cout << "value from a: " << value << endl;
    }
    //destructor 
    ~a() {
        cout << "a destructor called" << endl;
    }
};

// using virtual to prevent two copies of "a" in "d"

class b : virtual public a {
public:
    //Constructor
    b() {
        cout << "constructor of b called" << endl;
    }
    //desxtructor
    ~b() {
        cout << "b destructor called" << endl;
    }
};

class c : virtual public a {
public:
    c() {
        cout << "constructor of c called" << endl;
    }

    ~c() {
        cout << "c destructor called" << endl;
    }
};

// d inherits from both b and c... i.e. multiple inheritance happens here
class d : public b, public c {
public:
    d() {
        cout << "constructor of d called" << endl;
    }

    void show_all() {
        show(); // no ambiguity due to virtual inheritance
    }

    ~d() {
        cout << "d destructor called" << endl;
    }
};

int main() {
    d obj;
    cout << endl << "displaying value from base class through d:" << endl;
    obj.show_all();
    return 0;
}
