#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    char b[20];
    printf("enter your name: ");
    scanf("%s",&b);
    
    printf("enter your age:");
    scanf("%d",&a);
    
    printf("name:%s \n age:%d",b,a);
    return(0);
}