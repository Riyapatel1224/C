#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("enter a character: ");
    ch=getchar();
    if(islower(ch))
    putchar(toupper(ch));
    else
    putchar(tolower(ch));
    printf("%s",ch);
    return 0;

}