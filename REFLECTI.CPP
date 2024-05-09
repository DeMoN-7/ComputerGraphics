#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void plot(int x1,int y1, int x2,int y2,int x3,int y3){
line(x1+300,y1+250,x2+300,y2+250);
line(x2+300,y2+250,x3+300,y3+250);
line(x3+300,y3+250,x1+300,y1+250);
}
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(GREEN);
line(300,0,300,600);
line(0,250,700,250);
setcolor(RED);
plot(10,10,10,50,40,70);
plot(10,-10,10,-50,40,-70);
plot(-10,-10,-10,-50,-40,-70);
plot(-10,10,-10,50,-40,70);
getch();
}