#include<stdio.h>
void main()
{
    int i,j,c=5,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++,c--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",c+j+64);

        }
        printf("\n");
    }
}
