#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
}