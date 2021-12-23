#include <stdio.h>
#include <conio.h>
int main()
{
    
    int n1,n2;
   char y,n,ch;
   
    printf("WELCOME TO THE HOTEL DEL LUNA");
    input:
    printf("\nPlease choose your dish from the menu :)");
    printf("\n----------MENU----------");
    printf("\n1)Gujarati Dish\n2)Punjabi Dish\n");
    scanf("%d",&n1);
    
    switch(n1)
    {
        case 1:
        printf("\n You have Choosen Gujarati Dish ---------- $9.99");
        break;
        case 2:
        printf("\n You have Choosen Punajbi Dish ---------- $10.99");
        break;
        default:
        printf("\nPlease enter the valid Dish");
        break;

    }
    printf("\nDo you want another dish?\nIf YES type 'y'\nIf NO type 'n'\n");
    scanf("%s",&ch);
    if (ch == y)
    {
      goto input; 
       
    }
    else
    printf("go to hell");
    
    

    return 0;
}