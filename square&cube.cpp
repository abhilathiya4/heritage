#include<iostream>

using namespace std;

class number{
	
	public :
		int a;
		void display1(){
		cout<<"NUMBER : ";
		cin>>a;
		}
};

class square : public number{
	public :
		void display2(){
		cout<<"square"<<a*a<<endl;
		}
};

class cube: public number{
	
	public:
		void display3(){
		cout<<"cube"<<a*a*a<<endl;
		}
		
};
int main(){
	
	square o1;
	cube o2;
	
	o1.display1();
	o1.display2();
	
	o2.display1();
	o2.display3();
	
	return 0;
}
