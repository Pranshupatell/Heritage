#include<iostream>
#include<string.h>
using namespace std;

class Mother
{
	public :
		
	void Display()
	{
		cout<<"name of mother = Ashwariya rai bachchan"<<endl;
		cout<<"age of mother = 49 years"<<endl;
		cout<<"born place of mother = Manglore,karnataka"<<endl;
	}
};

class Daughter : public Mother
{
	public :
		
    void display()
	{
		cout<<"name of Daughter = Aaradhya bachchan"<<endl;
		cout<<"age of Daughter = 11 years"<<endl;
		cout<<"born place of Daughter = Mumbai,Maharashtra"<<endl;
	}	
	
};
int main()
{
    Daughter d;
    
    d.Display();
    cout<<"------------------------------------"<<endl;
    d.display();
	
	return 0;
}
