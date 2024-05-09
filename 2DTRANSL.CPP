#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
line(300,0,300,500);
line(0,250,600,250);
float x1,x2,x3,y1,y2,y3,tx,ty;
printf("Enter coordinates\n");
scanf("%f%f%f%f%f%f",&x1,&x2,&x3,&y1,&y2,&y3);
printf("Enter tx,ty");
scanf("%f%f",&tx,&ty);
line(x1+300,y1+250,x2+300,y2+250);
line(x2+300,y2+250,x3+300,y3+250);
line(x3+300,y3+250,x1+300,y1+250);
setcolor(RED);
line(x1+300+tx,y1+250+ty,x2+300+tx,y2+250+ty);
line(x2+300+tx,y2+250+ty,x3+300+tx,y3+250+ty);
line(x3+300+tx,y3+250+ty,x1+300+tx,y1+250+ty);

getch();
}