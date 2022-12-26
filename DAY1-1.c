#include<stdio.h>
void main()
{
    int bs,allow;
    float ts,hra,da,pf;
    char ch;
    printf("ENTER GRADE (A,B or C):");
    scanf("%c",&ch);
    if (ch=='A')
    {
        allow=1700;
    }
    else if (ch=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    printf("ENTER BASIC SALARY:");
    scanf("%d",&bs);
    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    ts=bs+hra+da+allow-pf;
    printf("TOTAL SALARY:%f",ts);
}
