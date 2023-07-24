//Develop menu driven program to draw Thin line, Thick Line, Dotted Line, Dashed Line using DDA Line drawing algorithm.

#include<graphics.h>
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main()
{
	int gd=DETECT, gm,opt;
	float x1,y1,x2,y2,dx,dy,step,x,y;
	int i,len;
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

	dx=abs(x2-x1);
	dy=abs(y2-y1);
	
	if(dx>=dy)
	step=dx;
	else
	step=dy;
	
	dx=dx/step;
	dy=dy/step;
	
	x=x1;
	y=y1;
	
	cout<<"Select Option:\n----------------------------\n1.Thin line\n2.Dotted line\n3.Dashed line\n4.Thick line"<<endl;
	cin>>opt;
	switch(opt)
	{
		case 1: // thin line
			i=1;
			while(i<=step)
			{
				putpixel(x,y,GREEN);
				x+=dx;
				y+=dy;
				i+=1;
				//delay(100)
			}
			getch();
			break;
				
		case 2: // dotted line
			for(i=0;i<=step;i++)
			{
				if(i%9<2)
				{
					
				}
				else if(i%9<6)
				{
					putpixel(x,y,GREEN);
				}
				else if(i%9==7)
				{
					
				}
				else
				{
					putpixel(x,y,GREEN);
				}
				x+=dx;
				y+=dy;
			}
			getch();
			break;
		
		case 3: // dashed line
			for(i=0;i<=step;i++)
			{
				if(i%9>4)
				{
					putpixel(x,y,GREEN);
				}
				x+=dx;
				y+=dy;
			}
			getch();
			break;
			
		case 4: // thick line
			i=1;
			while(i<=step)
			{
				putpixel(x,y,GREEN);
				putpixel(x+1,y,GREEN);
				putpixel(x-1,y,GREEN);
				putpixel(x+1,y+1,GREEN);
				putpixel(x+1,y-1,GREEN);
				putpixel(x+1,y+1,GREEN);
				putpixel(x-1,y-1,GREEN);
				putpixel(x,y+1,GREEN);
				putpixel(x,y-1,GREEN);
				
				x+=dx;
				y+=dy;
				i+=1;
			}
			getch();
			break;
		
		default:
			cout<<"Something went wrong"<<endl;
	}
	return 0;
}
