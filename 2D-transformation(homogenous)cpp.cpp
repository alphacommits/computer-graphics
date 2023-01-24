#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14
struct point
{
	int x,y;
};
struct point v1,v2;

void translation(int x1,int y1, int x2, int y2)
{
    int x, y;
    printf("\n\t\tTRANSLATION\n");
    printf("Enter translation factors (x,y) = ");
    scanf("%d %d",&x,&y);
    
    v1.x=x+x1;
    v1.y=y+y1;
    v2.x=x+x2;
    v2.y=y+y2;
    
    printf("New translated co- ordinates are : (%d,%d) and (%d, %d)",v1.x,v1.y,v2.x, v2.y);
	
}
void rotation(int x1,int y1, int x2, int y2)
{
    int angle;
    float a;
    printf("\n\t\tROTATION\n");
    printf("Enter the angle of rotation : ");
    scanf("%d",&angle);
    a=angle*(pi/180);
    v1.x=x1*cos(a)-y1*sin(a);
    v1.y=x1*cos(a)+y1*cos(a);
    v2.x=x2 *cos(a)-y2*sin(a);
    v2.y=x2*cos(a)+y2*cos(a);
    printf("New rotated co- ordinates are: (%d,%d) and (%d, %d)\n",v1.x,v1.y,v2.x, v2.y);
}
void scaling(int x1, int y1, int x2, int y2)
{
    int s;
	printf("\n\t\t SCALING\n");
    printf("Enter Scaling factor (s) = ");
    scanf("%d",&s);
    v1.x=s*x1;
    v1.y=s*y1;
    v2.x=s*x2;
    v2.y=s*y2;
    printf("New Scaled co- ordinates are: (%d,%d) and (%d, %d)\n",v1.x,v1.y, v2.x, v2.y);
}
void shearing(int x1,int y1, int x2, int y2)
{
    int sx;
    printf("\n\t\tSHEARING\n");
    printf("Enter shearing factor for x-shear (sx) = ");
    scanf("%d",&sx);
    v1.x=sx+x1;
    v1.y=y1;
    v2.x=sx+x2;
    v2.y=y2;
    printf("New sheared co- ordinates are: (%d,%d) and (%d, %d)\n",v1.x,v1.y, v2.x, v2.y);
}

int main()
{
	int ch;
	
	printf("\n\t\t Transformations :\n\t1.) Translation\n\t2.) Rotation\n\t3.) Scaling\n\t4.) Shearing\n\t5.) EXIT\n");
	printf("\n Enter the two points of the line: \n x1,y1 = ");
	scanf("%d %d",&v1.x,&v1.y);
	printf("x2,y2 = ");
	scanf("%d %d",&v2.x,&v2.y);
    while(1)
    {
    	printf("\nEnter your choice : ");
        scanf("%d",&ch);
    	switch (ch)
    	{
    		case 1:
    			translation(v1.x,v1.y,v2.x,v2.y);
    			break;
    			
			case 2:
				rotation(v1.x,v1.y,v2.x,v2.y);
				break;
	
			case 3:
				scaling(v1.x,v1.y,v2.x,v2.y);
				break;
			case 4:
				shearing(v1.x,v1.y,v2.x,v2.y);
				break;
			case 5:
				exit(1);
			default:
				printf("ERROR ! ! .");
		}
	}
	return 0;		
}
