#include <iostream>
#include <graphics.h>
#include <cmath>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL); 
    line(100,100,150,50);
    line(150,50,200,100);
    line(100,100,200,100);
    line(150,50,350,50);
    line(200,100,350,100);
    line(350,50,350,100);
    circle(150,75,10);
    rectangle(100,100,200,300);
    rectangle(200,100,350,300);
    rectangle(250,175,300,225);
    line(125,300,125,225);
    line(175,300,175,225);
    arc(150,225,180,360,25);
    getch(); 
    closegraph(); 
    return 0;
}

