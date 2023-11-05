#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float res=sqrt((x*x)+(y*y));
    printf("%.2f",res);
}