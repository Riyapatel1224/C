#include<stdio.h>
#include<conio.h>
int main()
{
    char ch,a,e,i,o,u,A,E,I,O,U;
    printf("enter a alphabet: ");
    scanf("%s",&ch);
    if ((ch==a)&&(ch==e)&&(ch==i)&&(ch==o)&&(ch==u)&&(ch==A)&&(ch==E)&&(ch==I)&&(ch==O)&&(ch==U))
    printf("alphabet is vowel");
    else 
    printf("alphabet is not vowel");
    return 0;
}

/*#include<stdio.h>

int main()
{
   

    char ch;
    printf("Input a Character :  ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is not a vowel.\n", ch);
    }
    
    return 0;
}*/