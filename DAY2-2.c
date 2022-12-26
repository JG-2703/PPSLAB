#include<stdio.h>
void main()
{
    int i,j,c=1,n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("%d\n",c);
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            printf("%d ",i+j);
        }
        printf("\n");
    }
}
