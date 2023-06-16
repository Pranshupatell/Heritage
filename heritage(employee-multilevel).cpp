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
	int experience;
	char comp_name[100];
	char address[100];
	char email[100];
	int contact;
	
     public :
	void set()
	{
		cout<<"enter the id of employee = ";
		cin>>id;
		cout<<"enter the name of employee = ";
		cin>>name;
		cout<<"enter the role of employee = ";
		cin>>role;
	}
};

class B : public A
{
    public :
	void setData()
	{
	   cout<<"enter the salary of employee = ";cin>>salary;
	   cout<<"enter the experience of employee = ";cin>>experience;	
	}	
};

class C : public B 
{
	public :
	void setdata()
	{
		cout<<"enter company name of employee = ";cin>>comp_name;
		cout<<"enter address of employee = ";cin>>address;
	}
	void get()
	{
		cout<<"enter name of employee = "<<name<<endl;
		cout<<"enter role of employee = "<<role<<endl;
		cout<<"enter salary of employee = "<<salary<<endl;
	}
};

class D : public C
{
	public :
		
     void setter()
	 {
	   cout<<"enter email of employee = ";cin>>email; 	
	   cout<<"enter contact of employee = ";cin>>contact; 
	 }	
	 
	 void getdata()
	 {
	 	cout<<"id of employee = "<<id<<endl;
	   	get();
	    cout<<"experience of employee = "<<experience<<endl;
	    cout<<"company name of employee = "<<name<<endl;
		cout<<"name of employee = "<<name<<endl;
		cout<<"address of employee = "<<address<<endl;
		cout<<"email of employee = "<<email<<endl;	
	    cout<<"contact of employee = "<<contact<<endl;
	 }
};

int main()
{
	
	D d;
	d.set();
	d.setData();
	d.setdata();
	d.setter();
	d.getdata();
	
	return 0;
}
