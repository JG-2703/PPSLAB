#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,k;
    char s[50];
    printf("Enter string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
       for(j=1;j<=i;j++)
       {
           printf(".");
       }
       for(k=i;s[k]!='\0';k++)
       {
           printf("%c",s[k]);
       }
       printf("\n");
    }
}
