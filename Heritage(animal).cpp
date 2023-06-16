#include<iostream>
#include<string.h>
using namespace std;

class Animal
{
	public :
		int age;
		char name[100];
		char origin[100];
		
		void set_value()
		{
			cout<<"enter name of animal = ";cin>>name;
			cout<<"enter age of animal = ";cin>>age;
		}
};

class Dolphin : public Animal
{
	public :
	void getD()
	{
		set_value();
		cout<<"enter place of origin = ";cin>>origin;
		cout<<"entered name of animal = "<<name<<endl;
		cout<<"entered age of animal = "<<age<<endl;
		cout<<"enter place of origin = "<<origin<<endl;
		
	}
};

class Zebra : public Animal
{
	
	public :
	void getz()
	{
		
		set_value();
		cout<<"enter place of origin = ";cin>>origin;
		cout<<"entered name of animal = "<<name<<endl;
		cout<<"entered age of animal = "<<age<<endl;
		cout<<"enter place of origin = "<<origin<<endl;
		
	}
};

int main()
{
	Dolphin d;
	Zebra z;
	
	d.getD();
	cout<<"---------------------------------------------"<<endl;
	z.getz();
	
	
	return 0;
}

