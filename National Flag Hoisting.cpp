// National flag hoisting

#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
using namespace std;
class National_Flag
{
	
    public:
    void DDA_Line(float x1, float y1,float x2,float y2);
    void plot_circle_points(int x,int y,int xc,int yc);
    void Midpoint_Circle(int xc, int yc,int r);
};

void National_Flag::DDA_Line(float x1, float y1,float x2,float y2)
{
    float x,y,dx,dy,step;
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    if(dx>dy)
    {
        step=dx;
    }
    else
    {
        step=dy;
    }
    dx=dx/step;
    dy=dy/step;
    x=x1;
    y=y1;
    putpixel(x,y,12);
    int i=1;
    while(i<step)
    {
        if(x2>=x1 && y2>=y1)
        {
            x+=dx;
            y+=dy;
            putpixel(x,y,12);
            i++;
        }
        else if(x2<=x1 && y2<=y1)
        {
            x-=dx;
            y-=dy;
            putpixel(x,y,12);
            i++;
        }
        else if(x2>=x1 && y2<=y1)
        {
            x+=dx;
            y-=dy;
            putpixel(x,y,12);
            i++;
        }
        else if(x2<=x1 && y2>=y1)
        {
            x-=dx;
            y+=dy;
            putpixel(x,y,12);
            i++;
        }
   }
}

void National_Flag:: plot_circle_points(int x,int y,int xc,int yc)
{
    //1st Quadrant
    putpixel(xc+x,yc+y,9);
    putpixel(xc+y,yc+x,9);
    //2nd Quadrant
    putpixel(xc-y,yc+x,9);
    putpixel(xc-x,yc+y,9);
    //3rd Quadrant
    putpixel(xc-y,yc-x,9);
    putpixel(xc-x,yc-y,9);
    //4th Quadrant
    putpixel(xc+y,yc-x,9);
    putpixel(xc+x,yc-y,9);
}

int main()
{
int gd=DETECT,gm ,choice;
initgraph(&gd, &gm,(char*)" ");
float x1,y1,x2,y2;
National_Flag obj;
int xc,yc,r ;
float x,y,PI=3.14;
cout<<"NATIONAL FLAG USING DDA-LINE AND MIDPOINT-CIRCLE"<<endl;
cout<<"1:DDA_Line\n2:Midpoint_Circle\n ";
cout<<"Enter the Centre Coordinates: "<<endl;
cin>>xc>>yc;
cout<<"Enter the Radius of the Circle: "<<endl;
cin>>r;
//draw the top rectangle using DDA line and color it
setcolor(LIGHTRED);
obj.DDA_Line(200,50,200,100);
obj.DDA_Line(200,100,450,100);
obj.DDA_Line(450,100,450,50);
obj.DDA_Line(450,50,200,50);
rectangle(200,50,450,100);
setfillstyle(SOLID_FILL,LIGHTRED);

floodfill(201,51,LIGHTRED);

//draw the Middle rectangle using DDA line and color it
setcolor(WHITE);
obj.DDA_Line(200,100,200,150);
obj.DDA_Line(200,150,450,150);
obj.DDA_Line(450,150,450,100);
obj.DDA_Line(450,100,200,100);
rectangle(200,100,450,150);
setfillstyle(SOLID_FILL,WHITE);
floodfill(201,101,WHITE);

//draw the Bottom rectangle using DDA line and color it
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
obj.DDA_Line(200,150,200,200);
obj.DDA_Line(200,200,450,200);
obj.DDA_Line(450,200,450,150);
obj.DDA_Line(450,150,200,150);
rectangle(200,150,450,200);
setfillstyle(SOLID_FILL,GREEN);
floodfill(201,151,GREEN);
setcolor(BLUE);

obj.Midpoint_Circle(xc,yc,r);
//spokes
for(int i=0;i<=360;i=i+15)
{
x=r*cos(i*PI/180);
y=r*sin(i*PI/180);
line(xc,yc,xc+x,yc-y);
}

//Hoist to support a flag
setcolor(LIGHTGRAY);
rectangle(190,40,200,430);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(191,41,LIGHTGRAY);

//Ground Part
setcolor(MAGENTA);
rectangle(170,430,220,450);
setfillstyle(SOLID_FILL,MAGENTA);
floodfill(171,431,MAGENTA);

setcolor(MAGENTA);
rectangle(140,450,250,480);

setfillstyle(SOLID_FILL,MAGENTA);
floodfill(141,451,MAGENTA);

getch();
closegraph();
return 0;
}
