#include<iostream>
using namespace std;

class sample
{
	public:
	string fname,lname;
	int age;
	
	sample()
	{
		cout<<"\n\ndefault constructor called :";
	}
	sample(string f,string l,int a)
	{
		cout<<"\n\nperameterlized constructor called :";
		fname=f;
		lname=l;
		age=a;
	}
	
	sample(const sample &obj)
	{
		cout<<"\n\ncopy constructor called :";
		fname=obj.fname;
		lname=obj.lname;
		age=obj.age;
	}
	
	void display()
		{	
		cout<<"\n\nFirst Name : "<<fname<<"\nLast Name : "<<lname<<"\nAge : "<<age;
		}
		
    	~sample()
		{
			cout<<"\n\ndestructor constructor :";
		}
	
};










int main()
{
	sample sam,obj1("vansh","ajmera",24),obj2("om","gabani",28);
	obj1.display();
	obj2.display();
	sample obj3(obj2);
	obj3.display();
	return 0;
}