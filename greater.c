#include <stdio.h>


int main()
{ int a,b,c,d;
    printf("Enter 4 numbers ");
        scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    if (a>=b && a>=c)
    {
        printf("%d is greater",a);
    }
    else if (b>=a && b>=c)
    {
        printf("%d is greater",b);
    }
    else
    {
        printf("%d is greater",c);
    }
    
return 0;
     
    
}