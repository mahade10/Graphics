#include<bits\stdc++.h>
#include<graphics.h>
using namespace std;
int getpt(int n1,int n2, double i){
    return n1 + (n2-n1)*i;
}
int main()
{
    int p0,p1,p2,x1,y1,x2,y2,x3,y3,xa,xb,ya,yb,x,y;
    cout<<"enter three control poin coordinates\n";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int gd = DETECT,gm;
    initgraph(&gd,&gm, "");
    circle(x1,y1,5);
    circle(x2,y2,5);
    circle(x3,y3,5);
    setcolor(WHITE);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    for(double i=0;i<1;i=i+0.0001){
        xa = getpt(x1,x2,i);
        xb = getpt(x2,x3,i);
        ya = getpt(y1,y2,i);
        yb = getpt(y2,y3,i);

        x = getpt(xa,xb,i);
        y = getpt(ya,yb,i);
        putpixel(x,y,RED);
    }
    getch();
    closegraph();
}
