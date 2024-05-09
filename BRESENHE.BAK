#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
float xc=200,yc=300,r=100;
float x=0;
float y=r;
float p=3-(2*r);
while(x<y){
putpixel(x+xc,y+yc,3);
putpixel(x+xc,-y+yc,3);
putpixel(-x+xc,y+yc,3);
putpixel(-x+xc,-y+yc,3);
putpixel(y+xc,x+yc,3);
putpixel(y+xc,-x+yc,3);
putpixel(-y+xc,x+yc,3);
putpixel(-y+xc,-x+yc,3);
if(p<0){
x++;
p=p+4*x+6;}
else{
x++;y--;
p=p+4*(x-y)+10;}
}
getch();
}
