#include <stdio.h>
int main()
{
    int a=10,b, c, d;
    start:
    if(a%2==0)
    {
    b=a%10;
    c=(a/10)%10;
    d=(b+c==6)*a;
    if(d!=0)
    {
    printf("%d\n",d);
    }
    }
    a++;
    if(a<100)
    goto start;
}