#include<stdio.h>
int main()
{
    int i,n,osum=i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            osum+=arr[i];
        }
    }
    printf("%d",osum);
}