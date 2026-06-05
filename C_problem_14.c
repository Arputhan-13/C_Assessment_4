#include <stdio.h>
int main()
{
    int a,b,c, o, m, y=0,f,sum, h, k=1,n=1;
    printf("Enter the Number : ");
    scanf("%d",&a);
    o=a/10;
    c=a%10;
    start:
    if(a>0)
    {
    b=a%10;
    sum=b;
    a=a/10;
    }
    if(a!=0)
    goto start;
    m=o;
    end:
    if(m>0)
    {
    m=m/10;
    y=y+1;
    }
    if(m!=0)
    goto end;
    centre:
    if(k<y)
    {
    n=n*10;
    k++;
    goto centre;
    }
    f=o%n;
    
    printf("%d%d%d",c,f,sum);
    
    
    
    
    
    
}