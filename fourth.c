/*                                                   Variable decleration and assigning                                                                                      */
#include <stdio.h>
int main()
{
/*                                                               Decleration                                                                                                */
    int a,b,c;
    printf("Rate of Interest is 6 percent p.a \n");

    printf("Enter Principal amount (rupees) :");
    scanf("%d", &a);

    printf("Enter Time taken (years) :");
    scanf("%d", &b);

    c = 6;

    printf("The value of Simple Interest = %d",a*b*c/100);

    return 0;
    }