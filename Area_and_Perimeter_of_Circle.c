#include<stdio.h>
int main()
{
    float r,p=3.14,area,perimeter;
    scanf("%f%f",&r,&p);
    area=p*r*r;
    printf("%.2f
",area);
    perimeter=2*p*r;
    printf("%.2f",perimeter);
}