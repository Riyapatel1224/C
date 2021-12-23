#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char str[30],rev[30];
   int begin=0,length,end;
   printf("\nenter string:");
   gets(str);
   length=strlen(str);
   end=length-1;
   while(begin<length)
   {
       rev[begin]=str[end];
       begin++;
       end--;
   }
   rev[begin]='\0';
   printf("\n reverse string is %s",rev);
   return 0;
}