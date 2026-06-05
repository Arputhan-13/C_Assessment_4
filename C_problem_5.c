#include <stdio.h>
int main()
{
    int a=1;
    start:
    if(a%2==1)
    {
    printf("%d\n",a);
    }
    a++;
    if(a<=9)
    goto start;
    
}