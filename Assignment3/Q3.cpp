#include<bits/stdc++.h>
using namespace std;

class product{
	
	public:
		product(){
			cout<<"constructor called"<<endl;
		}
		
		~product(){
			cout<<"destructor called"<<endl;
		}
		
		void prod(int x,int y){
			cout<<"product is "<<x*y<<endl;
		}
		
		
};

int main(){
	
	product p;
	
	p.prod(3,4);
	
	return 0;
}
