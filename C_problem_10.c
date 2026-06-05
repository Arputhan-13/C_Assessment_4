#include <stdio.h>
int main()
{
    int a=10,b, c, d, sum=0;
    start:
    if(a%2==1)
    {
    b=a%10;
    c=(a/10)%10;
    if(c==7)
    {
    sum =sum + a;
    }
    }
    a++;
    if(a<100)
    goto start;
    printf("%d",sum);
}