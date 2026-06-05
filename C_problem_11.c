#include <stdio.h>
int main()
{
    int a,sum =0;
    printf("Enter the Number : ");
    scanf("%d",&a);
    start:
    if(a>0)
    {
    a=a/10;
    sum =sum + 1;
    }
    
    if(a!=0)
    goto start;
    printf("Number of digits : %d",sum);
}