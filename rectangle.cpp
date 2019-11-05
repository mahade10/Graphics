#include<graphics.h>
int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");
    int top=150,left=250,right=450,bottom=350;
    rectangle(top,left,right,bottom);
    getch();
    closegraph();
}
