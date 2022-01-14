#include <stdio.h>
#include <conio.h>
int main()
{
    int i, a,j;
    printf("enter how much stages u want");
    scanf("%d", &a);
    for(i=0;a>=i;i++)
    {
        for(j=0;j<=i;j++)
        printf("*");
        printf("\n");
    }
    
    return 0;
}