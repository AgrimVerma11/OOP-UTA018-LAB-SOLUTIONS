#include <bits/stdc++.h>
using namespace std;

// globally declarinf a variable
int var = 10;

class Q5 {
public:
    // static member variable
    static int var;
};

// initializing the static member variable which we do outside the class (must.)
int Q5::var = 20;

int main() {
    //locally creating a variable of the same name 
    int var = 30;

    cout << "Local variable: " << var << endl;
    cout << "Global variable: " << ::var << endl;
    cout << "Static member variable: " << Q5::var << endl;

    return 0;
}
