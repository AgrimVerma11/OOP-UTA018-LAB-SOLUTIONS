#include<bits/stdc++.h>
using namespace std;

class items{
    private:
        static int count;
        int value;
    public:
        void getdata(int);
        void putdata();
};

int items::count;

void items::getdata(int a)
{
    value = a;
    count++;
}

void items::putdata()
{
    cout<<"Count: "<<count<<endl;
}


// class functions definition ends here, and my main begins
int main()
{
    items i,j,k;
    // checking count when i have not given any values
    cout<<"-------------------------\nBefore reading the given data :\n";
    i.putdata();
    j.putdata();
    k.putdata();
    //giving data
    i.getdata(20);
    j.getdata(30);
    k.getdata(40);
    cout<<"-------------------------\nAfter reading the given data :\n";
    //now after putting values, let's find the count and if static worked well
    i.putdata();
    j.putdata();
    k.putdata();



}