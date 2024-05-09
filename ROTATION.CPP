#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
void rotation(float *x,float*y,float angle){
float tempX,tempY;
tempX=*x;
tempY=*y;
*x= tempX*cos(angle)-tempY*sin(angle);
*y= tempX*sin(angle)+tempY*cos(angle);
}
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
float x1=20,x2=120,x3=120,x4=20,y1=20,y2=20,y3=120,y4=120;
float angle;
printf("Enter angle" );
scanf("%f",&angle);
angle=angle*3.14/180;
getch();
}