#include<stdio.h>
void main()
{
    int i,j,k,s,c=1,num,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",i+j-1);
            num=i+j-2;
        }
        for(k=num;k>=i;k--)
        {
            printf("%d",k);

        }
        printf("\n");
    }
}
