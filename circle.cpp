#include<graphics.h>
int main()
{
    int i = DETECT,gp;
    initgraph(&i,&gp,"");
    circle(100,100,50);
    getch();
    closegraph();
    return 0;
}
