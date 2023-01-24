 #include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()  
{ 
int x,y,x1, y1,x2,y2;
 int sc1_fctr_x, scl_fctr_y; 
 int gd=DETECT, gm; 
 initgraph (&gd, &gm,""); 
 
  printf("\nEnter first coordinate of Triangle = "); 
  scanf("%d %d", &x,&y); 
  printf("\nEnter second coordinate of Triangle = "); 
  scanf("%d %d",&x1,&y1);
   printf("\n  Enter third coordinate of Triangle = "); 
   scanf("%d %d",&x2, &y2); line (x,y,x1, y1); line (x1, y1,x2, y2);
    line (x2,y2,x,y);
	 printf("\n Now Enter Scaling factor x and y = ");
	 scanf("%d %d", &sc1_fctr_x, &scl_fctr_y);
	  x = x* sc1_fctr_x; x1 = x1*sc1_fctr_x ; 
	  x2 = x2*sc1_fctr_x;
	   y = y* scl_fctr_y;
	  y1 = y1* scl_fctr_y;
	   y2= y2 * scl_fctr_y;
line (x, y, x1, y1);
 line (x1, y1,x2,y2); 
line (x2, y2,x,y); 
getch(); 
closegraph();
}
