#include<stdio.h>
#include<conio.h>
#include<graphics.h>
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
rectangle(10,10,50,50);
boun4fill(11,11,3,15);
circle(40,40,10);
rectangle(45,45,65,65);
getch();
}