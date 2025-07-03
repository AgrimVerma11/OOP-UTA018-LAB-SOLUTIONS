#include<bits/stdc++.h>
using namespace std;

//part a - use of :: to define functions outside the class 

class item
{
    private:
        int mrp;
        int cost;
    public:
        void getdata(int , int );
        void putdata(void);
};

void item::getdata(int a , int b )
{
    mrp = a ;
    cost = b;
}

void item::putdata()
{
    cout<<"MRP = "<<mrp;
    cout<<"\nDiscounted cost = "<<cost;
    cout<<"\nAmount saved : "<<mrp-cost;
}

int main()
{
    item i;
    i.getdata(350, 200);
    i.putdata();
    return 0;
}