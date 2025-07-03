#include <bits/stdc++.h>
using namespace std;

// globally declarinf a variable
int number = 10;

class Q5 {
public:
    // static member variable
    static int number;
};

// initializing the static member variable which we do outside the class (must.)
int Q5::number = 20;

int main() {
    //locally creating a variable of the same name 
    int number = 30;

    cout << "Local variable: " << number << endl;
    cout << "Global variable: " << :: number << endl;

    return 0;
}
