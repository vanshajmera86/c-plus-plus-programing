#include<iostream>
using namespace std;


class employee
{
	public:
	int eid;
	string name;
	double salary;
	
	
	
	void getdetails()
	{
		cout<<"\nenter eid :";
		cin>>name;
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
	employee van;
	van.getdetails();
	van.showdetails();
	return 0;
}