#include<stdio.h>
#include<string.h>
int main(){
    char s[1000],sd[1000];
    scanf("%[^n]",s);
    strcpy(sd,s);
    printf("%s",sd);
}