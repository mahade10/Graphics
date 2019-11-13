
#include<Windows.h>
#define MX 99999
#include<graphics.h>
#include<time.h>
#include <unistd.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    for(int t=1; t<=50; t++)
    {
        /*setcolor(GREEN);
        line(rand()%450,rand()%450,rand()%450,rand()%450);
        usleep(MX);
        cleardevice();

        setcolor(RED);
        line(rand()%350,rand()%350,rand()%350,rand()%350);
        usleep(MX);
        cleardevice();

        setcolor(BLUE);
        line(rand()%450,rand()%350,rand()%450,rand()%350);
        usleep(MX);
        cleardevice();


        setcolor(YELLOW);
        rectangle(rand()%350,rand()%350,rand()%350,rand()%350);
         usleep(MX);
        cleardevice();*/

        putpixel(rand()%450,rand()%350,rand()%15);
        delay(50);

        putpixel(rand()%450,rand()%350,rand()%YELLOW);
        delay(60);
    }
    getch();
    closegraph();
    return 0;
}

