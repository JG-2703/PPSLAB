#include<stdio.h>
void main()
{
    int i,j,s,k,n=1,p;
    printf("Enter n:");
    scanf("%d",&p);
    for (i=p;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(s=3;s<=2*n-1;s++)
        {
            printf(" ");
        }

        for(k=p-1;k>=1;k--)
        {
            if(k<=i)
            printf("%d",k);
        }
        n=n+1;
        printf("\n");
    }
}

