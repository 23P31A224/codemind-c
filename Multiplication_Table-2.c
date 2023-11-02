#include<stdio.h>
int main()
{
	int i,n,A;
	scanf("%d%d",&n,&A);        
	for(i=1;i<=A;i++)           
	{
		printf("%d x %d = %d
",n,i,n*i);
	}
}