#include<iostream>

using namespace std;

class mother{
	
	public :
		void display1(){
		cout<<"acting"<<endl;
		}
};

class daughter : public mother{
	public :
		void display2(){
		cout<<"dancing"<<endl;
		}
	
};
int main(){
	
	daughter msg;
	msg.display1();
	msg.display2();
	
	
	return 0;
}
