#include <bits/stdc++.h>
using namespace std;

class Item {
private:
    int mrp;
    int cost;

public:
    void getdata(int a, int b); 
    void putdata() const;      
    void updatecost(int newCost);

    // Friend function declarations for using pass-by-value and pass-by-address scenarios
    friend Item modifyByValue(Item obj);
    friend Item* modifyByAddress(Item* obj);
};

//class functuons definitions 
void Item::getdata(int a, int b) {
    mrp = a;
    cost = b;
}

void Item::putdata() const {
    cout << "MRP: " << mrp;
    cout << "\nDiscounted Cost: " << cost;
    cout << "\nAmount Saved: " << mrp - cost << endl;
}

void Item::updatecost(int newCost) {
    cost = newCost;
}

// pass by val
Item modifyByValue(Item obj) {
    obj.updatecost(obj.cost - 20); //applying a discount of 20
    return obj;
}

// pass by address ( doesnt make a copy and make changes directly)
Item* modifyByAddress(Item* obj) {
    obj->updatecost(obj->cost - 30); // applying a lil more discount
    return obj;
}

int main() {
    Item item1;

    // defining initial values
    item1.getdata(500, 400);
    cout << "Original Item Details:\n";
    item1.putdata();

    // pass by val
    cout << "\n\nPassing by value...\n";
    Item item2 = modifyByValue(item1);
    cout << "Original Item :\n";
    item1.putdata();
    cout << "\nModified Item :\n";
    item2.putdata();

    // passing ny address
    cout << "\n\nPassing by address...\n";
    Item* item3 = modifyByAddress(&item1);
    cout << "Original Item :\n";
    item1.putdata();
    cout << "\nModified Item :\n";
    item3->putdata();
    return 0;
}
