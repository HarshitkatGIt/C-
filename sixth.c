/*                                                   Variable decleration and assigning                                                                                      */
#include <stdio.h>
int main()
{
/*                                                               Decleration                                                                                                */
    int a,b,c;

    c = 0;

    printf("Enter Number a :");
    scanf("%d",&a);

    printf("Enter Number b :");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;

    printf("a =%d \n",a);
    printf("b =%d",b);

    return 0;

}