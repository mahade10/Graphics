
#include<graphics.h>
#include<dos.h>
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd, &gm, "");
    line(100,200,500,200);
    line(300,050,500,200);
    line(300,050,100,200);

    line(100,200,500,200);
    line(100,400,500,400);
    line(100,200,100,400);
    line(500,200,500,400);
    setfillstyle(SOLID_FILL,RED);
    circle(300,300,50);
    //setfill(circle(300,300,50),RED);

    getch();
    closegraph();
}
