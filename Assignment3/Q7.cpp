#include<bits/stdc++.h>
using namespace std;

class B;

class A{
	
	private:
		int x;
		
	public:
		void input(int y){
			x=y;
		}
		
		friend class B;
			
		void showvalueA(){
			cout<<"from A value is "<<x<<endl;
		}	
		

};

class B{
	public:
	
	void showvalueB(A a){
		cout<<"b acessing A value is "<<a.x;
	}
};

int main(){

    A a;
    B b;
    
    int y;
    cout<<"enter value:";
    cin>>y;
    a.input(y); 
    
    a.showvalueA();
    b.showvalueB(a);
    
    return 0;
}
