#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<dos.h>
int main()
{
    int gd = DETECT, gm, i;
    int xc,yc,r,k;
    float x,y,p;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    outtextxy(200,200,"Binayak Pradhan");
    setcolor(3);
    
    printf("Give center xc: ");
    scanf("%d",&xc);
    printf("Give center yc: ");
    scanf("%d",&yc);
    printf("Give radius r: ");
    scanf("%d",&r);
    
    x = 0;
    y = r;
    p = (5/4) - r;
    putpixel(xc+x,yc+y,RED);
    
    while(x<y){
               if(p<0){
                       x = x + 1;
                       y = y;
                       p = p + 2*x + 1;
                       }
               else{
                    x = x + 1;
                    y = y - 1;
                    p = p + 2*x + 1 - 2*y;
                    }
                    putpixel(xc+x,yc+y,GREEN);
                    putpixel(xc-x,yc+y,GREEN);
                    putpixel(xc+x,yc-y,GREEN);
                    putpixel(xc-x,yc-y,GREEN);
                    putpixel(xc+y,yc+x,GREEN);
                    putpixel(xc-y,yc+x,GREEN);
                    putpixel(xc+y,yc-x,GREEN);
                    putpixel(xc-y,yc-x,GREEN);
                    delay(100);
                    }
    getch();
    closegraph();
    return 0;
}
