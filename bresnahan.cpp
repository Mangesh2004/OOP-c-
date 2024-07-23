#include <iostream>
#include <graphics.h>
#include <cmath>

int main()
{
    int gd = DETECT, gm; 
    int x1, y1, x2, y2;

    std::cout << "Enter the coordinates of the first point (x1 y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Enter the coordinates of the second point (x2 y2): ";
    std::cin >> x2 >> y2;

    initgraph(&gd, &gm, NULL); 


    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int p = 2 * dy - dx;
    int x = x1;
    int y = y1;

    while (x <= dx)
    {
        putpixel(x, y, WHITE);
        

        if (p < 0)
        {
        	x++;
            p += 2 * dy;
        }
        else
        {
        	x++;
            y++;
            p += 2 * (dy - dx);
        }
    }

    getch();
    closegraph(); 
    return 0;
}

