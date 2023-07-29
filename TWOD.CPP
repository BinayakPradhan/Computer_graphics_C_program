
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

int main(){
    int gd=DETECT,gm;
    int x1,y1,x2,y2,x3,y3,tx,ty,sx,sy,shx,shy,ch;
    float radian,theta;
    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    outtextxy(200,200,"Binayak Pradhan");
    setcolor(3);
    printf("Give first point: ");
    scanf("%d%d",&x1,&y1);
    printf("Give second point: ");
    scanf("%d%d",&x2,&y2);
    printf("Give third point: ");
    scanf("%d%d",&x3,&y3);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    setcolor(GREEN);
    printf("Give choice: ");
    scanf("%d",&ch);
    switch(ch){
	       case 1:
		    {
			  printf("Give tx and ty: ");
			  scanf("%d%d",&tx,&ty);
			  x1 = x1 + tx;
			  y1 = y1 + ty;
			  x2 = x2 + tx;
			  y2 = y2 + ty;
			  x3 = x3 + tx;
			  y3 = y3 + ty;
			   line(x1,y1,x2,y2);
			   line(x2,y2,x3,y3);
			   line(x3,y3,x1,y1);
			   break;
			  }
	       case 2:
                 {
    			printf("Give the angle of rotation: ");
    			scanf("%f",&theta);
    			radian = theta * (3.14/180);
    			x1 = (cos(radian)*x1) - (sin(radian)*y1);
    			y1 = (sin(radian)*x1) + (cos(radian)*y1);
    			x2 = (cos(radian)*x2) - (sin(radian)*y2);
    			y2= (sin(radian)*x2) + (cos(radian)*y2);
    			x3 = (cos(radian)*x3) - (sin(radian)*y3);
    			y3= (sin(radian)*x3) + (cos(radian)*y3);
    			line(x1,y1,x2,y2);
    			line(x2,y2,x3,y3);
    			line(x3,y3,x1,y1);
    			break;
		      }
		    
	       case 3:
		    {
			  printf("Give shx: ");
			  scanf("%d",&shx);
			  x1 = x1 + shx * y1;
			  y1 = y1;
			  x2 = x2 + shx * y2;
			  y2 = y2;
			  x3 = x3 + shx * y3;
			  y3 = y3;
			  line(x1,y1,x2,y2);
			  line(x2,y2,x3,y3);
			  line(x3,y3,x1,y1);
			  break;
			  }
		    case 4:
		         {
    			  printf("Give sx and sy: ");
    			  scanf("%d%d",&sx,&sy);
    			  x1 = x1 * sx;
    			  y1 = y1 * sy;
    			  x2 = x2 * sx;
    			  y2 = y2 * sy;
    			  x3 = x3 * sx;
    			  y3 = y3 * sy;
    			  line(x1,y1,x2,y2);
    			  line(x2,y2,x3,y3);
    			  line(x3,y3,x1,y1);
    			  break;
			  }
		      default:
			  printf("Invalid!");
	       }
	       
    getch();
    closegraph();
    return 0;

}
