#include <stdio.h>
int main()
{
    int a,b=2;
    printf("Enter the Number : ");
    scanf("%d",&a);
    if(a<0)
    goto notprime;
   start:
    if(b<a)
    {
    if(a%b==0)
    goto notprime;
    b++;
    goto start;
    }
    goto prime;
   prime:
    printf("Prime");
    goto end;
   notprime:
    printf("Not prime");
   end:
   return 0;
    
}