#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int xc=200,yc=200,r=100;
float x=0,y=r,p;
p=3-2*r;

while(x<y){
putpixel(x+xc,y+yc,1);
putpixel(-x+xc,y+yc,1);
putpixel(x+xc,-y+yc,1);
putpixel(-x+xc,-y+yc,1);
putpixel(y+xc,x+yc,1);
putpixel(-y+xc,x+yc,1);
putpixel(y+xc,-x+yc,1);
putpixel(-y+xc,-x+yc,1);
if(p<0){
x++;
p=p+4*x+6;
}
else{
x++;y--;
p=p+4*(x-y)+10;

}
}

}
}