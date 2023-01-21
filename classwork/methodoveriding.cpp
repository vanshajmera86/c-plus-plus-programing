#include<iostream>
using namespace std;
/*
	Method overriding : 
	
	-Same return-type
	-Same function-name
	-Same arguments


*/




class A{
	public:
	A()
	{
		cout<<"A's Constructor Called";
	}
	
	void show()
	{
		
		cout<<"\nA's Method Called.";
	}
	
};

class B : public A{
	public:
	B()
	{
		cout<<"\nB's Constructor Called.";
	}
	
	void show()
	{
		A::show();
		cout<<"\nB's Method Called.";
	}
};

class C : public B{
	public:
	C()
	{
		cout<<"\nC's Constructor Called.";
	}
	
	void show()
	{
		B::show();
		cout<<"\nC's Method Called.";
	}
	
};


int main()
{
	C obj;
	obj.show();

	return 0;
}