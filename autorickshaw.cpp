#include<graphics.h>
int main()

{int gd,gm;
detectgraph(&gd,&gm);
 
initgraph(&gd,&gm,NULL);
int i;

for(i=0;i<291;i++)
{ //rickshaw body
line(95+i,222,95+i,152);//
line(95+i,152,200+i,152);
line(95+i,182,130+i,182);
line(130+i,152,130+i,182);
line(130+i,182,150+i,220);
line(200+i,150,200+i,220);
line(200+i,152,230+i,182);
line(230+i,182,230+i,222);
line(150+i,221,200+i,221);

//rickshaw wheel
circle(110+i,232,10);
circle(110+i,232,5);
arc(110+i,232,180,0,15);
circle(215+i,232,10);
circle(215+i,232,5);
arc(215+i,232,180,0,15);
line(125+i,232,200+i,232);

    delay(15);
   
    cleardevice();
    //text 
    line(542,242,542,212);
    rectangle(530,182,560,212);
    outtextxy(532,192,"stop");
    //road
 line(95,242,542,242);
    
   }//autorickshaw 
   i=290;
 //bodypart
line(95+i,222,95+i,152);
line(95+i,152,200+i,152);
line(95+i,182,130+i,182);
line(130+i,152,130+i,182);
line(130+i,182,150+i,220);
line(200+i,150,200+i,220);
line(200+i,152,230+i,182);
line(230+i,182,230+i,222);
line(150+i,221,200+i,221);

//rickshaw wheel
circle(110+i,232,10);
circle(110+i,232,5);
arc(110+i,232,180,0,15);
circle(215+i,232,10);
circle(215+i,232,5);
arc(215+i,232,180,0,15);
line(125+i,232,200+i,232);
  
 
//road
 line(95,242,542,242);

   

    getch();
}
