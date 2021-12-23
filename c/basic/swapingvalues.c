#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("swapped values are\n a=%d \n b=%d",a,b);
    return 0;

}