#include<stdio.h>
#include<conio.h>
int main()
{
    char a[20],b[20];
    printf("enter your name:");
    gets(a);
    printf("\n enter your nick name:");
    gets(b);
    printf("\nyour name is %s \n your nick name is %s",a,b);
    return(0);
}