#include<stdio.h>
void main()
{
    int temp;
    printf("ENTER TEMPERATURE IN CENTEGRADE:");
    scanf("%d",&temp);
    if(temp<0)
    {
        printf("FREEZING WEATHER");
    }
    else if(temp>0&&temp<10)
    {
        printf("VERY COLD WEATHER");
    }
    else if(temp>10&&temp<20)
    {
        printf("COLD WEATHER");
    }
    else if(temp>20&&temp<30)
    {
        printf("NORMAL IN TEMPERATURE");
    }
    else if(temp>30&&temp<40)
    {
        printf("ITS HOT");
    }
    else if(temp>=40)
    {
        printf("ITS VERY HOT");
    }
}
