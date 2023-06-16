#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public :
	int id;
	char name[100];
	char role[100];
	int salary;
	
	public :
	
	void set()
	{
	 cout<<"enter the id of employee = ";
     cin>>id;
	 cout<<"enter the name of employee = ";
	 cin>>name;
	 cout<<"enter the role of employee = ";
	 cin>>role;
	 cout<<"enter the salary of employee = ";
	 cin>>salary;	
	}
};

class B
{
	public :
	int experience;
	char comp_name[100];
	char address[100];
	
	public :
	void setdata()
	{
		 cout<<"enter the experience of employee (in years)= ";cin>>experience;	
		 cout<<"enter company name of employee = ";cin>>comp_name;
	  	 cout<<"enter address of employee = ";cin>>address;
	}
};

class C : public A,public B
{
	public :
	void get()
	{
	 cout<<"entered  the id of employee = "<<id<<endl;
	 cout<<"entered the name of employee = "<<name<<endl;
	 cout<<"entered the role of employee = "<<role<<endl;
	 cout<<"entered the salary of employee = "<<salary<<endl;
	 cout<<"entered the experience of employee = "<<experience<<endl;
	 cout<<"entered company name of employee = "<<comp_name<<endl;
	 cout<<"entered address of employee = "<<address<<endl;
	}
};
int main()
{
	C c;
	
	c.set();
	c.setdata();
	cout<<"--------------------------------------------"<<endl;
	c.get();
	
	return 0;	
}
