#include<stdio.h>
void main()
{
    int i,j,n,k,s;
    printf("Enter a rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    for(j=1;j<=n-2;j++)
    {
        for(s=2;s<=n-j;s++)
        {
            printf(" ");
        }
        for(k=j;k<=j;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
}

