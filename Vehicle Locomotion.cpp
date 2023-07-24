// vehical locomotion

#include <graphics.h>
#include <stdio.h>

#define N 540

int main()
{
    int gd = DETECT, gm, i;
    initgraph(&gd, &gm, "");

    for (i = 0; i < N; i++)
    {
        setcolor(WHITE); // Set drawing color (white)
        line(0, 100, 640, 100);
        rectangle(10 + i, 70, 70 + i, 90);
        rectangle(40 + i, 50, 60 + i, 70);
        line(30 + i, 70, 40 + i, 50);
        line(60 + i, 50, 70 + i, 70);
        circle(20 + i, 95, 5);
        circle(60 + i, 95, 5);

        delay(60);
        cleardevice();
    }

    getchar();
    closegraph();
    return 0;
}

