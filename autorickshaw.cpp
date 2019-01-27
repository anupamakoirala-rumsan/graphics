#include<graphics.h>
int main()

{int gd,gm;
detectgraph(&gd,&gm);
 
initgraph(&gd,&gm," ");
int i;

for(i=0;i<300;i++)
{ //rickshaw body
line(95+i,222,95+i,152);
line(95+i,152,200+i,152);
line(95+i,182,130+i,182);
line(130+i,152,130+i,182);
line(130+i,182,150+i,220);
line(200+i,150,200+i,220);
line(200+i,152,230+i,182);
line(230+i,182,230+i,222);
line(150+i,220,200+i,220);

//rickshaw wheel
circle(110+i,232,10);
circle(110+i,232,5);
arc(110+i,232,0,180,15);
circle(215+i,232,10);
circle(215+i,232,5);
arc(215+i,232,0,180,15);
line(125+i,232,200+i,232);

//outtextxy(500,242,"Stop");

    delay(20);
   
    cleardevice();
    
    line(550,242,550,212);
    rectangle(530,182,550,212);
    outtextxy(532,192,"stop");
    //road
 line(95,242,540,242);
    
   }
   

    getch();
}
