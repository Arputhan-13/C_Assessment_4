#include <stdio.h>
int main()
{
    int a=5;
    start:
    printf("%d\n",a);
    a--;
    if(a>=1)
    goto start;
    return 0;
}