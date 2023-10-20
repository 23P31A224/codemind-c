#include<stdio.h>
int main()
{
    int p,ch,b,m,c,total;
    scanf("%d %d %d %d %d",&p,&ch,&b,&m,&c);
    total=p+ch+b+m+c;
    float per=(total*100)/500.0;
    if (per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80 && per<90)
    {
        printf("Grade B");
    }
    else if(per>=70 && per<80)
    {
        printf("Grade C");
    }
    else if(per>=60 && per<70)
    {
        printf("Grade D");
    }
    else if (per>=40 && per<60)
    {
        printf("Grade E");
    }
    else if (per<40)
    {
        printf("Grade F");
    }
}