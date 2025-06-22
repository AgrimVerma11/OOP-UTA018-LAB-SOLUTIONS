#include <iostream>
using namespace std;

namespace Physics {
    int value = 42;

    void display() {
        cout << "Physics value: " << value << std::endl;
    }
}

namespace Chemistry {
    int value = 96;

    void display() {
        cout << "Chemistry value: " << value << std::endl;
    }
}

int main() {

    Physics::display();
    Chemistry::display();
    return 0;
}
