//olympic symbol

#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>

using namespace std;

void circlemidpoint(int, int, int,int);
void drawcircle(int, int, int, int, int);
int main()
{
    int xc, yc, r;
    int gd=DETECT, gm;
    initgraph(&gd, &gm,(char*)"");

    cout<<"Enter radius of circle: ";
    cin>>r;

    xc=getmaxx()/2;
    yc=getmaxy()/2;
    circlemidpoint(r, xc,yc, WHITE); // USING WHITE INSTEAD OF BLACK

    xc=((getmaxx()/2)-((2*r)+5));
    yc=getmaxy()/2;
    circlemidpoint(r, xc, yc, BLUE);

    xc=((getmaxx()/2)+((2*r)+5));
    yc=getmaxy()/2;
    circlemidpoint(r, xc, yc, RED);

    xc=((getmaxx()/2)-((2*r)+5)/2);
    yc=((getmaxy()/2)+((2*r)+5)/2);
    circlemidpoint(r, xc, yc, YELLOW);

    xc=((getmaxx()/2)+((2*r)+5)/2);
    yc=((getmaxy()/2)+((2*r)+5)/2);
    circlemidpoint(r, xc, yc, GREEN);

    getch();
}

void circlemidpoint(int r, int xc, int yc, int c)
{
    int x, y, p;
    x=0;
    y=r;
    p=1-r;
    drawcircle(xc, yc, x, y, c);
    while(x<=y)
    {
        x++;
        if(p<0)
        {
        	p+=2*(x-1);
		}
        else
        {
            p+=2*(x-y)+1;
            y--;
        }
        drawcircle(xc, yc, x, y,c);
    }
}

void drawcircle(int xc, int yc, int x, int y, int c)
{
    putpixel(xc+x, yc+y, c);
    putpixel(xc+y, yc+x, c);
    putpixel(xc-x, yc+y, c);
    putpixel(xc+y, yc-x, c);
    putpixel(xc+x, yc-y, c);
    putpixel(xc-y, yc+x, c);
    putpixel(xc-x, yc-y, c);
    putpixel(xc-y, yc-x, c);
}
