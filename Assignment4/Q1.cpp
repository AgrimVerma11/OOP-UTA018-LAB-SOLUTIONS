#include <bits/stdc++.h>
using namespace std;

class Vehicle {
protected:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }
    void displaySpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle {
public:
    void showDetails() {
        cout << "Public Inheritance - Car Speed: " << speed << " km/h" << endl;
    }
};

class Truck : protected Vehicle {
public:
    void setTruckSpeed(int s) {
        setSpeed(s);
    }
    void showDetails() {
        cout << "Protected Inheritance - Truck Speed: " << speed << " km/h" << endl;
    }
};

class Bike : private Vehicle {
public:
    void setBikeSpeed(int s) {
        setSpeed(s);
    }
    void showDetails() {
        cout << "Private Inheritance - Bike Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;
    myCar.setSpeed(120);
    myCar.showDetails();

    Truck myTruck;
    myTruck.setTruckSpeed(80);
    myTruck.showDetails();

    Bike myBike;
    myBike.setBikeSpeed(60);
    myBike.showDetails();

    return 0;
}
