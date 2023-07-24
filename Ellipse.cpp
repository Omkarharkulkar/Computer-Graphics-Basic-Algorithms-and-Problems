// ellipse

#include<conio.h>
#include<graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	setcolor(WHITE);
	//ellipse(x,y,strt angle,end angle,xrad,yrad)
	ellipse(280,200,0,360,200,100);
	getch();
	closegraph();
	return 0;
}
