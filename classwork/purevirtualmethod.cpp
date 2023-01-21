#include<iostream>
using namespace std;

/*

	Pure Virtual Function.
	
	- These functions are declared with virtual keyword.
	- They have the Declaration.
	- They do not contain any body.
	
	syntax: 
	
		virtual void show();
		
	important rule.
	
	- If you are declaring a pure virtual function, then it is compuslory to
	  implement that function in the class,which is inheriting it.
	
	

*/


class Fan
{
	public:
	// Non - Virtual Function /Concrete Method.
	void install()
	{
		cout<<"\nIt is Stable";
	}
	
	//Virtual Function / Non- Concrete Method.
	virtual void ONButton();
};

class Switch : public Fan
{
	public:
	void ONButton()
	{
		cout<<"\nIt is rotating.";
	}
};


int main()
{
	int choice;
	Switch s;		
	cout<<"\nPress 1. to OFF the Fan";
	cout<<"\nPress 2. to ON the Fan";	
	cout<<"\nEnter your choice ?";
	cin>>choice;
	switch(choice)
	{
		case 1 : s.install();
			    break;
		case 2 : s.ONButton();
				break;
		default : cout<<"\nInvalid Choice.";
			    break;
	}
	
	return 0;
}