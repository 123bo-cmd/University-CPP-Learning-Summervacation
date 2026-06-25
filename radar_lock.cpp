#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

struct Target
{
	string name;
	int x,y,dis;
	double danger_level;	
};
void update_radar(Target *t,int size,int new_cx,int new_cy)
{
	int i;
	for(i=0;i<size;i++)
	{
		t[i].dis=max(abs(t[i].x-new_cx),abs(t[i].y-new_cy));
	}
}
void bubble_sort(Target *t,int size)
{
	int i,j;
	Target temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(t[j].dis>t[j+1].dis)
			{
				temp=t[j];
				t[j]=t[j+1];
				t[j+1]=temp;
			}
			else if(t[j].dis==t[j+1].dis)
			{
				if(t[j].danger_level<t[j+1].danger_level)
				{
					temp=t[j];
					t[j]=t[j+1];
					t[j+1]=temp;
				}
			}
		}
	}
}
int main()
{
	Target input[100];
	int n,i;
	int cx,cy;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>input[i].name>>input[i].x>>input[i].y>>input[i].danger_level;
	}
	
	cin>>cx>>cy;	
	
	update_radar(input,n,cx,cy);	
	
	bubble_sort(input,n);
	
	for(i=0;i<n;i++)
	{
		cout<<input[i].name<<" "<<input[i].dis<<endl;
	}
	return 0;
}