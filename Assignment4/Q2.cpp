#include <bits/stdc++.h>
using namespace std;

class BaseNumber {
protected:
    int num;

public:
    void setNum(int n) {
        num = n;
    }
};

class SquareCalculator : public BaseNumber {
public:
    int calculateSquare() {
        return num * num;
    }
};

class CubeCalculator : public BaseNumber {
public:
    int calculateCube() {
        return num * num * num;
    }
};

int main() {
    SquareCalculator calculator1;
    CubeCalculator calculator2;

    calculator1.setNum(5);
    calculator2.setNum(3);

    cout << "Square of 5: " << calculator1.calculateSquare() << endl;
    cout << "Cube of 3: " << calculator2.calculateCube() << endl;

    return 0;
}
