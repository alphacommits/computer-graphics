#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
void DDALine(int x1,int x2,int y1,int y2)
{
	int steps, dx, dy, k;
	float x0, y0, x, y;
	
	dx = x2 - x1;
	dy = y2 - y1;
	if (abs(dx) > abs(dy))
		steps= abs(dx); 
		else
		steps = abs(dy);
	x0 =(float)  dx / steps;
	y0 =(float)  dy / steps;
	x = x1;
	y = y1;
	putpixel(x1, y1, 1);
	for (k = 0; k < steps; k++) 
	{
		x += x0;
		y += y0;
		putpixel(x, y, 10);
	}
}
	
int main() 
{
	int gd = DETECT, gm = DETECT, x1, y1, x2, y2;
	
	printf("Enter x1: ");
	scanf("%d",&x1);
	
	printf("Enter x2: ");
	scanf("%d",&x2);
	
	printf("Enter y1: ");
	scanf("%d",&y1);
	
	printf("Enter y2: ");
	scanf("%d",&y2);
	
	initgraph(&gd, &gm, "");
	DDALine(x1,y1,x2,y2);
	
	getch();
}
