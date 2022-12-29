#include<iostream>
using namespace std;

class employee
{
	public:
	int eid;
	string name;
	float salary;
	
	void getdetails()
	{
		cout<<"\nenter eid :";
		cin>>eid;
		cout<<"\nenter name :";
		cin>>name;
		cout<<"\nenter salary :";
		cin>>salary;
	}
		
		void showdetails()
		{
			cout<<"\neid is :"<<eid;
			cout<<"\nname is :"<<name;
			cout<<"\nsalary is :"<<salary;
		}
};


int main()
{
	employee det;
	det.getdetails();
	det.showdetails();
	return 0;
}