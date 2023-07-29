#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>

int main(){
    int gdriver=DETECT, gmode, i;
    initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");
    int x1,y1,x2,y2,lx,ly,dx,dy,steps,k;
    float x,y,p;
    
    
    printf("Give value of x1: ");
    scanf("%d",&x1);
    printf("Give value of y1: ");
    scanf("%d",&y1);
    printf("Give value of x2: ");
    scanf("%d",&x2);
    printf("Give value of y2: ");
    scanf("%d",&y2);
    
    outtextxy(100,100,"Binayak Pradhan");
    setcolor(3);
    
    dx = abs(x2-x1);
    dy = abs(y2-y1);
    
    if(x2>x1){
              lx = 1;
              }
    else{
         lx = -1;
         }
    if(y2>y1){
              ly = 1;
              }
    else{
         ly = -1;
         }
    x = x1;
    y = y1;
    putpixel(x,y,RED);
    
    if(dx>dy){
              p = 2*dy - dx;
              for(k=0; k<=dx; k++){
                       if(p<0){
                      x = x + lx;
                      y = y;
                      p = p + 2*dy;
                      }
                      
                      else{
                           x = x + lx;
                           y = y + ly;
                           p = p + 2*dy - 2*dx;
                           }  
                           putpixel(x,y,GREEN);
                           delay(50);
                           }
    }
    else{
         p = 2*dx - dy;
         for(k=0; k<=dy; k++){
                  if(p<0){
                          x = x;
                          y = y + ly;
                          p = p + 2*dx;
                          }
                  else{
                       x = x + lx;
                       y = y + ly;
                       p = p + 2*dx - 2*dy;
                       }
                       putpixel(x,y,YELLOW);
                       delay(50);
                       }
         }
         getch();
         closegraph();
         return 0;
}
                          
