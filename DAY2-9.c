#include<stdio.h>
void main()
{
    int i,j,s,k,c,p,r,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=1;s<=n-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (c=n-1;c>=1;c--)
    {
      for (p=n;p>c;p--)
      {
          printf(" ");
      }
      for (r=1;r<2*c;r++)
      {
          printf("*");
      }
      printf("\n");
   }
}
