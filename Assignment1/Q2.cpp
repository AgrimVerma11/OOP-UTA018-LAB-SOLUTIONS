#include<bits/stdc++.h>
using namespace std;
/*F=9C/5+32*/

float fahreneit(float cel)
{
    return ((9*cel)/5 + 32);
}

int main()
{
    float c;
    cout<<"Enter the temp in Celsius :";
    cin>>c;
    cout<<"Temperature in fahreneit:" <<fahreneit(c);
}