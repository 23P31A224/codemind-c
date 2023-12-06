#include<stdio.h>
int main()
{
    int i,m,n,sum=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        {
          sum=sum+1;;
        }
    }
    printf("%d",sum);
    
}