#include<iostream>
using namespace std;

class sample
{
	public:
		static int objcount;
		
		sample()
		{
			cout<<"\n\n default constructor is called :";
			objcount++;
		}
};

int sample::objcount=0;

int main()
{
	sample s1,s2;
	cout<<"\n\nobject count"<<s1.objcount;
	return 0;
}