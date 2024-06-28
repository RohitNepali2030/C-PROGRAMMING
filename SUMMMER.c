#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,sum,div;

    printf("ENTER A NUMBER:");
    scanf("%d",&a);

    printf("ENTER A NUMBER:");
    scanf("%d",&b);

    sum=a+b;

    printf("THE SUM IS:%d",sum);

    div=a%b;

    printf("THE DIVISION IS: %d", div);
    
}