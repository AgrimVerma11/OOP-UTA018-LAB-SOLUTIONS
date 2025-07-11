#include <bits/stdc++.h>
using namespace std;

class Basket {
protected:
    int totalItems;

public:
    Basket() : totalItems(0) {}
    void addItem(int count) {
        totalItems += count;
    }
    int getTotalItems() {
        return totalItems;
    }
};

class AppleBasket : public Basket {
private:
    int apples;

public:
    AppleBasket() : apples(0) {}
    void setApples(int count) {
        apples = count;
        addItem(count);
    }
    int getApples() {
        return apples;
    }
};

class MangoBasket : public Basket {
private:
    int mangoes;

public:
    MangoBasket() : mangoes(0) {}
    void setMangoes(int count) {
        mangoes = count;
        addItem(count);
    }
    int getMangoes() {
        return mangoes;
    }
};

int main() {
    AppleBasket redapples;
    MangoBasket yellowmangoes;

    redapples.setApples(6);
    yellowmangoes.setMangoes(8);

    cout << "Apples: " << redapples.getApples() << endl;
    cout << "Mangoes: " << yellowmangoes.getMangoes() << endl;
    cout << "Total Items in Basket: " << redapples.getTotalItems() << endl;

    return 0;
}
