#include<stdio.h>
int main()
{
    int n,a,b=0;
    scanf("%d",&n);
    a=n%10;
    while(n>9)
    {
        n=n/10;
    }
    printf("%d",a+n);
}