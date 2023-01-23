//      wedding assesment//

#include<iostream>
using namespace std;
class event{
  private:
  const double costperhour=80.50;
  const double costperminutes=40;
  const double costofdinner=20.70;
  const double cserv=30.00;
  

public:
   string name;
   string cname;
   int gnum;
   int emin;
   int nserv;
   double cavg;
   double totalfoodcost;
   float totalcost;
  double coneserver;
  double cost1,cost2;
    int cfood;
    
    
    void welcome();
    void cost();
};
//function inplimention//
void event::welcome()
{
  cout<<"\n\n\t\t *********** EVENT MANAGEMENT SYSTEM ************";
  cout<<"\n\n\t\t   ENTER THE NAME OF THE EVENT                   :- ";
  cin>>name;
  cout<<"\n\n\t\t   ENTER THE CUSTOMER'S FIRST NAME AND LAST NAME :- ";
  cin>>cname;
  getline(cin,cname);
  cout<<"\n\n\t\t   ENTER THE NUMBER OF GUESTS                    :- ";
  cin>>gnum;

  cout<<"\n\n\n\t\t ENTER THE NUMBER'S OF MINUTES IN THE EVENT     :- ";
  cin>>emin;

}
//function use//
void event::cost()
{
  cout<<"\n\n\t\t====================================== EVENT ESTIMATE FOR : RAKESH KHARVA ========================";
  cout<<"\n\n\t\t   ENTER NUMBER OF SERVERS                        :- ";
  cin>>nserv;
  cout<<"\n\n\t\t   THE COST OF 1 SEVER IS                         :- "<<cserv;
  
  cout<<"\n\n\t\t   THE COST FOR FOOD IS                           :- "<<costofdinner;
    totalfoodcost=gnum*costofdinner;
   // cout<<"\n\n\t\t total food cost is                         :- "<<totalfoodcost;
        cost1=(emin/60)*costperhour;
      cost2=(emin%60)*costperminutes;
       coneserver=cost1+cost2;
    cavg=totalfoodcost/gnum;
  cout<<"\n\n\t\t  AVRAGE COST PER PERSON                            :- "<<cavg;
  //formula to find total cost//                                     :- "<<cavg;
   totalcost=totalfoodcost+(coneserver*gnum);
   cout<<"\n\n\t\t cost of one SERVER is                            :- "<<coneserver;

   cout<<"\n\n\t\t TOTAL COST IS                                   :- "<<totalcost;

}
int main()
{
  event obj;
  obj.welcome();
  obj.cost();
  
  
  return 0;
}