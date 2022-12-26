#include<stdio.h>
void main()
{
    int i,j,s,k,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(k=2;k<=i;k++)
        {
            printf("%d",k);

        }
        printf("\n");
    }
}
