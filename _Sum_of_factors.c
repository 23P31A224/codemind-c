#include<stdio.h>
int main()
{
    int i,n,a=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
       if(n%i==0)
       {
           a=a+i;
       }
    }
    printf("%d",a);
}