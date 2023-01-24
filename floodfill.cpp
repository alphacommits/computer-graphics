#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>   
void fourflood(int,int,int,int);  
void floodfill(int,int ,int ,int);
int main()  
{  
    int gd=DETECT, gm,ch;
    initgraph(&gd, &gm, ""); 
	printf("choose: 1-> 4 connected flood fill OR 2-> eight connected flood fill: \n");
	scanf("%d",&ch); 
    rectangle(50,50,250,250);
    switch (ch)
    {
    	case 1:
    		fourflood(55,55,10,0);
    		break;
    	case 2:
    		floodfill(70,70,0,15);  
    		break;
    	default:
    		printf("wrong choice!");
	}
getch();  
return 0;
}
void fourflood(int x,int y,int fillColor, int defaultColor)  
{  
    if(getpixel(x,y)==defaultColor)  
    {   
        putpixel(x,y,fillColor);  
        fourflood(x+1,y,fillColor,defaultColor);  
        fourflood(x-1,y,fillColor,defaultColor);  
        fourflood(x,y+1,fillColor,defaultColor);  
        fourflood(x,y-1,fillColor,defaultColor);  
    }  
}   
void floodfill(int x,int y,int old,int newcol)  
{  
            int current;  
                current=getpixel(x,y);  
                if(current==old)  
                {  
                                
                                putpixel(x,y,newcol);  
                                floodfill(x+1,y,old,newcol);  
                                floodfill(x-1,y,old,newcol);  
                                floodfill(x,y+1,old,newcol);  
                                floodfill(x,y-1,old,newcol);  
                                floodfill(x+1,y+1,old,newcol);  
                                floodfill(x-1,y+1,old,newcol);  
                                floodfill(x+1,y-1,old,newcol);  
                                floodfill(x-1,y-1,old,newcol);  
                }  
}
