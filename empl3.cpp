#include<iostream>

using namespace std;

class name{
	
	public :
		void out1(){
			cout<<"name : AMAN"<<endl;
		}
};

class age {

	public :
		void out2(){
			cout<<"age : 51"<<endl;
		}
		
};

class role{
	
	public:
	void out3(){
			cout<<"role : CEO"<<endl;
		} 
};

class sex{

	public :
		void out4(){
			cout<<"gender : MALE"<<endl;
		}
};

class output: public name,public age,public role, public sex{
	
};
int main(){
	
	output obj;
	obj.out1();
	obj.out2();
	obj.out3();
	obj.out4();
	
	return 0;
}
