//thick line algorithm

#include<graphics.h>
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main()
{
	int gd=DETECT, gm;
	float wy,wx,x1,y1,x2,y2;
	int i, thickness;
	initgraph(&gd,&gm,(char*)"");
	cout<<"Enter the co-ordinate of the line:\n";
	cout<<"x1: ";
	cin>>x1;
	cout<<"y1: ";
	cin>>y1;
	cout<<"x2: ";
	cin>>x2;
	cout<<"y2: ";
	cin>>y2;
	cout<<"Enter the required thickness: ";
	cin>>thickness;
	cleardevice();
	line(x1,y1,x2,y2);
	if((y2-y1)/(x2-x1)<1)
	{
		wy=(thickness-1)*sqrt(pow((x2-x1),2)+pow((y2-y1),2))/(2*fabs(x2-x1));
		for(i=0;i<wy;i++)
		{
			line(x1,y1-i,x2,y2-i);//bottom
			line(x1,y1+i,x2,y2+i);//top
		}
	}
	else
	{
		wx=(thickness-1)*sqrt(pow((x2-x1),2)+pow((y2-y1),2))/(2*fabs(y2-y1));
		for(i=0;i<wx;i++)
		{
			line(x1-i,y1,x2-i,y2);//left
			line(x1+i,y1,x2+i,y2);//top
		}
	}
	cout<<"This is the line of thickness"<<thickness<<"units.\n";
	getch();
	closegraph();
	return 0;
}
