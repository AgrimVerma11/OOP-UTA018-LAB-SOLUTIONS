#include<bits/stdc++.h>
using namespace std;

class items{
    private:
        static int count;
        int code;
    public:
        void setcode(void)
        {
            code = ++count;
        }

        void showcode(void)
        {
            cout<<"Item Number: "<<code<<endl;
        }

        static void showcount(void)
        {
            cout<<"Count: "<<count<<endl;
        }
};

int items::count;

int main()
{
    items i1,i2;
    items::showcount(); // tells me , intially by deafult my static variable is assigned 0 ( when the first object of class is created)
    i1.setcode();
    items::showcount();
    i2.setcode();
    items::showcount();
    items i3;
    
    i3.setcode();
    items::showcount();

    i1.showcode();
    i2.showcode();
    i3.showcode();

}