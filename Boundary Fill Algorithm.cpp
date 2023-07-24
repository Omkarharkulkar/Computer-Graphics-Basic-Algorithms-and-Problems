// Boundry fill algorithm

#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>

void boundary_fill(int x, int y, int fcolor, int bcolor)
{
	if((getpixel(x,y) != bcolor) && (getpixel(x,y) != fcolor))
	{
		delay(10);
		putpixel(x,y,fcolor);
		boundary_fill(x+1, y, fcolor, bcolor);
		boundary_fill(x-1, y, fcolor, bcolor);
		boundary_fill(x, y+1, fcolor, bcolor);
		boundary_fill(x, y-1, fcolor, bcolor);
	}
}

int main()
{
	int x, y, fcolor, bcolor;
	int gd=DETECT, gm;
	initgraph(&gd, &gm, (char*)"");
	
	printf("Enter the seed point (x,y): ");
	scanf("%d%d", &x, &y);
	printf("Enter Boundary color code: ");
	scanf("%d", &bcolor);
	printf("Enter new color code: ");
	scanf("%d", &fcolor);
	
	circle(100,200,45);
	
	boundary_fill(x,y,fcolor,bcolor);
	getch();
	return 0;
}
