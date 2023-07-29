#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>

int main(){
    int gd = DETECT,gm;
    float xc,yc,x,y,rx,ry,pk1,pk2,k;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    outtextxy(200,200,"Binayak Pradhan");
    setcolor(3);
    
    printf("Give center of ellipse xc and yc: ");
    scanf("%f %f",&xc,&yc);
    printf("Give major and minor radius of ellipse: ");
    scanf("%f %f",&rx,&ry);
    
    x = 0;
    y = ry;
    pk1 = ry*ry - rx*rx*ry + (1/4)*rx*rx;
    putpixel(xc+x,yc+y,GREEN);
    
    while(2*ry*ry*x<2*rx*rx*y){
         if(pk1<0){
                   x = x + 1;
                   y = y;
                   pk1 = pk1 + 2*ry*ry*x + ry*ry;
                   }
         else{
              x = x + 1;
              y = y - 1;
              pk1 = pk1 + 2*ry*ry*x - 2*rx*rx*y + ry*ry;
              }   
              putpixel(xc+x,yc+y,GREEN);  
	      putpixel(xc-x,yc+y,GREEN);
	      putpixel(xc+x,yc-y,GREEN);
	      putpixel(xc-x,yc-y,GREEN);
	      delay(30);
    }
    pk2 = ry*ry*(x+(1/2))*(x+(1/2)) + rx*rx*(y-1)*(y-1) - rx*rx*ry*ry;
    while(y!=0){
		if(pk2<=0)
		{
			 x = x + 1;
			 y = y - 1;
			 pk2 = pk2 + 2*ry*ry*x - 2*rx*rx*y + rx*rx;
			 }
		else{
		     x = x;
		     y = y - 1;
		     pk2 = pk2 - 2*rx*rx*y + rx*rx;
		     }
		     putpixel(xc+x,yc+y,GREEN);
		     putpixel(xc-x,yc+y,GREEN);
		     putpixel(xc+x,yc-y,GREEN);
		     putpixel(xc-x,yc-y,GREEN);
		     delay(30);
		}
    getch();
    closegraph();
    return 0;
}
    
    
