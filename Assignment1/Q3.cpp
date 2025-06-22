#include<bits/stdc++.h>
using namespace std;

int main()
{
    // table of 5
    cout<<"Table of 5 using For loop:\n";
    for (int i = 0; i <= 10; i++)
    {
        cout<<"5*"<<i<<"="<<5*i<<endl;
    }

    cout<<"______________________________\n";
    int j = 1;
    //Printing string using do while loop
    do
    {
        cout<<"Greeting of the day !!\n";
        j++;
    } while (j <= 5);
    
    //Implying a while loop
    int count = 7;
    while (count != 0)
    {
        cout<<"Current count = "<<count<<endl;
        
        if (count==1)
        {
            cout<<"This was the last count\n";
        }
        count--;
    }
    return 0;
}