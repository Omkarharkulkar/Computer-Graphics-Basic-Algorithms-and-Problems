// Flood Fill Algorithm

#include<stdio.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>

void flood(int, int, int, int);

int main()
{
	int gd=DETECT, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, (char*)"");
	
	rectangle(100,100,200,200);
	flood(110,110,12,0);
	
	getch();
	return 0;	
}

void flood(int x, int y, int fill_col, int old_col)
{
	if(getpixel(x,y)==old_col)
	{
		delay(10);
		putpixel(x,y,fill_col);
		flood(x+1, y, fill_col, old_col);
		flood(x-1, y, fill_col, old_col);
		flood(x, y+1, fill_col, old_col);
		flood(x, y-1, fill_col, old_col);
		flood(x+1, y-1, fill_col, old_col);
		flood(x+1, y+1, fill_col, old_col);
		flood(x-1, y-1, fill_col, old_col);
		flood(x-1, y+1, fill_col, old_col);
	}
}
