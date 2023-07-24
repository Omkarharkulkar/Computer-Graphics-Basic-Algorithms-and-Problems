//RECTANGLE

#include<graphics.h>
#include<conio.h>

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd,&gm,(char*)"");
	setcolor(WHITE);
	rectangle(150,180,250,300);
	getch();
	closegraph();
	return 0;
}
