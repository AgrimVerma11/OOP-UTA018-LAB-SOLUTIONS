#include<bits/stdc++.h>
using namespace std;

class cubes{
    private:
        int side;
    public:

    inline int getcube(int a)
    {
        side = a;
        return side*side*side;
    }
};

int main()
{
    cubes c;
    int n;
    cout<<"Enter the number you wanna find the cube of: ";
    cin>>n;
    cout<<"Cube of the given number = "<<c.getcube(n);

}