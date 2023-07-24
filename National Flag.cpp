// National Flag hoisting

#include <conio.h>
#include <graphics.h>
#include <stdio.h>

int main()
{
	int gm,gd=DETECT;
	initgraph(&gd, &gm,(char*)"");

	line(250, 100, 250, 600);
	line(250, 100, 250, 600);

	setfillstyle(SOLID_FILL, WHITE);

	rectangle(225, 600, 275, 610);
	rectangle(200, 610, 300, 620);

	floodfill(227, 608, 15);
	floodfill(202, 618, 15);

	setfillstyle(SOLID_FILL, LIGHTRED);

	rectangle(250, 100, 650, 280);
	line(250, 160, 650, 160);
	floodfill(252, 158, 15);

	setfillstyle(SOLID_FILL, BLUE);

	circle(450, 190, 30);
	floodfill(452, 188, 15);

	setfillstyle(SOLID_FILL, WHITE);

	line(250, 160, 480, 160);
	line(250, 220, 480, 220);
	floodfill(252, 162, 15);

	setfillstyle(SOLID_FILL, WHITE);

	line(480, 160, 650, 160);
	line(480, 220, 650, 220);
	floodfill(482, 162, 15);

	setfillstyle(SOLID_FILL, GREEN);

	line(250, 220, 650, 220);
	floodfill(252, 278, 15);
	
	getch();
	return 0;

	//closegraph();
}



