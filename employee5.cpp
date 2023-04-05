#include<iostream>

using namespace std;

class A{
	public :
		int id;
		char name[50];
		char role[50];
		int salary;
		int exp;
		char c_name[50];
		char add[50];
		char email[50];
		int contact;
		
	void setter1(){
		cout<<"enter id : ";
		cin>>id;
		cout<<"enter name : ";
		cin>>name;
		cout<<"enter role : ";
		cin>>role;
		}
};

class B : public A{
	public :
	void setter2(){
		cout<<"enter salary : ";
		cin>>salary;
		cout<<"enter experience : ";
		cin>>exp;
		cout<<"enter role : ";
		cin>>role;
	}
	
};

class C : public B{
	public :
	void setter3(){
		cout<<"enter company name : ";
		cin>>c_name;
		cout<<"enter address : ";
		cin>>add;
	}
	void getter(){
		cout<<name<<endl;
		cout<<role<<endl;
		cout<<salary<<endl;
	}
	
};
class D : public C{
	public :
	void setter4(){
		cout<<"enter email : ";
		cin>>email;
		cout<<"enter conatct : ";
		cin>>contact;
		
	}
	
	void getter2(){
		cout<<id<<endl;
		
		getter();
//		cout<<name<<endl;
//		cout<<role<<endl;
//		cout<<salary<<endl;
		cout<<exp<<endl;
		cout<<c_name<<endl;
		cout<<add<<endl;
		cout<<email<<endl;
		cout<<contact<<endl;
	}
	
};
int main(){
	D obj;
	obj.setter1();
	obj.setter2();
	obj.setter3();
	obj.setter4();
	obj.getter();
	obj.getter2();
	
	return 0;
}
