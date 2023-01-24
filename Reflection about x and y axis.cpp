#include <conio.h>
#include <graphics.h>
#include <stdio.h>
  
// Driver Code
int main()
{
	int ch;
    // Initialize the drivers
    int gm, gd = DETECT, ax, x1 = 100;
    int x2 = 100, x3 = 200, y1 = 100;
    int y2 = 200, y3 = 100;

    initgraph(&gd, &gm, "");
    cleardevice();

    setcolor(14);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    	printf("\n\t\t Reflection menu :\n\t1.)Along x-axis\n\t2.) Along y-axis\n");
     while(1)
    {
    	printf("\nEnter your choice : ");
        scanf("%d",&ch);
    	switch (ch)
    	{
    		case 1:
    			printf(" Along x - Axis");
    		    line(getmaxx() - x1, y1,
         getmaxx() - x2, y2);
    line(getmaxx() - x2, y2,
         getmaxx() - x3, y3);
    line(getmaxx() - x3, y3,
         getmaxx() - x1, y1);
    			break;
    			
			case 2:
						printf(" Along x - Axis");
						 line(x1, getmaxy() - y1, x2,
         getmaxy() - y2);
    line(x2, getmaxy() - y2, x3,
         getmaxy() - y3);
    line(x3, getmaxy() - y3, x1,
         getmaxy() - y1);
    getch();			
				break;
			}}
    closegraph();
}
