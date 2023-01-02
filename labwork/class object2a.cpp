#include<iostream>
using namespace std;


class student
{
	public:
	int eid;
	string name;
	long long mobile ;
	
	
	void showdetails(int eid,string name,long long mobile )
	{
		cout<<"\n\neid is :"<<eid;
		cout<<"\n\nname is :"<<name;
		cout<<"\n\nmobile no is :"<<mobile;
	}
	
};





int main()
{
	student stud;
	int eid;
	string name;
	long long mobile;
	cout<<"\n\nenter eid :";
	cin>>"eid";
	fflush(stdin);
	cout<<"\n\nenter name :";
	//cin>>"name";
	getline(cin,name);
	cout<<"\n\nenter mobile :";
	cin>>"mobile no";
	stud.showdetails(eid,name,mobile);
	return 0;
}