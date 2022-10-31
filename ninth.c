/*                                                   Variable decleration and assigning                                                                                      */
#include <stdio.h>
int main()
{
/*                                                               Decleration                                                                                                */
    int a,b,c,d,e,f;

//--------------------------------------------------------------------Area of Rectangle-------------------------------------------------------------------------------------//
    
    printf("Enter the length of a rectangle :");
    scanf("%d", &a);

    printf("Enter the breadth of a rectangle :");
    scanf("%d", &b);

    c = a*b;

    printf("the area of rectangle is %d\n",c);

//--------------------------------------------------------------------Perimeter of Rectangle----------------------------------------------------------------------------------//
    
    printf("Enter the length of a rectangle :");
    scanf("%d", &d);

    printf("Enter the breadth of a rectangle :");
    scanf("%d", &e);

    f = 2*(d+e);

    printf("the perimeter of rectangle is %d",f);

    return 0;

}