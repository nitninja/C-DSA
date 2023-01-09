#include <graphics.h>
#include <stdio.h>
int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
setfillstyle(SOLID_FILL,BLUE);
line(300, 100, 200, 200);
line(300, 100, 400, 200);
line(200, 200, 400, 200);
floodfill(301, 102, WHITE);
rectangle( 230,200, 370, 370);getch();
closegraph();
}