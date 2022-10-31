/*                                                   Variable decleration and assigning                                                                                      */
#include <stdio.h>
int main()
{
/*                                                               Decleration                                                                                                */
    int a,b;
    
    printf("Enter Number a :");
    scanf("%d",&a);

    printf("Enter Number b :");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("A =%d \n",a);
    printf("B =%d",b);

    return 0;

}