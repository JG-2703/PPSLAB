#include<stdio.h>
void main()
{
    int i,j,s,k,n;
    printf("Enter value of N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--)
        {
            printf("%d",k);

        }
        printf("  ");
    }
}
