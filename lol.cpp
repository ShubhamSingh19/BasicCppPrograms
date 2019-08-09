#include<graphics.h>
#include<conio.h>
#include<dos.h>

float angle=270;
struct arccoordstype a, b;
void c1(int a1)
{
    setbkcolor(CYAN);
    setcolor(CYAN);
    arc(getmaxx()/2,getmaxy()/2,angle-a1,angle-a1,35);
    getarccoords(&a);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    fillellipse(a.xstart,a.ystart,4,4);
}

main()
{
   int gd = DETECT, gm, x, y,page=0;
   float angle1 = 90;
   struct arccoordstype a2, b2;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   DWORD shr=GetSystemMetrics(SM_CYSCREEN);
   DWORD swr=GetSystemMetrics(SM_CXSCREEN);
   int sh=3*(shr/4);
   int sw=3*(swr/4);
    initwindow(sw,sh,"click",-3,-3,false,true);
   delay(800);
   int p=90;
   while(angle1<=450)
   {
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle1,angle1+1,50);
      setcolor(RED);
      getarccoords(&a2);
      circle(a2.xstart,a2.ystart,25);
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle1+p,angle1+p,100);
      setcolor(BLUE);
      getarccoords(&a2);
      circle(a2.xstart,a2.ystart,25);
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle1+2*p,angle1+1+2*p,150);
      getarccoords(&a2);
      setcolor(CYAN);
      circle(a2.xstart,a2.ystart,25);
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle1+3*p,angle1+1+3*p,200);
      setcolor(LIGHTGREEN);
      getarccoords(&a2);
      circle(a2.xstart,a2.ystart,25);
      setcolor(BLACK);
      arc(getmaxx()/2,getmaxy()/2,angle1+p,angle1+1+p,250);
      setcolor(LIGHTCYAN);
      getarccoords(&a2);
      circle(a2.xstart,a2.ystart,50);
      angle1 = angle1+2;
      delay(1);
   }
   delay(500);
   setcolor(LIGHTCYAN);
   outtextxy(30,20,"Safal Singh");
   outtextxy(30,40,"16103010");
   delay(500);

   outtextxy(sw-150,20,"Adarsh Srivastava");
   outtextxy(sw-150,40,"16103017");
   delay(500);

   outtextxy(30,sh-60,"Ritik Jain");
   outtextxy(30,sh-40,"16103161");
   delay(500);

   outtextxy(sw-150,sh-60,"Shubham Kr Singh");
   outtextxy(sw-150,sh-40,"16103030");
   delay(500);

   settextstyle(BOLD_FONT,HORIZ_DIR,3);
   outtextxy(181,sh/2-12,"PRESS");
   delay(400);
   outtextxy(sw/2-7,sh/2-12,"A");
   delay(400);
   outtextxy(sw-250,sh/2-12,"KEY!!");

   getch();
   setbkcolor(CYAN);
   setcolor(CYAN);
   settextstyle(10,HORIZ_DIR,1);
   delay(400);

     while(angle!=1230)
     {
         setactivepage(page);
         setvisualpage(1-page);
         cleardevice();

         setcolor(BLACK);
         outtextxy((getmaxx()/2)-45,(getmaxy()/2)+70,"Loading...");

         if(angle>=0 && angle<=990)
         c1(0);

         if(angle>=300 && angle<=990)
            c1(30);

         if(angle>=330 && angle<=990)
            c1(60);

         if(angle>=360 && angle<=990)
            c1(90);

         if(angle>=390 && angle<=990)
            c1(120);

         if(angle>=420 && angle<=990)
            c1(150);

         if(angle>=450 && angle<=990)
            c1(180);

         if(angle>=480 && angle<=990)
            c1(210);

        if(angle>990 && angle<=1020)
        {
            c1(30);
            c1(60);
            c1(90);
            c1(120);
            c1(150);
            c1(180);
            c1(210);
        }
        if(angle>1020 && angle<=1050)
        {
            c1(60);
            c1(90);
            c1(120);
            c1(150);
            c1(180);
            c1(210);
        }
        if(angle>1050 && angle<=1080)
        {
            c1(90);
            c1(120);
            c1(150);
            c1(180);
            c1(210);
        }
        if(angle>1080 && angle<=1110)
        {
            c1(120);
            c1(150);
            c1(180);
            c1(210);
        }
        if(angle>1110 && angle<=1140)
        {
            c1(150);
            c1(180);
            c1(210);
        }
        if(angle>1140 && angle<=1170)
        {
            c1(180);
            c1(210);
        }
        if(angle>1170 && angle<=1200)
        {
            c1(210);
        }
        if(angle>1200)
        {

        }
         angle=angle+2;
         delay(1);
         page=1-page;
     }
     setactivepage(page);
     cleardevice();
     outtextxy((getmaxx()/2)-45,(getmaxy()/2)+70,"Lets Go!!");
     getch();

   closegraph();
}

