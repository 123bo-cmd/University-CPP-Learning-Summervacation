#include<iostream>
using namespace std;

struct temperature
{
	double f;
	double c;
};
int main()
{
	temperature t;
	int choice;
	
	cout<<"Press 1 -> Fahrenheit Temperature."<<endl;
	cout<<"Press 2 -> Celsius Temperature."<<endl;
	cout<<"Please choose : ";
	
	cin>>choice;
	
	if(choice==1)
	{
		cout<<"Please enter degree : ";
		cin>>t.f;
		t.c=(5.0/9.0)*(t.f-32.0);
		
		cout<<"\n****OUTPUT****\n";
		cout<<"Fahrenheit Temperature "<<t.f<<" = Celsius Temperature "<<t.c<<endl;
	}
	else if(choice==2)
	{
		cout<<"Please enter degree : ";
		cin>>t.c;
		t.f=(9.0/5.0)*t.c+32;
		
		cout<<"\n****OUTPUT****\n";
		cout<<"Celsius Temperature "<<t.c<<" = Fahrenheit Temperature "<<t.f<<endl;
	}
	else
	{
		cout<<"WRONG!!"<<endl;
	}
	return 0;
}