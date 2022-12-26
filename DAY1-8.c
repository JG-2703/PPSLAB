#include<stdio.h>
void main()
{
    int x,y;
    printf("ENTER COORDINATES OF POINT (X,Y):");
    scanf("%d %d",&x,&y);
    if(x>0)
    {
        if(y>0)
        {
            printf("(%d,%d) lies in 1st Quadrant.",x,y);
        }
        else
        {
            printf("(%d,%d) lies in 4th Quadrant.",x,y);
        }
    }
    else
    {
        if(y>0)
        {
            printf("(%d,%d) lies in 2nd Quadrant.",x,y);
        }
        else
        {
            printf("(%d,%d) lies in 3rd Quadrant.",x,y);
        }
    }
}
