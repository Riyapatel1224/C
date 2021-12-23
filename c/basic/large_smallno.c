#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("enter the value of 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a > b) && (a > c))
        printf("\n%d is the largest numbers", a);
    else if ((b > a) && (b > c))
        printf("\n%d is the largest numbers");
    else
        printf("\n%d is the greatest numbers", c);

    if ((a < b) && (a < c))
        printf("\n%d is the smallest number", a);
    else if ((b < a) && (b < c))
        printf("\n%d is the smallest number", b);
    else
        printf("\n %d is the smallest number", c);
    return 0;
}