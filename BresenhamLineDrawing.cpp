#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>
int main()
{

    int x1,y1,x2,y2;
    inp:
    cin>>x1>>y1;
    cin>>x2>>y2;
    if((x1<0||y1<0||x2<0||y2<0)||(abs((y1-y2)/(x1-x2))>1)){
       cout<<"Invalid input\n";
       goto inp;
       }
    int gd = DETECT,gm;
    initgraph(&gd,&gm, "");
      int delx,dely,p;
      delx = x2-x1;
      dely = y2-y1;

      for(int x = x1,y = y1;x<=x2;x++){
        putpixel(x,y,RED);
        //delay(1);
         p = 2*dely - delx;
         if(p<0){
            p = p + (2*dely);
         }
         else{
            p = p +((2*dely)-(2*delx));
            y++;
         }

      }
      getch();
      closegraph();

}
