// Bresenham line drrawing algorithm - dashed line

#include<graphics.h>
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

void bresenham(int x1, int y1, int x2, int y2)
{
	int gd=DETECT,gm;
	int dx,dy,x,y,xEnd,p,m,cnt=0;
	
	initgraph(&gd,&gm,(char*)"");
	setcolor(WHITE);
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
	
	while(x < xEnd)
    {
        x=x+1;
        if((cnt/5)%2 ==0)
        putpixel(x,y,GREEN);
        if (p<0)
        {
            p=p+2*dy;
        }
        else
        {
            if(m>=0 && m<=1)
            y=y+1;
        else
       {
            if(dx==0)
            x--;
            y--;
       }
        p=p+2*(dy-dx);
        }
        //putpixel(x,y,1);
        delay(10);
        cnt++;
   }
}
int main()
{
	int x1,x2,y1,y2;
	cout<<"Enter the points:\n";
	cout<<"(x1,y1): ";
	cin>>x1>>y1;
	cout<<"(x2,y2): ";
	cin>>x2>>y2;
	bresenham(x1,y1,x2,y2);
	getch();
	return 0;
}

