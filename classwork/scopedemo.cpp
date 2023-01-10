#include<iostream>
using namespace std;

/*
	Scope Resolution Operator
	
	symbol   ::
	
	:: -> It is use to access the members outside the class.
	

*/

class ScopeDemo{
	public:
		string name,address="surat";
		int age=43;
		
		void getName();		
		void details();				
};

void ScopeDemo::getName()
{
	cout<<"\nEnter Name : ";
	getline(cin,name);
}

void ScopeDemo::details()
{
	cout<<"\nName : "<<name;
	cout<<"\nAge : "<<age;
	cout<<"\nAddress : "<<address;
}


int main()
{
	ScopeDemo s1;
	s1.getName();
	s1.details();
	return 0;
}