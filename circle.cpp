#include <iostream>
#include <graphics.h>
#include <cmath>
void dcircle(int xc, int yc , int x ,int y){
	putpixel(xc+x,yc+y,WHITE);
	putpixel(xc-x,yc+y,WHITE);
	putpixel(xc+x,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(xc+y,yc+x,WHITE);
	putpixel(xc-y,yc+x,WHITE);
	putpixel(xc+y,yc-x,WHITE);
	putpixel(xc-y,yc-x,WHITE);
	}
void bcircle(int xc, int yc ,int radius){
int x=0 ;
int y=radius;
int p=3-2*radius;
	dcircle(xc,yc,x,y);
	while(y>=x){
	x++;
	if(p>0){
	y--;
	p+=4*(x-y)+10;}
	else{
	p+=4*x+6;}
	dcircle(xc,yc,x,y);}}
int main()
{
    int gd = DETECT, gm;
    int xc, yc, radius;

    std::cout << "Enter the coordinates of the center of the circle (x y): ";
    std::cin >> xc >> yc;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    initgraph(&gd, &gm, NULL); 
	bcircle(xc, yc, radius);

    getch(); 
    closegraph(); 

    return 0;
}

