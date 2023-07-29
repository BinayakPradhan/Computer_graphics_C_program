#include <dos.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <stdio.h>

int main()
{
int gd = DETECT, gm;
    int x1,y1,x2,y2,dx,dy,steps,k;
    float x,y,xinc,yinc;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    printf("Enter the value of x1,y1: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of x2,y2: ");
    scanf("%d %d",&x2,&y2);
    outtextxy(90,90,"Binayak Pradhan");
    dx = x2 - x1;
    dy = y2 - y1;
        if(abs(dx) > abs(dy))
        {
            steps = abs(dx);
        }
        else
        {
            steps = abs(dy);
        }
        xinc = dx/steps;
        yinc = dy/steps;
        x = x1;
        y = y1;
	putpixel(x,y,WHITE);
        for(k=1;k<=steps;k++)
        {
            x = x + xinc;
            y = y + yinc;
            putpixel(x,y,WHITE);
            delay(100);
        }
        getch();
        closegraph();
        return 0;
}

