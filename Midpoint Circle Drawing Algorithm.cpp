#include<iostream>
#include<conio.h>
#include<graphics.h>

using namespace std;

void circlemidpoint(int,int,int);
void drawcircle(int,int,int,int);
int main()
{
int xc,yc,r;
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
cout<<"Enter center coordinate of circle:";
cin>>xc>>yc;
cout<<"Enter radius of circle:";
cin>>r;
circlemidpoint(xc,yc,r);
getch();
closegraph();
return 0;
}
void circlemidpoint(int xc,int yc,int r)
{
int x=0,y=r;
int p=5/4-r;
while(x<y)
{
drawcircle(xc,yc,x,y);
x++;
if(p<0)
{
p=p+2*x+1;
}
else
{
y--;
p=p+2*(x-y)+1;
}
drawcircle(xc,yc,x,y);
delay(100);
}
}
void drawcircle(int xc,int yc,int x,int y)
{
putpixel(xc+x, yc+y, GREEN);
putpixel(xc-x, yc+y, GREEN);
putpixel(xc+x, yc-y, GREEN);
putpixel(xc-x, yc-y, GREEN);
putpixel(xc+y, yc+x, GREEN);
putpixel(xc-y, yc+x, GREEN);
putpixel(xc+y, yc-x, GREEN);
putpixel(xc-y, yc-x, GREEN);
}
