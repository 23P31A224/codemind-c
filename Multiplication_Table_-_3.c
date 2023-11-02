#include<stdio.h>
int main()
{
	int i,n,m,e;
	scanf("%d%d%d",&n,&m,&e);        //6  10
	for(i=m;i<=e;i++)           ///i=starting point;i<=ending
	{
		printf("%d x %d = %d
",n,i,n*i);
	}
}