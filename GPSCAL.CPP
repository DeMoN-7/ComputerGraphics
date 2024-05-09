#include <stdio.h> 
#include <graphics.h> 
#include <conio.h> 
#include <math.h> 
void plot(float x1, float x2, float x3, float y1, float y2, float y3) { 
    line(x1 + 300, y1 + 250, x2 + 300, y2 + 250); 
    line(x2 + 300, y2 + 250, x3 + 300, y3 + 250); 
    line(x3 + 300, y3 + 250, x1 + 300, y1 + 250); 
} 
void scale(float *x, float *y,float sx,float sy) { 
    *x =*x*sx ; 
    *y =*y*sy; 
} 
void translate(float *x,float *y,float tx,float ty){ 
 *x+=tx,*y+=ty; 
} 
void main() { 
    int gd = DETECT, gm; 
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); 
    float x1, x2, x3; 
    float y1, y2, y3; 
    float pivotx , pivoty,tx,ty,sx,sy; 
    printf("Enter x1,x2 and x3 and y1,y2 and y3: \n"); 
    scanf("%f%f%f%f%f%f",&x1,&x2,&x3,&y1,&y2,&y3); 
    printf("Enter pivot points for x and y: \n"); 
    scanf("%f%f",&pivotx,&pivoty); 
    tx=pivotx,ty=pivoty; 
    printf("Enter scaling factors (Sx and Sy): \n"); 
    scanf("%f%f",&sx,&sy); 
    line(0, 250, 600, 250); 
    line(300, 0, 300, 500); 
    plot(x1, x2, x3, y1, y2, y3); 
    translate(&x1, &y1, -tx, -ty); 
    translate(&x2, &y2, -tx, -ty); 
    translate(&x3, &y3, -tx, -ty); 
    scale(&x1,&y1,sx,sy); 
    scale(&x2,&y2,sx,sy); 
    scale(&x3,&y3,sx,sy); 
    setcolor(BLUE); 
    translate(&x1, &y1, tx, ty); 
    translate(&x2, &y2, tx, ty); 
    translate(&x3, &y3, tx, ty); 
    plot(x1, x2, x3,y1, y2, y3); 
    getch(); 
} 
