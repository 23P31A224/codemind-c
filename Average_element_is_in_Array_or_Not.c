#include<stdio.h>
int main()
{
    int i,n,c=0;
    float s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s+=arr[i];
       
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==int(s/n))
        {
            printf("True");
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
}