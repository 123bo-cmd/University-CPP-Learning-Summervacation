#include<iostream>
#include<iomanip>
using namespace std;
enum Job
{
	Warrior,
	Mage,
	Thief
};
union Attribute
{
	int Anger;
	float Magic;
	char Sign;
};
struct Character
{
	Job Job_Type;
	Attribute att;
};
int main()
{
	int n,i;
	char ch;
	
	Character cha[1000];
	
	while(cin>>n && n!=0)
	{
		for(i=0;i<n;i++)
		{
			cin>>ch;
			switch(ch)
			{
				case 'W':
					cha[i].Job_Type=Warrior;
					cin>>cha[i].att.Anger;
					break;
				case 'M':
					cha[i].Job_Type=Mage;
					cin>>cha[i].att.Magic;
					break;
				case 'T':
					cha[i].Job_Type=Thief;
					cin>>cha[i].att.Sign;
					break;
			}
		}
		
		float MagicTotal=0;
		int ThiefTotal=0;
		int MagePeople=0;
		float Mageaverage=0;
		
		for(i=0;i<n;i++)
		{
			if(cha[i].Job_Type==Mage)
			{
				MagePeople++;
				MagicTotal=MagicTotal+cha[i].att.Magic;
			}
			if(cha[i].Job_Type==Thief)
			{
				if(cha[i].att.Sign=='Y')
				{
					ThiefTotal++;
				}
			}
		}
		
		if(MagePeople==0)
		{
			Mageaverage=0;
		}
		else
		{
			Mageaverage=MagicTotal/MagePeople;
		}
		cout<<fixed<<setprecision(2)<<Mageaverage<<" "<<ThiefTotal<<endl;
	}
}