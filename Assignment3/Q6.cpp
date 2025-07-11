#include<bits/stdc++.h>
using namespace std;

class k{
		
	public:
		int x;
		void input(int a){
			x=a;
		}
		
		friend int sum();
};

class l{
		
	public:
		int y;
		void input(int b){
			y=b;
		}
		
		friend int sum();
};

int sum(k s,l t){
	return s.x+t.y;
}

int main(){
	
	k s1;
	s1.input(3);
	l s2;
	s2.input(4);
	cout<<"sum:"<<sum(s1,s2);
	
	return 0;
}
