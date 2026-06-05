#include <stdio.h>
int main()
{
    int a=1,b=0;
    start:
    b = b +a;
    a++;
    if(a<=6)
    goto start;
    printf("sum : %d",b);
    
    
}