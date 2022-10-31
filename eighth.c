/*                                                   Variable decleration and assigning                                                                                      */
#include <stdio.h>
int main ()
{  
/*                                                               Decleration                                                                                                */
    int a,b,c,d,e,f,g,h;

//---------------------------------------------------------Hours to Seconds--------------------------------------------------------------------------------------------------//
    printf("Enter time in Hours :");
    scanf("%d", &a);

    b = a*60*60;

    printf("Time in Seconds = %d\n",b);

//---------------------------------------------------------Hours to Minutes--------------------------------------------------------------------------------------------------//
    
     printf("Enter time in Hours :");
    scanf("%d", &c);

    d = c*60;

    printf("Time in Minutes = %d\n",d);

//---------------------------------------------------------Minutes to Seconds--------------------------------------------------------------------------------------------------//
    
     printf("Enter time in Minutes :");
    scanf("%d", &e);

    f = e*60;

    printf("Time in Seconds = %d\n",f);

//--------------------------------------------------------- Days to Seconds--------------------------------------------------------------------------------------------------//
    
      printf("Enter time in Days :");
    scanf("%d", &g);

    h = g*24*60*60;

    printf("Time in Seconds = %d",h);

    return 0;

}