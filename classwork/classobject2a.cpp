#include<iostream>
using namespace std;

class employee
{
	public:
	int eid;
	string name;
	float salary;
	

		void showdetails(int eid,string name,float salary)
		{
			cout<<"\neid is :"<<eid;
			cout<<"\nname is :"<<name;
			cout<<"\nsalary is :"<<salary;
		}
};


int main()
{
	employee det;
	int eid;
	string name;
	float salary;
		cout<<"\nenter eid :";
		cin>>eid;
		fflush(stdin);
		cout<<"\nenter name :";
	//	cin>>name;
	   getline(cin,name);
		cout<<"\nenter salary :";
		cin>>salary;
	det.showdetails(eid,name,salary);
	return 0;
}