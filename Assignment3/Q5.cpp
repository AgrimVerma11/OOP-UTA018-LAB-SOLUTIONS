#include<bits/stdc++.h>
using namespace std;

class a{
	
	private:
		//int x;
		
	public:
		int x;
		void value(int a){
			x=a;
		}
	
	friend void turn();
};

class b{
	
	private:
		//int y;
		
	public:
		int y;
		void value(int b){
			y=b;
		}
	
	friend void turn();
};

void turn(a k,b l){
	
		cout<<"before swapping numbers were:"<<k.x<<" "<<l.y<<endl;
		
		int temp;
		
		temp=k.x;
		k.x=l.y;
		l.y=temp;
		
		cout<<"after swapping numbers were:"<<k.x<<" "<<l.y;
}

int main(){
	a a1;
	a1.value(3);
	
	b b1;
	b1.value(4);
	
	turn(a1,b1);
	
	return 0;
}
