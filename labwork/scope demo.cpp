#include<iostream>
using namespace std;

class scopedemo
{
	public:
		string name,address="surat";
		int age=20;
		
		void getname();
		void details();
		
};

void scopedemo::getname()
{
	cout<<"\n\n enter your name :";
	cin>>name;
}

void scopedemo::details()
{
	cout<<"\n name    :"<<name;
	cout<<"\n address :"<<address;
	cout<<"\n age     :"<<age;
}







int main()
{
	scopedemo s1;
	s1.getname();
	s1.details();
	return 0;
}