#include<stdio.h>
void main()
{
    int i,j,s,k,p;
    printf("Enter n:");
    scanf("%d",&p);
    int n=p;
    for(i=1;i<=p;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for (s=1;s<=2*n-2;s++)
        {
            printf(" ");
        }
        for(k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        n=n-1;
        printf("\n");
    }
}
