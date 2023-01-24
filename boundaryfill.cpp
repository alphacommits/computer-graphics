#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void fourpoints(int x, int y, int fill, int stroke)    
{
    if((getpixel(x, y) !=stroke ) && (getpixel(x, y) != fill))
	{
		delay(1);
		putpixel(x, y, fill);
		fourpoints(x+1, y, fill, stroke);
		fourpoints(x, y + 1, fill, stroke);
        fourpoints(x - 1, y, fill, stroke);
        fourpoints(x, y - 1, fill, stroke);
    }

}
void eightpoints(int x,int y,int fill, int stroke )
{
	if((getpixel(x, y) !=fill) && (getpixel(x, y) != stroke))
	{
		putpixel(x, y, fill);
		eightpoints(x + 1, y, fill, stroke);
        eightpoints(x, y + 1, fill, stroke);
        eightpoints(x - 1, y, fill, stroke);
       	eightpoints(x, y - 1, fill, stroke);
       	eightpoints(x - 1, y - 1, fill, stroke);
       	eightpoints(x - 1, y + 1, fill, stroke);
        eightpoints(x + 1, y - 1, fill, stroke);
       	eightpoints(x + 1, y + 1, fill, stroke);
    }	 
}


int main()
{
	int gd=DETECT,gm;
	initgraph(&gd, &gm,"");
	
	int choice;
	printf("Enter your choice:\n");
	printf("\n1. 4 points connected");
	printf("\n2. 8 points connected\n");
	scanf("%d",&choice);
	
	rectangle(50,50,200,200);
	switch(choice)
	{
		case 1:
			fourpoints(55, 55, 15, 4);
			break;
		case 2:
			eightpoints(70, 70, 7, 15);
			break;
		default:
			printf("Invalid Choice");
			
	}
	getch();
   	return 0;
}
