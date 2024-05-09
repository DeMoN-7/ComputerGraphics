#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<conio.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int xc=200,yc=300,r;
float p,x,y;
scanf("%d",&r);
x=0;
y=r;
p=(5/4)-r;
while(x<y){
putpixel(x+xc,y+yc,3);
putpixel(x+xc,-y+yc,4);
putpixel(-x+xc,y+yc,5);
putpixel(-x+xc,-y+yc,6);
putpixel(y+xc,x+yc,7);
putpixel(y+xc,-x+yc,8);
putpixel(-y+xc,x+yc,9);
putpixel(-y+xc,-x+yc,10	);
if(p<0){
x++;
p=p+2*x+1;}
else{
x++;
y--;
p=p+2*x-2*y+1;
}
}
getch();

}