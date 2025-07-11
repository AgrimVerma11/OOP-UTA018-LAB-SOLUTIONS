#include<bits/stdc++.h>
using namespace std;

class Rectangle{
	
	float length;
	float breath;
	
	public:
		
		Rectangle(){
			length=breath=0;
		}
		
		Rectangle(float l,float b){
			length=l;
			breath=b;
		}
		
		Rectangle(int a){
			length=breath=a;
		}
		
		float area(){
			return length*breath;
		}
};

int main(){
	Rectangle r1,r2,r3;
	
	r1=Rectangle();
	cout<<r1.area()<<endl;
	
	r2=Rectangle(3,4);
	cout<<r2.area()<<endl;
	
	r3=Rectangle(5);
	cout<<r3.area()<<endl;
	
	return 0;
	
}
