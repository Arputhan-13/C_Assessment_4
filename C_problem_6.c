#include <stdio.h>
int main()
{
    int a=10;
    start:
    if(a%2==1)
    {
    printf("%d\n",a);
    }
    a++;
    if(a<=19)
    goto start;
    
}