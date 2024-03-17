#include<stdio.h>
int main()
{
    int i,n;
    float sum=0,res;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
       sum=sum+arr[i];
    }
        res=sum/n;
    printf("%.2f",res);
    
}