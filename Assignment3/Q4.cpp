#include<bits/stdc++.h>
using namespace std;

class Rectangle{
	public:
		int l,b;
		int area(){
			return l*b;
		}
};
int main(){
	
	cout<<"using dot operator"<<endl;
	Rectangle rect;
	cout<<"length:";
	cin>>rect.l;
	
	cout<<"breath:";
	cin>>rect.b;
	
	cout<<"area:"<<rect.area()<<endl;
	
	cout<<"using this pointer"<<endl; 
	Rectangle *obj= &rect;
	
	cout<<"length:";
	cin>>obj->l;
	
	cout<<"breath:";
	cin>>obj->b;
	
	cout<<"area:"<<obj->area();
	
	return 0;
}
