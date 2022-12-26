#include<stdio.h>
void main()
{
    int i,j,s,c,r,p,k,n;
    printf("Enter n:");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
      for (s=0;s<n-i;s++)
      {
             printf(" ");
      }
      for (j=1;j<2*i;j++)
      {
          printf("*");
      }
      printf("\n");
    }
    for(c=2;c<=n;c++)
    {
        for(p=1;p<=n-c;p++)
        {
            printf(" ");
        }
        for(r=1;r<=2*c-1;r++)
        {
            printf("*");
        }
        printf("\n");
    }
}
