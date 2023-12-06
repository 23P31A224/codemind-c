#include<stdio.h>
int main()
{
    int i,n,a,b,c=0,d;
    scanf("%d",&n);
    d=n;
    a=n*n;
    for(i=1;a!=0;i++)
    {
        b=a%10;
        c+=b;
        a/=10;
    }
    if(d==c)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}