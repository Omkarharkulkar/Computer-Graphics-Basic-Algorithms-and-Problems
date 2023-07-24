// Bresenham line drrawing algorithm - thin line

#include<graphics.h>
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

void bresenham(int x1, int y1, int x2, int y2)
{
	int gd=DETECT,gm;
	int dx,dy,x,y,xEnd,p,m,a,cnt=0;
	
	initgraph(&gd,&gm,(char*)"");
	setcolor(GREEN);
	dx=abs(x1-x2);
	dy=abs(y1-y2);
	p=2*dy-dx;
	m=dy/(float)dx;
	if(x1>x2)
	{
		x=x2;
		y=y2;
		xEnd=x1;
	}
	else
	{
		x=x1;
		y=y1;
		xEnd=x2;
	}
	putpixel(x,y,GREEN);
	while(x<xEnd)
	{
		x=x+1;
		if(p<0)
		p=p+2*dy;
		else
		y=y+1;
		//y=y+1;
		p=p+2*(dy-dx);
	}
}
int main()
{
	int x1,x2,y1,y2,a;
	cout<<"Enter the points:\n";
	cout<<"(x1,y1): ";
	cin>>x1>>y1;
	cout<<"(x2,y2): ";
	cin>>x2>>y2;
	bresenham(x1,y1,x2,y2);
	getch();
	return 0;
}

