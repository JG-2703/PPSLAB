#include<stdio.h>
void main()
{
    int i,j,n,k=1,m,a[50][50],s;
    printf("ENTER VALUE OF N:");
    scanf("%d",&n);
    m=2*n-1;
    s=2*n-1;
    while(n!=0)
    {
        for(i=k;i<=m;i++)
            {
                for(j=k;j<=m;j++)
                {
                    if(i==k||j==k||i==m||j==m)
                    {
                        a[i][j]=n;
                    }
                }
            }
            n=n-1;
            m=m-1;
            k=k+1;
    }
    for(i=1;i<=s;i++)
    {
        for(j=1;j<=s;j++)
            {
                printf("%d",a[i][j]);
        }
    printf("\n");
    }
}
