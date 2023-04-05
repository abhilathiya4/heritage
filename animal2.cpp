#include<iostream>

using namespace std;

class animal{
	
	public :
		char name[50];
		int age;
		void set_value(){
			cout<<"enter name of the animal: ";
			cin>>name;
			
			cout<<"enter age : ";
			cin>>age;
			cout<<endl;	
		}
		
};

class zebra : public animal{
	public :
		void set_value1(){	
			cout<<"origin: australia"<<endl;
			cout<<"life: 20 years"<<endl;
			cout<<"terestial animal"<<endl;
		}
	};
		
class dolphine : public animal {
	public: 
		void set_value2(){	
			cout<<"origin: USA"<<endl;
			cout<<"life: 100 years"<<endl;
			cout<<"aquatic animal"<<endl;
			
		}
	
};
	

int main(){
	
	cout<<"enter 2 animal name "<<endl<<"enter ZEBRA and DOLPHINE "<<endl<<endl;
	zebra s1;
	s1.set_value();
	s1.set_value1();
	cout<<endl;
	
	dolphine s2;
	s2.set_value();
	s2.set_value2();
	
	return 0;
}
