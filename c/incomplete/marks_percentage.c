#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,total,sum,at,bt,ct,dt,e;
    float per;
    printf("enter marks of four subject you obtained: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("total number of marks each exam have");
    scanf("%d%d%d%d",&at,&bt,&ct,&dt);
    total=at+bt+ct+dt;
    printf("\n total number of marks of exam u appear %d",total);
    sum=a+b+c+d;
    printf("\n total number of marks you got %d",sum);
    e=sum/total;
    per=e*100;
    printf("\n your percentage is %.2f",per);
    
    return 0;
}