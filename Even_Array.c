#include<stdio.h>
int main()
{
    int i,n,res=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
        res++;
        break;
        }
    }
    if(res!=0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    
}