#include<iostream>
using namespace std;

class staticdemo
{
	public:
		static int a;
		
		void setval()
		{
			cout<<"\n\n enter a :";
			cin>>a;
		}
		
		void putval()
		{
			cout<<"\n a="<<a;
		}
		
		
};

int staticdemo::a=0;





int main()
{
	staticdemo d1,d2,d3;
	d1.setval();
	d2.setval();
	d3.setval();
	
	d1.putval();
	d2.putval();
	d3.putval();
	return 0;
}