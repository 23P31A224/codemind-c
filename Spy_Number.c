#include<stdio.h>
int main()
{
    int i,n,a,b=0,c=1;
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
        a=n%10;
        b+=a;
        c*=a;
        n=n/10;
    }
    if(b==c)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}