#include<stdio.h>
#include<graphics.h>

int drawcircle(int x0, int y0, int rd)
{
    int x = rd;
    int y = 0;
    int Po = 0;
 
    while (x >= y)
    {
putpixel(x0 + x, y0 + y, 7);
putpixel(x0 + y, y0 + x, 7);
putpixel(x0 - y, y0 + x, 7);
putpixel(x0 - x, y0 + y, 7);
putpixel(x0 - x, y0 - y, 7);
putpixel(x0 - y, y0 - x, 7);
putpixel(x0 + y, y0 - x, 7);
putpixel(x0 + x, y0 - y, 7);
 
if (Po <= 0)
{
    y = y+ 1;
    Po = Po+ 2*y + 1;
}
 
if (Po > 0)
{
    x = x- 1;
    Po = Po -2*x + 1;
}
    }
}
 
int main()
{
   int gd = DETECT, gm=DETECT, Po, x, y, r;
   initgraph(&gd,&gm,"");
 
printf("\n\tEnter radius of circle: ");
scanf("%d", &r);
 
printf("\n\tEnter co-ordinates of center as ");
printf("\n\t X = ");
scanf("%d",&x);
printf("\t Y = ");
scanf("%d",&y);
drawcircle(x, y, r);
getch();
closegraph();
return 0;
}
