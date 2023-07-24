// concentrated circles

#include<conio.h>
#include<graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	setcolor(WHITE);
	//circle(x,y,radius)
	circle(250,200,200);
	circle(250,200,160);
	circle(250,200,120);
	circle(250,200,80);
	circle(250,200,40);
	circle(250,200,20);
	getch();
	closegraph();
	return 0;
}
