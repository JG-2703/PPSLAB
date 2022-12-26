#include<stdio.h>
void main()
{
    int y;
    printf("ENTER YEAR:");
    scanf("%d",&y);
    if(((y%4==0)&&(y%100!=0))||y%400==0)
    {
        printf("%d is Leap Year.",y);
    }
    else
    {
        printf("%d is Common Year.",y);
    }
}
