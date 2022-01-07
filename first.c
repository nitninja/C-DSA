#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main(){
int x,y,r,xc,yc;float d;
int gd = DETECT,gm;
initgraph(&gd,&gm,"c:\\TurboC3\\bgi");
printf("Enter the radius ");
scanf("%d",&r);
x=0,y=r,xc=200,yc=200;
d=1.25-r;
do{
putpixel(y+xc,x+yc, WHITE);
putpixel(x+xc,y+yc, WHITE);
putpixel(x+xc,-y+yc, WHITE);
putpixel(y+yc,-x+xc, WHITE);
putpixel(-y+yc,-x+xc, WHITE);
putpixel(-x+xc,-y+yc, WHITE);
putpixel(-x+xc,y+yc, WHITE);
putpixel(-y+yc,x+xc, WHITE);
if(d<0){
x=x+1;
y=y;
d=d+2*x+1;
}
else{
x=x+1;
y=y-1;
d=d+2*x-2*y+1;
}
}while(x<y);
delay(2000);
circle(xc,yc,r/4);
delay(3000);
circle(xc,yc,r/2);
delay(4000);
circle(xc,yc,3*r/4);
getch();
}