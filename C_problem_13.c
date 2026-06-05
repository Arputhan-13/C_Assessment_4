#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the Number : ");
    scanf("%d",&a);
    start:
    if(a>0)
    {
    b=a%10;
    printf("%d",b);
    a=a/10;
    }
    if(a!=0)
    goto start;
    
}