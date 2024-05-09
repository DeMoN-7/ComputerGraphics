#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int x1=20,y1=20,x2=150,y2=130;
int dx=x2-x1;
int dy=y2-y1;
int x=x1,y=y1;
int p=2*dx-dy;
putpixel(x,y,4);
for(int i=1;i<=dy;i++){
if(p<0){
p=p+2*dx;
y++;
}
else{
p=p+2*dx-2*dy;
x++;
y++;
 }
 putpixel(x,y,4);
}
getch();
}