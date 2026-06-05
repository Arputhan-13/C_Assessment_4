#include <stdio.h>
int main()
{
    int a,sum =0,b;
    printf("Enter the Number : ");
    scanf("%d",&a);
    start:
    if(a>0)
    {
    b=a%10;
    sum =sum + b;
    a=a/10;
    }
    
    if(a!=0)
    goto start;
    printf("Sum of digits : %d",sum);
}