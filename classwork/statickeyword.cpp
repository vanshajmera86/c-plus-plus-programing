#include<iostream>
using namespace std;
/*
	static : it is a keyword.
		
		- which is use for common memory management.
		- it will hold the last modified value.
	
*/

class staticDemo{
	public:
		static int a;
		
		void setVal()
		{
			cout<<"Enter A : ";
			cin>>a;
		}
		
		void putVal()
		{
			cout<<"\nA = "<<a;
		}
		
		
};

int staticDemo::a=0;

int main()
{
	staticDemo d1,d2,d3;
	d1.setVal();
	d2.setVal();
	d3.setVal();
	
	d1.putVal();
	d2.putVal();
	d3.putVal();
	
	return 0;
}