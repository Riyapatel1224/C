#include <stdio.h>
#include <conio.h>
int main()
{
    int t, i, ans;
    
    printf("write table you want  ");
    scanf(" %d", &t);
    
    for (i = 0; i <= 10; i++)    
    {
        
            printf("%dx%d-%d", t,i,ans=t*i);
            printf("\n");
    }
    
    return ans;
}