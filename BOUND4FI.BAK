#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void boun4fill(int x,int y,int fill,int boun){
int c=getpixel(x,y);
if(c!=fill&&c!=boun){
putpixel(x,y,fill);
boun4fill(x+1,y,fill,boun);
boun4fill(x-1,y,fill,boun);
boun4fill(x,y+1,fill,boun);
boun4fill(x,y-1,fill,boun);
}}
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(200,200,250,250);
circle(300,300,6);
boun4fill(303,303,4,15);
line(10,10,20,20);
line(0,20,20,20);
line(0,20,10,10);
boun4fill(10,15,4,15);
getch();
}


