#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter three sides of triangle:");
    scanf("%d %d %d",&x,&y,&z);
    if(x==y&&y==z)
    {
        printf("Equilateral Triangle");
    }
    else if(x!=y&&y!=z&&z!=x)
    {
        printf("Scalene Triangle");
    }
    else
    {
        printf("Isosceles Triangle");
    }
}
