#include<bits/stdc++.h>
using namespace std;

class Rectangle{
	
	int length,breath;
	
	public:
		
		Rectangle(){
			length=breath=0;
		}
		
		Rectangle(int l,int b){
			length=l;
			breath=b;
		}
		
		Rectangle(int a){
			length=breath=a;
		}
		
		int area(){
			return length*breath;
		}
};

int main(){
	
	int i,l,b,a;
	
	cout<<"enter length:";
	cin>>l;
	
	cout<<"enter breath:";
	cin>>b;
	
	cout<<"enter side of square:";
	cin>>a;
	
	Rectangle r[]={Rectangle(),Rectangle(l,b),Rectangle(a)};
	
	for(int i=0;i<3;i++){
		cout<<"area:"<<r[i].area()<<endl;
	}
	
	return 0;
}                           
