#include <bits/stdc++.h>
using namespace std;

class item {
private:
    
    int privData;

    // Private member function
    void privFunction() {
        cout << "Accessing privateFunction....\n Value of privateData: " << privData << endl;
    }

public:
    //constructor
    item(int data) {
        privData = data;
    }
    //public function which tries accessing and modifying my private data memeber
    void publicFunction() {
        cout << "Inside publicFunction...." << endl;

        // Accessing and modifying my private member variable
        privData += 10;
        cout << "privateData after modification: " << privData << endl;

        // Call for priv member func
        privFunction();
    }
};

int main() {

    item obj(5);
    obj.publicFunction();

    return 0;
}
