#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,gd = DETECT,gm;
    initgraph(&gd,&gm,"");
    line(100,150,300,150);

    lineto(100,200);
    getch();
    closegraph();
    return 0;
}
