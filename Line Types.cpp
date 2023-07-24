//develop a program to draw a line with linestyle (thick, thin, dotted)

#include<graphics.h>
#include<conio.h>

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char*)"");
	setcolor(WHITE);
	
	int c;
	int x=200, y=100;
	
	for(c=0;c<5;c++)
	{
		setlinestyle(c,0,1);
		line(x,y,x+200,y);
		y=y+25;
	}
	
	getch();
	closegraph();
	return 0;
}
