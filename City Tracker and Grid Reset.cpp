#include<iostream>
#include<string>
#include<cmath>
using namespace std;

struct point
{
	string name;
	int x,y;
};


void reset(point *p,int basex,int basey)
{
	p->x=p->x-basex;
	p->y=p->y-basey;
}


int main()
{
	int time,i,j,k,basex,basey,dis,dis1,dis2;
	point pts[100]; //create a structure array
	
	while(cin>>time && time!=0)
	{
		for(i=0;i<time;i++)
		{
			cin>>pts[i].name>>pts[i].x>>pts[i].y;
		}
		
		basex=pts[0].x;
		basey=pts[0].y;
		
		for(i=0;i<time;i++)
		{
			reset(&pts[i],basex,basey);
		}
		
		for(j=0;j<time-1;j++)  //bubble sort
		{
			for(k=0;k<time-1-j;k++)
			{
				dis1=abs(pts[k].x)+abs(pts[k].y);
				dis2=abs(pts[k+1].x)+abs(pts[k+1].y);
				
				if(dis1>dis2)
				{
					point temp=pts[k];
					pts[k]=pts[k+1];
					pts[k+1]=temp;
				}
			}
		}
		
		for(i=0;i<time;i++)
		{
			dis=abs(pts[i].x)+abs(pts[i].y);
			cout<<pts[i].name<<" "<<dis<<endl;
		}
		cout<<endl;
	}
	return 0;
}
